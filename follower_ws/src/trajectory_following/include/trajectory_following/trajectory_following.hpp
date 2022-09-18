#ifndef TRAJECTORY_FOLLOWING
#define TRAJECTORY_FOLLOWING

#include <autoware_auto_msgs/msg/vehicle_kinematic_state.hpp>
#include <autoware_auto_msgs/msg/bounding_box_array.hpp>
#include <autoware_auto_msgs/msg/bounding_box.hpp>
#include <autoware_auto_msgs/msg/trajectory.hpp>
#include <autoware_auto_msgs/msg/trajectory_point.hpp>

#include <visualization_msgs/msg/marker.hpp>
#include <visualization_msgs/msg/marker_array.hpp>

// #include <std_msgs/Header>

using BoundingBoxArray = autoware_auto_msgs::msg::BoundingBoxArray;
using BoundingBox = autoware_auto_msgs::msg::BoundingBox;
using KinematicState = autoware_auto_msgs::msg::VehicleKinematicState;
using Trajectory = autoware_auto_msgs::msg::Trajectory;
using TrajectoryPoint = autoware_auto_msgs::msg::TrajectoryPoint;
using MarkerArray = visualization_msgs::msg::MarkerArray;
using Marker = visualization_msgs::msg::Marker;

using Header = std_msgs::msg::Header;



class TrajectoryFollwing
{
  public:
    TrajectoryFollwing();
    bool compute_commands(
      KinematicState & state,Trajectory  & trajectory,
      float & steering_command, float & velocity_cmd,MarkerArray & marker_array);
  private:
    int count;
};


#endif //TRAJECTORY_FOLLOWING