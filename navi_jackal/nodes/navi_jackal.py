#!/usr/bin/env python

import roslib; roslib.load_manifest('navi_jackal')
import rospy

from std_msgs.msg import Float64
from geometry_msgs.msg import Twist
from math import log, pi
from navi_jackal.cfg import JackalConfig
from navi_jackal.msg import EncoderTicks, VelocitySetpoint
from dynamic_reconfigure.server import Server

class JackalNode:
    def __init__(self):
        rospy.init_node('navi_jackal')
        self.pub_setpoint = rospy.Publisher('setpoint', VelocitySetpoint)
        self.pub_velocity = rospy.Publisher('velocity', Twist)
        self.sub_cmd      = rospy.Subscriber('cmd_vel', Twist, self.change_setpoint)
        self.sub_encoders = rospy.Subscriber('encoder_velocity', EncoderTicks, self.update_velocity)

        self.setpoint_left  = 0
        self.setpoint_right = 0

    def reconfigure(self, config, level):
        if level & 2: self.robot_radius  = config['robot_radius']
            self.wheel_radius  = config['wheel_radius']
            self.ticks_per_rev = config['ticks_per_rev']
            self.pid_freq = config['pid_frequency']
            self.pwm_max  = config['pwm_max']

    def constrain_pwm(self, pwm):
        return min(max(self, -self.pwm_max), self.pwm_max)

    def change_setpoint(self, msg_twist):
        msg_setpoint = VelocitySetpoint()

        # Use the model of a differential drive robot to convert the desired
        # linear and angular velocity into motor speeds expressed as "encoder
        # ticks per PID update." This minimizes the amount of floating point
        # math done on the microcontroller.
        v_tangent = self.robot_radius * msg_twist.angular.z
        omega_left  = (msg_twist.linear.x - v_tangent) / self.wheel_radius
        omega_right = (msg_twist.linear.x + v_tangent) / self.wheel_radius
        msg_setpoint.left  = int(self.ticks_per_rev * omega_left  / (2*pi))
        msg_setpoint.right = int(self.ticks_per_rev * omega_right / (2*pi))

        # Attempt to linearize the control problem by using a simple model of
        # the motors to estimate the PWM value necessary to reach the desired
        # angular velocity. Again, this minimizes the amount of floating point
        # math done on the microcontroller.
        feedforward_left  = -self.tau * log(1 - omega_left  / self.k)
        feedforward_right = -self.tau * log(1 - omega_right / self.k)
        msg_setpoint.ff_left  = int(self.constrain_pwm(feedforward_left))
        msg_setpoint.ff_right = int(self.constrain_pwm(feedforward_right))

        self.pub_setpoint.publish(msg_setpoint)

    def update_velocity(self, msg_encoder):
        ticks_to_vel = 2 * pi / (self.ticks_per_rev * self.pid_freq)
        msg_omega_left.data  = ticks_to_vel * msg_encoder.ticks_left
        msg_omega_right.data = ticks_to_vel * msg_encoder.ticks_right

        self.pub_omega_left.publish(msg_omega_left)
        self.pub_omega_right.publish(msg_omega_right)

if __name__ == '__main__':
    try:
        node = JackalNode()
        conf = Server(JackalConfig, node.reconfigure)
        rospy.spin()
    except rospy.ROSInterruptException:
        pass
