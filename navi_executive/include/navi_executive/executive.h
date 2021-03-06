#ifndef EXECUTIVE_H_
#define EXECUTIVE_H_

#include <actionlib/client/simple_action_client.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <move_base_msgs/MoveBaseActionResult.h>
#include <navi_executive/AddWaypointGPS.h>
#include <navi_executive/AddWaypointUTM.h>
#include <navi_executive/WaypointGPS.h>
#include <navi_executive/WaypointUTM.h>

namespace navi_executive {

class Executive {
public:
    Executive(std::string add_topic, std::string add_utm_topic, std::string goal_topic);

private:
    bool idle_;
    ros::NodeHandle nh_;
    actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> act_goal_;
    ros::ServiceServer srv_gps_, srv_utm_;

    std::list<std::list<WaypointUTM> > waypoints_;
    std::string utm_frame_id_;

    bool addWaypointGPSCallback(AddWaypointGPS::Request  &request,
                                AddWaypointGPS::Response &response);
    bool addWaypointUTMCallback(AddWaypointUTM::Request  &request,
                                AddWaypointUTM::Response &response);
    void goalDoneCallback(actionlib::SimpleClientGoalState const &state,
                          move_base_msgs::MoveBaseResultConstPtr const &result);

    void setGoal(WaypointUTM waypoint);
    void advanceGoal(void);

    WaypointUTM convertGPStoUTM(WaypointGPS gps);
};

};


#endif
