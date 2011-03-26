/* Auto-generated by genmsg_cpp for file /home/mckoval/ros-diamondback/navi_stack/wiimote/msg/State.msg */
#ifndef WIIMOTE_MESSAGE_STATE_H
#define WIIMOTE_MESSAGE_STATE_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"

#include "std_msgs/Header.h"
#include "geometry_msgs/Vector3.h"
#include "geometry_msgs/Vector3.h"
#include "geometry_msgs/Vector3.h"
#include "geometry_msgs/Vector3.h"
#include "geometry_msgs/Vector3.h"
#include "geometry_msgs/Vector3.h"
#include "wiimote/IrSourceInfo.h"

namespace wiimote
{
template <class ContainerAllocator>
struct State_ : public ros::Message
{
  typedef State_<ContainerAllocator> Type;

  State_()
  : header()
  , angular_velocity_zeroed()
  , angular_velocity_raw()
  , angular_velocity_covariance()
  , linear_acceleration_zeroed()
  , linear_acceleration_raw()
  , linear_acceleration_covariance()
  , nunchuk_acceleration_zeroed()
  , nunchuk_acceleration_raw()
  , nunchuk_joystick_zeroed()
  , nunchuk_joystick_raw()
  , buttons()
  , nunchuk_buttons()
  , LEDs()
  , rumble(false)
  , ir_tracking()
  , raw_battery(0.0)
  , percent_battery(0.0)
  , zeroing_time()
  , errors(0)
  {
    angular_velocity_covariance.assign(0.0);
    linear_acceleration_covariance.assign(0.0);
    nunchuk_joystick_zeroed.assign(0.0);
    nunchuk_joystick_raw.assign(0.0);
    buttons.assign(false);
    nunchuk_buttons.assign(false);
    LEDs.assign(false);
  }

  State_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , angular_velocity_zeroed(_alloc)
  , angular_velocity_raw(_alloc)
  , angular_velocity_covariance()
  , linear_acceleration_zeroed(_alloc)
  , linear_acceleration_raw(_alloc)
  , linear_acceleration_covariance()
  , nunchuk_acceleration_zeroed(_alloc)
  , nunchuk_acceleration_raw(_alloc)
  , nunchuk_joystick_zeroed()
  , nunchuk_joystick_raw()
  , buttons()
  , nunchuk_buttons()
  , LEDs()
  , rumble(false)
  , ir_tracking(_alloc)
  , raw_battery(0.0)
  , percent_battery(0.0)
  , zeroing_time()
  , errors(0)
  {
    angular_velocity_covariance.assign(0.0);
    linear_acceleration_covariance.assign(0.0);
    nunchuk_joystick_zeroed.assign(0.0);
    nunchuk_joystick_raw.assign(0.0);
    buttons.assign(false);
    nunchuk_buttons.assign(false);
    LEDs.assign(false);
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _angular_velocity_zeroed_type;
   ::geometry_msgs::Vector3_<ContainerAllocator>  angular_velocity_zeroed;

  typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _angular_velocity_raw_type;
   ::geometry_msgs::Vector3_<ContainerAllocator>  angular_velocity_raw;

  typedef boost::array<double, 9>  _angular_velocity_covariance_type;
  boost::array<double, 9>  angular_velocity_covariance;

  typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _linear_acceleration_zeroed_type;
   ::geometry_msgs::Vector3_<ContainerAllocator>  linear_acceleration_zeroed;

  typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _linear_acceleration_raw_type;
   ::geometry_msgs::Vector3_<ContainerAllocator>  linear_acceleration_raw;

  typedef boost::array<double, 9>  _linear_acceleration_covariance_type;
  boost::array<double, 9>  linear_acceleration_covariance;

  typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _nunchuk_acceleration_zeroed_type;
   ::geometry_msgs::Vector3_<ContainerAllocator>  nunchuk_acceleration_zeroed;

  typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _nunchuk_acceleration_raw_type;
   ::geometry_msgs::Vector3_<ContainerAllocator>  nunchuk_acceleration_raw;

  typedef boost::array<float, 2>  _nunchuk_joystick_zeroed_type;
  boost::array<float, 2>  nunchuk_joystick_zeroed;

  typedef boost::array<float, 2>  _nunchuk_joystick_raw_type;
  boost::array<float, 2>  nunchuk_joystick_raw;

  typedef boost::array<uint8_t, 11>  _buttons_type;
  boost::array<uint8_t, 11>  buttons;

  typedef boost::array<uint8_t, 2>  _nunchuk_buttons_type;
  boost::array<uint8_t, 2>  nunchuk_buttons;

  typedef boost::array<uint8_t, 4>  _LEDs_type;
  boost::array<uint8_t, 4>  LEDs;

  typedef uint8_t _rumble_type;
  uint8_t rumble;

  typedef std::vector< ::wiimote::IrSourceInfo_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::wiimote::IrSourceInfo_<ContainerAllocator> >::other >  _ir_tracking_type;
  std::vector< ::wiimote::IrSourceInfo_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::wiimote::IrSourceInfo_<ContainerAllocator> >::other >  ir_tracking;

  typedef float _raw_battery_type;
  float raw_battery;

  typedef float _percent_battery_type;
  float percent_battery;

  typedef ros::Time _zeroing_time_type;
  ros::Time zeroing_time;

  typedef uint64_t _errors_type;
  uint64_t errors;

  enum { INVALID = -1 };
  static const float INVALID_FLOAT;
  enum { MSG_BTN_1 = 0 };
  enum { MSG_BTN_2 = 1 };
  enum { MSG_BTN_A = 2 };
  enum { MSG_BTN_B = 3 };
  enum { MSG_BTN_PLUS = 4 };
  enum { MSG_BTN_MINUS = 5 };
  enum { MSG_BTN_LEFT = 6 };
  enum { MSG_BTN_RIGHT = 7 };
  enum { MSG_BTN_UP = 8 };
  enum { MSG_BTN_DOWN = 9 };
  enum { MSG_BTN_HOME = 10 };
  enum { MSG_BTN_Z = 0 };
  enum { MSG_BTN_C = 1 };
  enum { MSG_CLASSIC_BTN_X = 0 };
  enum { MSG_CLASSIC_BTN_Y = 1 };
  enum { MSG_CLASSIC_BTN_A = 2 };
  enum { MSG_CLASSIC_BTN_B = 3 };
  enum { MSG_CLASSIC_BTN_PLUS = 4 };
  enum { MSG_CLASSIC_BTN_MINUS = 5 };
  enum { MSG_CLASSIC_BTN_LEFT = 6 };
  enum { MSG_CLASSIC_BTN_RIGHT = 7 };
  enum { MSG_CLASSIC_BTN_UP = 8 };
  enum { MSG_CLASSIC_BTN_DOWN = 9 };
  enum { MSG_CLASSIC_BTN_HOME = 10 };
  enum { MSG_CLASSIC_BTN_L = 11 };
  enum { MSG_CLASSIC_BTN_R = 12 };
  enum { MSG_CLASSIC_BTN_ZL = 13 };
  enum { MSG_CLASSIC_BTN_ZR = 14 };

  ROS_DEPRECATED uint32_t get_angular_velocity_covariance_size() const { return (uint32_t)angular_velocity_covariance.size(); }
  ROS_DEPRECATED uint32_t get_linear_acceleration_covariance_size() const { return (uint32_t)linear_acceleration_covariance.size(); }
  ROS_DEPRECATED uint32_t get_nunchuk_joystick_zeroed_size() const { return (uint32_t)nunchuk_joystick_zeroed.size(); }
  ROS_DEPRECATED uint32_t get_nunchuk_joystick_raw_size() const { return (uint32_t)nunchuk_joystick_raw.size(); }
  ROS_DEPRECATED uint32_t get_buttons_size() const { return (uint32_t)buttons.size(); }
  ROS_DEPRECATED uint32_t get_nunchuk_buttons_size() const { return (uint32_t)nunchuk_buttons.size(); }
  ROS_DEPRECATED uint32_t get_LEDs_size() const { return (uint32_t)LEDs.size(); }
  ROS_DEPRECATED uint32_t get_ir_tracking_size() const { return (uint32_t)ir_tracking.size(); }
  ROS_DEPRECATED void set_ir_tracking_size(uint32_t size) { ir_tracking.resize((size_t)size); }
  ROS_DEPRECATED void get_ir_tracking_vec(std::vector< ::wiimote::IrSourceInfo_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::wiimote::IrSourceInfo_<ContainerAllocator> >::other > & vec) const { vec = this->ir_tracking; }
  ROS_DEPRECATED void set_ir_tracking_vec(const std::vector< ::wiimote::IrSourceInfo_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::wiimote::IrSourceInfo_<ContainerAllocator> >::other > & vec) { this->ir_tracking = vec; }
private:
  static const char* __s_getDataType_() { return "wiimote/State"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "a69651e8129655c6ed3c5039e468362c"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "#\n\
#          Wiimote State message containing one complete Wiimote state\n\
\n\
# Note: For ease of manipulation this message often uses\n\
#       int8[] when a bit vector would work. One might\n\
#       wish to use uint8[], but then Python takes\n\
#       the respective structure as a string and disallows\n\
#       item assignment.\n\
\n\
int8    INVALID       = -1\n\
float32 INVALID_FLOAT = -1.0\n\
\n\
int8 MSG_BTN_1     = 0\n\
int8 MSG_BTN_2     = 1\n\
int8 MSG_BTN_A     = 2\n\
int8 MSG_BTN_B     = 3\n\
int8 MSG_BTN_PLUS  = 4\n\
int8 MSG_BTN_MINUS = 5\n\
int8 MSG_BTN_LEFT  = 6\n\
int8 MSG_BTN_RIGHT = 7\n\
int8 MSG_BTN_UP    = 8\n\
int8 MSG_BTN_DOWN  = 9\n\
int8 MSG_BTN_HOME  = 10\n\
int8 MSG_BTN_Z     = 0\n\
int8 MSG_BTN_C     = 1\n\
int8 MSG_CLASSIC_BTN_X       = 0\n\
int8 MSG_CLASSIC_BTN_Y       = 1\n\
int8 MSG_CLASSIC_BTN_A       = 2\n\
int8 MSG_CLASSIC_BTN_B       = 3\n\
int8 MSG_CLASSIC_BTN_PLUS    = 4\n\
int8 MSG_CLASSIC_BTN_MINUS   = 5\n\
int8 MSG_CLASSIC_BTN_LEFT    = 6\n\
int8 MSG_CLASSIC_BTN_RIGHT   = 7\n\
int8 MSG_CLASSIC_BTN_UP      = 8\n\
int8 MSG_CLASSIC_BTN_DOWN    = 9\n\
int8 MSG_CLASSIC_BTN_HOME    = 10\n\
int8 MSG_CLASSIC_BTN_L       = 11\n\
int8 MSG_CLASSIC_BTN_R       = 12\n\
int8 MSG_CLASSIC_BTN_ZL      = 13\n\
int8 MSG_CLASSIC_BTN_ZR      = 14\n\
\n\
#-----------------------------\n\
# Header\n\
#----------------------\n\
\n\
Header header\n\
\n\
#----------------------\n\
# Gyro reading\n\
#-----------------------------\n\
# In radians/sec. If reading is invalid,\n\
# for instance b/c no gyro is attached to the Wii, then\n\
# set first element of covariance to -1 (same as imu_data.msg):\n\
# Covariance matrix (roll, pitch, yaw) in radians^2/sec^2.\n\
\n\
geometry_msgs/Vector3 angular_velocity_zeroed\n\
geometry_msgs/Vector3 angular_velocity_raw\n\
float64[9] angular_velocity_covariance\n\
\n\
#----------------------\n\
# Accelerometer reading\n\
#-----------------------------\n\
# Acceleration in m/sec^2. Covariance matrix\n\
# (x,y,z) in m^2/sec^4.  (all same as imu_data.msg)\n\
\n\
geometry_msgs/Vector3 linear_acceleration_zeroed\n\
geometry_msgs/Vector3 linear_acceleration_raw\n\
float64[9] linear_acceleration_covariance\n\
\n\
#------------------------------\n\
# Nunchuk Accelerometer reading\n\
#------------------------------\n\
geometry_msgs/Vector3 nunchuk_acceleration_zeroed\n\
geometry_msgs/Vector3 nunchuk_acceleration_raw\n\
\n\
#-----------------\n\
# Nunchuk Joystick\n\
#-----------------\n\
float32[2] nunchuk_joystick_zeroed\n\
float32[2] nunchuk_joystick_raw\n\
\n\
#----------------------\n\
# Wiimote buttons\n\
#-----------------------------\n\
# Mappings from Wiimote button name\n\
# to array position are defined above.\n\
#\n\
bool[11] buttons\n\
bool[2] nunchuk_buttons\n\
\n\
#----------------------\n\
# Wiimote LED states:\n\
#-----------------------------\n\
\n\
bool[4] LEDs\n\
\n\
#----------------------\n\
# Wiimote Rumble\n\
#-----------------------------\n\
# State (True or False)\n\
\n\
bool rumble\n\
\n\
#----------------------\n\
# IR Light sensor (Camera)\n\
#-----------------------------\n\
# The Wiimote handles up to four light sources, \n\
# and the wiimote_node.py software is written to \n\
# that limit as well. For future expansion\n\
# we make the following array extensible, rather\n\
# than locking its length down to four:\n\
\n\
wiimote/IrSourceInfo[] ir_tracking\n\
\n\
#----------------------\n\
# Wiimote battery\n\
#-----------------------------\n\
# A battery reading consists of two numbers: \n\
# the battery percentage, and the raw reading.\n\
# Maximum battery is 208 units (unknown how this\n\
# relates to electrical properties): \n\
\n\
float32 raw_battery\n\
float32 percent_battery\n\
\n\
#----------------------\n\
# Time of most recent zeroing:\n\
#-----------------------------\n\
\n\
time zeroing_time\n\
\n\
#----------------------\n\
# Error vector\n\
#-----------------------------\n\
# For error condition definitions see wiimoteConstants.py\n\
# Value of zero means all is well. (Currently NOT used).\n\
\n\
uint64 errors\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: wiimote/IrSourceInfo\n\
# Sensor data pertaining to the Wiimote infrared camera.\n\
# This message contains data for one of the four infrared \n\
# light sources that the camera detects.\n\
#\n\
# Each light is specified with a 2D position and \n\
# a 'source magnitude' (ir_size). If the x dimension\n\
# is set to INVALID_FLOAT, then no light was detected for \n\
# the respective light. The Wiimote handles up to\n\
# four light sources, and the wiimote_node.py software\n\
# is written to that limit as well.\n\
#\n\
# I am unsure what the 'ir_size' values represent. \n\
# They are described as 'source magnitude' in some places. I\n\
# *assume* this is signal amplitude, but it's unclear. \n\
# Note that current lowest level cwiid driver does not \n\
# seem to pass the ir_size value to the cwiid Wiimote.c. \n\
# For now this size will therefore be set INVALID\n\
\n\
float64 x \n\
float64 y \n\
int64 ir_size\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, header);
    ros::serialization::serialize(stream, angular_velocity_zeroed);
    ros::serialization::serialize(stream, angular_velocity_raw);
    ros::serialization::serialize(stream, angular_velocity_covariance);
    ros::serialization::serialize(stream, linear_acceleration_zeroed);
    ros::serialization::serialize(stream, linear_acceleration_raw);
    ros::serialization::serialize(stream, linear_acceleration_covariance);
    ros::serialization::serialize(stream, nunchuk_acceleration_zeroed);
    ros::serialization::serialize(stream, nunchuk_acceleration_raw);
    ros::serialization::serialize(stream, nunchuk_joystick_zeroed);
    ros::serialization::serialize(stream, nunchuk_joystick_raw);
    ros::serialization::serialize(stream, buttons);
    ros::serialization::serialize(stream, nunchuk_buttons);
    ros::serialization::serialize(stream, LEDs);
    ros::serialization::serialize(stream, rumble);
    ros::serialization::serialize(stream, ir_tracking);
    ros::serialization::serialize(stream, raw_battery);
    ros::serialization::serialize(stream, percent_battery);
    ros::serialization::serialize(stream, zeroing_time);
    ros::serialization::serialize(stream, errors);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, header);
    ros::serialization::deserialize(stream, angular_velocity_zeroed);
    ros::serialization::deserialize(stream, angular_velocity_raw);
    ros::serialization::deserialize(stream, angular_velocity_covariance);
    ros::serialization::deserialize(stream, linear_acceleration_zeroed);
    ros::serialization::deserialize(stream, linear_acceleration_raw);
    ros::serialization::deserialize(stream, linear_acceleration_covariance);
    ros::serialization::deserialize(stream, nunchuk_acceleration_zeroed);
    ros::serialization::deserialize(stream, nunchuk_acceleration_raw);
    ros::serialization::deserialize(stream, nunchuk_joystick_zeroed);
    ros::serialization::deserialize(stream, nunchuk_joystick_raw);
    ros::serialization::deserialize(stream, buttons);
    ros::serialization::deserialize(stream, nunchuk_buttons);
    ros::serialization::deserialize(stream, LEDs);
    ros::serialization::deserialize(stream, rumble);
    ros::serialization::deserialize(stream, ir_tracking);
    ros::serialization::deserialize(stream, raw_battery);
    ros::serialization::deserialize(stream, percent_battery);
    ros::serialization::deserialize(stream, zeroing_time);
    ros::serialization::deserialize(stream, errors);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(header);
    size += ros::serialization::serializationLength(angular_velocity_zeroed);
    size += ros::serialization::serializationLength(angular_velocity_raw);
    size += ros::serialization::serializationLength(angular_velocity_covariance);
    size += ros::serialization::serializationLength(linear_acceleration_zeroed);
    size += ros::serialization::serializationLength(linear_acceleration_raw);
    size += ros::serialization::serializationLength(linear_acceleration_covariance);
    size += ros::serialization::serializationLength(nunchuk_acceleration_zeroed);
    size += ros::serialization::serializationLength(nunchuk_acceleration_raw);
    size += ros::serialization::serializationLength(nunchuk_joystick_zeroed);
    size += ros::serialization::serializationLength(nunchuk_joystick_raw);
    size += ros::serialization::serializationLength(buttons);
    size += ros::serialization::serializationLength(nunchuk_buttons);
    size += ros::serialization::serializationLength(LEDs);
    size += ros::serialization::serializationLength(rumble);
    size += ros::serialization::serializationLength(ir_tracking);
    size += ros::serialization::serializationLength(raw_battery);
    size += ros::serialization::serializationLength(percent_battery);
    size += ros::serialization::serializationLength(zeroing_time);
    size += ros::serialization::serializationLength(errors);
    return size;
  }

  typedef boost::shared_ptr< ::wiimote::State_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wiimote::State_<ContainerAllocator>  const> ConstPtr;
}; // struct State
typedef  ::wiimote::State_<std::allocator<void> > State;

typedef boost::shared_ptr< ::wiimote::State> StatePtr;
typedef boost::shared_ptr< ::wiimote::State const> StateConstPtr;

template<typename ContainerAllocator> const float State_<ContainerAllocator>::INVALID_FLOAT = -1.0;

template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::wiimote::State_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::wiimote::State_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace wiimote

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::wiimote::State_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a69651e8129655c6ed3c5039e468362c";
  }

  static const char* value(const  ::wiimote::State_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xa69651e8129655c6ULL;
  static const uint64_t static_value2 = 0xed3c5039e468362cULL;
};

template<class ContainerAllocator>
struct DataType< ::wiimote::State_<ContainerAllocator> > {
  static const char* value() 
  {
    return "wiimote/State";
  }

  static const char* value(const  ::wiimote::State_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::wiimote::State_<ContainerAllocator> > {
  static const char* value() 
  {
    return "#\n\
#          Wiimote State message containing one complete Wiimote state\n\
\n\
# Note: For ease of manipulation this message often uses\n\
#       int8[] when a bit vector would work. One might\n\
#       wish to use uint8[], but then Python takes\n\
#       the respective structure as a string and disallows\n\
#       item assignment.\n\
\n\
int8    INVALID       = -1\n\
float32 INVALID_FLOAT = -1.0\n\
\n\
int8 MSG_BTN_1     = 0\n\
int8 MSG_BTN_2     = 1\n\
int8 MSG_BTN_A     = 2\n\
int8 MSG_BTN_B     = 3\n\
int8 MSG_BTN_PLUS  = 4\n\
int8 MSG_BTN_MINUS = 5\n\
int8 MSG_BTN_LEFT  = 6\n\
int8 MSG_BTN_RIGHT = 7\n\
int8 MSG_BTN_UP    = 8\n\
int8 MSG_BTN_DOWN  = 9\n\
int8 MSG_BTN_HOME  = 10\n\
int8 MSG_BTN_Z     = 0\n\
int8 MSG_BTN_C     = 1\n\
int8 MSG_CLASSIC_BTN_X       = 0\n\
int8 MSG_CLASSIC_BTN_Y       = 1\n\
int8 MSG_CLASSIC_BTN_A       = 2\n\
int8 MSG_CLASSIC_BTN_B       = 3\n\
int8 MSG_CLASSIC_BTN_PLUS    = 4\n\
int8 MSG_CLASSIC_BTN_MINUS   = 5\n\
int8 MSG_CLASSIC_BTN_LEFT    = 6\n\
int8 MSG_CLASSIC_BTN_RIGHT   = 7\n\
int8 MSG_CLASSIC_BTN_UP      = 8\n\
int8 MSG_CLASSIC_BTN_DOWN    = 9\n\
int8 MSG_CLASSIC_BTN_HOME    = 10\n\
int8 MSG_CLASSIC_BTN_L       = 11\n\
int8 MSG_CLASSIC_BTN_R       = 12\n\
int8 MSG_CLASSIC_BTN_ZL      = 13\n\
int8 MSG_CLASSIC_BTN_ZR      = 14\n\
\n\
#-----------------------------\n\
# Header\n\
#----------------------\n\
\n\
Header header\n\
\n\
#----------------------\n\
# Gyro reading\n\
#-----------------------------\n\
# In radians/sec. If reading is invalid,\n\
# for instance b/c no gyro is attached to the Wii, then\n\
# set first element of covariance to -1 (same as imu_data.msg):\n\
# Covariance matrix (roll, pitch, yaw) in radians^2/sec^2.\n\
\n\
geometry_msgs/Vector3 angular_velocity_zeroed\n\
geometry_msgs/Vector3 angular_velocity_raw\n\
float64[9] angular_velocity_covariance\n\
\n\
#----------------------\n\
# Accelerometer reading\n\
#-----------------------------\n\
# Acceleration in m/sec^2. Covariance matrix\n\
# (x,y,z) in m^2/sec^4.  (all same as imu_data.msg)\n\
\n\
geometry_msgs/Vector3 linear_acceleration_zeroed\n\
geometry_msgs/Vector3 linear_acceleration_raw\n\
float64[9] linear_acceleration_covariance\n\
\n\
#------------------------------\n\
# Nunchuk Accelerometer reading\n\
#------------------------------\n\
geometry_msgs/Vector3 nunchuk_acceleration_zeroed\n\
geometry_msgs/Vector3 nunchuk_acceleration_raw\n\
\n\
#-----------------\n\
# Nunchuk Joystick\n\
#-----------------\n\
float32[2] nunchuk_joystick_zeroed\n\
float32[2] nunchuk_joystick_raw\n\
\n\
#----------------------\n\
# Wiimote buttons\n\
#-----------------------------\n\
# Mappings from Wiimote button name\n\
# to array position are defined above.\n\
#\n\
bool[11] buttons\n\
bool[2] nunchuk_buttons\n\
\n\
#----------------------\n\
# Wiimote LED states:\n\
#-----------------------------\n\
\n\
bool[4] LEDs\n\
\n\
#----------------------\n\
# Wiimote Rumble\n\
#-----------------------------\n\
# State (True or False)\n\
\n\
bool rumble\n\
\n\
#----------------------\n\
# IR Light sensor (Camera)\n\
#-----------------------------\n\
# The Wiimote handles up to four light sources, \n\
# and the wiimote_node.py software is written to \n\
# that limit as well. For future expansion\n\
# we make the following array extensible, rather\n\
# than locking its length down to four:\n\
\n\
wiimote/IrSourceInfo[] ir_tracking\n\
\n\
#----------------------\n\
# Wiimote battery\n\
#-----------------------------\n\
# A battery reading consists of two numbers: \n\
# the battery percentage, and the raw reading.\n\
# Maximum battery is 208 units (unknown how this\n\
# relates to electrical properties): \n\
\n\
float32 raw_battery\n\
float32 percent_battery\n\
\n\
#----------------------\n\
# Time of most recent zeroing:\n\
#-----------------------------\n\
\n\
time zeroing_time\n\
\n\
#----------------------\n\
# Error vector\n\
#-----------------------------\n\
# For error condition definitions see wiimoteConstants.py\n\
# Value of zero means all is well. (Currently NOT used).\n\
\n\
uint64 errors\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: wiimote/IrSourceInfo\n\
# Sensor data pertaining to the Wiimote infrared camera.\n\
# This message contains data for one of the four infrared \n\
# light sources that the camera detects.\n\
#\n\
# Each light is specified with a 2D position and \n\
# a 'source magnitude' (ir_size). If the x dimension\n\
# is set to INVALID_FLOAT, then no light was detected for \n\
# the respective light. The Wiimote handles up to\n\
# four light sources, and the wiimote_node.py software\n\
# is written to that limit as well.\n\
#\n\
# I am unsure what the 'ir_size' values represent. \n\
# They are described as 'source magnitude' in some places. I\n\
# *assume* this is signal amplitude, but it's unclear. \n\
# Note that current lowest level cwiid driver does not \n\
# seem to pass the ir_size value to the cwiid Wiimote.c. \n\
# For now this size will therefore be set INVALID\n\
\n\
float64 x \n\
float64 y \n\
int64 ir_size\n\
\n\
";
  }

  static const char* value(const  ::wiimote::State_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::wiimote::State_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::wiimote::State_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::wiimote::State_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.angular_velocity_zeroed);
    stream.next(m.angular_velocity_raw);
    stream.next(m.angular_velocity_covariance);
    stream.next(m.linear_acceleration_zeroed);
    stream.next(m.linear_acceleration_raw);
    stream.next(m.linear_acceleration_covariance);
    stream.next(m.nunchuk_acceleration_zeroed);
    stream.next(m.nunchuk_acceleration_raw);
    stream.next(m.nunchuk_joystick_zeroed);
    stream.next(m.nunchuk_joystick_raw);
    stream.next(m.buttons);
    stream.next(m.nunchuk_buttons);
    stream.next(m.LEDs);
    stream.next(m.rumble);
    stream.next(m.ir_tracking);
    stream.next(m.raw_battery);
    stream.next(m.percent_battery);
    stream.next(m.zeroing_time);
    stream.next(m.errors);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct State_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::wiimote::State_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::wiimote::State_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "angular_velocity_zeroed: ";
s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.angular_velocity_zeroed);
    s << indent << "angular_velocity_raw: ";
s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.angular_velocity_raw);
    s << indent << "angular_velocity_covariance[]" << std::endl;
    for (size_t i = 0; i < v.angular_velocity_covariance.size(); ++i)
    {
      s << indent << "  angular_velocity_covariance[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.angular_velocity_covariance[i]);
    }
    s << indent << "linear_acceleration_zeroed: ";
s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.linear_acceleration_zeroed);
    s << indent << "linear_acceleration_raw: ";
s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.linear_acceleration_raw);
    s << indent << "linear_acceleration_covariance[]" << std::endl;
    for (size_t i = 0; i < v.linear_acceleration_covariance.size(); ++i)
    {
      s << indent << "  linear_acceleration_covariance[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.linear_acceleration_covariance[i]);
    }
    s << indent << "nunchuk_acceleration_zeroed: ";
s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.nunchuk_acceleration_zeroed);
    s << indent << "nunchuk_acceleration_raw: ";
s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.nunchuk_acceleration_raw);
    s << indent << "nunchuk_joystick_zeroed[]" << std::endl;
    for (size_t i = 0; i < v.nunchuk_joystick_zeroed.size(); ++i)
    {
      s << indent << "  nunchuk_joystick_zeroed[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.nunchuk_joystick_zeroed[i]);
    }
    s << indent << "nunchuk_joystick_raw[]" << std::endl;
    for (size_t i = 0; i < v.nunchuk_joystick_raw.size(); ++i)
    {
      s << indent << "  nunchuk_joystick_raw[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.nunchuk_joystick_raw[i]);
    }
    s << indent << "buttons[]" << std::endl;
    for (size_t i = 0; i < v.buttons.size(); ++i)
    {
      s << indent << "  buttons[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.buttons[i]);
    }
    s << indent << "nunchuk_buttons[]" << std::endl;
    for (size_t i = 0; i < v.nunchuk_buttons.size(); ++i)
    {
      s << indent << "  nunchuk_buttons[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.nunchuk_buttons[i]);
    }
    s << indent << "LEDs[]" << std::endl;
    for (size_t i = 0; i < v.LEDs.size(); ++i)
    {
      s << indent << "  LEDs[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.LEDs[i]);
    }
    s << indent << "rumble: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rumble);
    s << indent << "ir_tracking[]" << std::endl;
    for (size_t i = 0; i < v.ir_tracking.size(); ++i)
    {
      s << indent << "  ir_tracking[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::wiimote::IrSourceInfo_<ContainerAllocator> >::stream(s, indent + "    ", v.ir_tracking[i]);
    }
    s << indent << "raw_battery: ";
    Printer<float>::stream(s, indent + "  ", v.raw_battery);
    s << indent << "percent_battery: ";
    Printer<float>::stream(s, indent + "  ", v.percent_battery);
    s << indent << "zeroing_time: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.zeroing_time);
    s << indent << "errors: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.errors);
  }
};


} // namespace message_operations
} // namespace ros

#endif // WIIMOTE_MESSAGE_STATE_H

