#include <cmath>
#include <iostream>

#include <trajectory_following/trajectory_following.hpp>
#include "rclcpp/rclcpp.hpp"
#include <motion_common/motion_common.hpp>


#include <tf2/convert.h>
#include <autoware_auto_tf2/tf2_autoware_auto_msgs.hpp>


using motion::motion_common::to_angle;
using motion::motion_common::from_angle;


float diff_angle(float alpha, float beta)//beta - alpha
{
  float phi = abs(beta - alpha);
  if (phi > 2 * M_PI)
  {
    phi = 2 * M_PI - phi;
  } // This is either the distance or 360 - distance
  float dang = phi > M_PI ? 2 * M_PI - phi : phi;
  return dang;
}

float distance(TrajectoryPoint & s1,TrajectoryPoint & s2)
{
  return float(sqrt((s1.x - s2.x) * (s1.x - s2.x) + 
  (s1.y - s2.y) * (s1.y - s2.y)));
}
float get_angle(TrajectoryPoint & s1,TrajectoryPoint & s2)
{
  return float(atan2(s2.y - s1.y, s2.x - s1.x ));
}
float sqr_distance(TrajectoryPoint & s1,TrajectoryPoint & s2)
{
  return (s1.x - s2.x) * (s1.x - s2.x) + 
  (s1.y - s2.y) * (s1.y - s2.y);
}

size_t find_target_index(KinematicState & state, Trajectory & trajectory, float lookahead_dist)
{
  float sqr_lookahead_dist = lookahead_dist*lookahead_dist;
  for (size_t i = 0; i<trajectory.points.size();i++ ){
    if (sqr_distance(trajectory.points.at(i),state.state) > sqr_lookahead_dist){
      return i;
    }
  }
  return trajectory.points.size() - 1;//last point
}


TrajectoryPoint interpolate_target(KinematicState & state,Trajectory & trajectory,float d)
{
  TrajectoryPoint p;
  float sqr_lookahead_dist = d * d;
  size_t target_index = 0;
  for (target_index = 0; target_index < trajectory.points.size(); target_index++)
  {
    if (sqr_distance(trajectory.points.at(target_index), state.state) > sqr_lookahead_dist)
    {
      if (target_index == 0)
      {
        return (trajectory.points.at(target_index));
      }
      TrajectoryPoint p1 = trajectory.points.at(target_index - 1);
      TrajectoryPoint p2 = trajectory.points.at(target_index);

      float d1 = distance(p1, state.state);
      float d2 = distance(p2, state.state);
      // RCLCPP_INFO(rclcpp::get_logger("logger"),"d1: %f d2: %f", d1,d2);

      if (d2 - d1 < 0.01)
      {
        return p1;
      }
      p.x = (p2.x - p1.x) * (d - d1) / (d2 - d1) + p1.x;
      p.y = (p2.y - p1.y) * (d - d1) / (d2 - d1) + p1.y;

      return p;
    }
  }
    return trajectory.points.back(); //last point

}

// constructor - called at the first time
TrajectoryFollwing::TrajectoryFollwing()
{
  count = 0;//initialize a counter
}

//----------------------------------------------------------//
void add_to_marker_array(MarkerArray & marker_array, Header & header, const std::string type_name, uint32_t type, float x_pos,float y_pos, float heading_angle, float r, float g, float b,
     std::string frame_id = std::string("/map"),
     float sx = 1.0, float sy = 1.0, float sz = 1.0)//bool frame_locked = false, 
{
        
  Marker marker;
  marker.header.frame_id = frame_id;
  marker.header.stamp = header.stamp;
  marker.ns = "marker_test_"+type_name;
  marker.id = 0;
  marker.type = type;
  marker.action = Marker::ADD;
  marker.pose.position.x = x_pos;
  marker.pose.position.y = y_pos;
  marker.pose.position.z = 0;
  tf2::Quaternion quat_tf;
  quat_tf.setRPY(0, 0, heading_angle);
  marker.pose.orientation = tf2::toMsg(quat_tf);
  marker.scale.x = sx;
  marker.scale.y = sy;
  marker.scale.z = sz;
  marker.color.r = r;
  marker.color.g = g;
  marker.color.b = b;
  marker.color.a = 1.0;
  // marker.lifetime = 0;//rclcpp::Duration();
  marker.frame_locked = false;//frame_locked
  marker.text = "";
  //marker.mesh_resource = "package://pr2_description/meshes/base_v0/base.dae";
  marker.mesh_use_embedded_materials = false;

  marker_array.markers.push_back(marker);
}


// veolocity obstacles controller function:
// inputs: state trajectory Bounding Boxes
// output steering command acceleration command
bool TrajectoryFollwing::compute_commands(
  KinematicState & state,Trajectory  & trajectory, 
  float & steering_command, float & velocity_cmd,MarkerArray & marker_array)
{
  //prints:
  // print_state(state);

  // printf("boxes number: %zu \n",boxes.boxes.size());
  // for(size_t i = 0; i <boxes.boxes.size();i++){
  //   printf("box %zu:\n ",i);
  //   print_box(boxes.boxes.at(i));
  // }

//example - draw shapes in rviz:
//http://docs.ros.org/en/melodic/api/visualization_msgs/html/msg/Marker.html - ROS1
// uint8 ARROW=0
// uint8 CUBE=1
// uint8 SPHERE=2
// uint8 CYLINDER=3
// uint8 LINE_STRIP=4
// uint8 LINE_LIST=5
// uint8 CUBE_LIST=6
// uint8 SPHERE_LIST=7
// uint8 POINTS=8
// uint8 TEXT_VIEW_FACING=9
// uint8 MESH_RESOURCE=10
// uint8 TRIANGLE_LIST=11
  // float x_pos = 10.0, y_pos = 5.0, heading = 0.0F;
  // //arrows - name of the marker; Marker::ARROW - type(see above); x_pos,y_pos - position (z=0); 1.0, 0.0, 0.0 - RGB color; base_link - relative to vehicle
  // add_to_marker_array(marker_array,state.header,"arrow1", Marker::ARROW, x_pos,y_pos,heading, 1.0, 0.0, 0.0,"/base_link");
  // x_pos = 10.0, y_pos = -5.0, heading = -0.7F;
  // add_to_marker_array(marker_array,state.header,"cube", Marker::CUBE, x_pos,y_pos,heading, 0.0, 0.0, 1.0, "/base_link");
  // x_pos = 10.0, y_pos = 20.0, heading = 0.7F;
  // add_to_marker_array(marker_array,state.header,"sphere", Marker::SPHERE, x_pos,y_pos,heading, 0.0, 0.0, 1.0, "/map");//map - relative to map



  // example - a simple implementation of a pure pursuit controller:
  if (trajectory.points.size() < 1){// if trajectory has zero points - return
    velocity_cmd = 0.0F;
    steering_command = 0.0;

    return true;
  }

  float L = 3.0;//5.0F;//3.0F; //vehicle length 3.06F;//
  float min_lookahead_dist = 5.0F;//5.0 minimal lookahead distance (l_d). (5.0F = 5 meter as float type)
  float max_lookahead_dist = 50.0F;// maximal lookahead distance
  float max_steer_angle = 0.33F;//0.0117F;//1.0F;//0.33F;//limit of steering angle [rad]
  // if (state.state.longitudinal_velocity_mps < 75)
  // {
  //   max_steer_angle = 0.0117F*0.75;
  // }
  
  // float k = 0.4;//0.3F;//; // l_d = velocity*k - the good one for vrx
  float k = 1.0;//0.3F;//; // l_d = velocity*k
  // float k = 0.5;//0.3F;//; // l_d = velocity*k
  //0.2 not stable!

  float lookahead_dist = state.state.longitudinal_velocity_mps * k;

  //limit lookahead distance to maximal and minimal value:
  if (lookahead_dist > max_lookahead_dist){
    lookahead_dist = max_lookahead_dist;
  }
  else if (lookahead_dist < min_lookahead_dist){
    lookahead_dist = min_lookahead_dist;
  }

  //search the closest point along the trajectory to lookahead distance:
  // size_t target_index = find_target_index(state,trajectory,lookahead_dist);

  // the point itself at the target point index:
  TrajectoryPoint target_point = interpolate_target(state,trajectory, lookahead_dist);
  add_to_marker_array(marker_array,state.header,"sphere", Marker::SPHERE, target_point.x,target_point.y,to_angle(target_point.heading), 0.0, 0.0, 1.0, "/map");//map - relative to map

  // TrajectoryPoint target_point = trajectory.points.at(target_index);

  // angle between vehicle and taget point:
  // float alpha = diff_angle(to_angle(state.state.heading),get_angle(state.state, target_point ));
  float alpha = get_angle(state.state, target_point ) - to_angle(state.state.heading); 
    //lookahead is a func of the rot rad
    //lookahead_dist-=alpha*5;
  //compute the exact lookahead distance to the target point:
  float exact_lookahead_dist = distance(state.state, target_point);//-alpha*0.5;
  // RCLCPP_INFO(rclcpp::get_logger("logger"),"exact_lookahead_dist: %f lookahead_dist: %f", exact_lookahead_dist,lookahead_dist);


    // RCLCPP_INFO(rclcpp::get_logger("logger"),"target_point x: %f y: %f", double(target_point.x), double(target_point.y));
    // RCLCPP_INFO(rclcpp::get_logger("logger"),"alpha: %f",(double(alpha)));
    // RCLCPP_INFO(rclcpp::get_logger("logger"),"to_angle: %f",(double(to_angle(state.state.heading))));

  //compute steering angle:
  //divided by 3 to match lgsvl interface calculations
  steering_command =  float(atan(2.0F*L*float(sin(alpha))/exact_lookahead_dist));

  //angular velocity_command
  // steering_command =  float(state.state.longitudinal_velocity_mps*2*sin(alpha)/(exact_lookahead_dist));
  // steering_command *= 1.75F;
  // steering_command *= 2.0F;


  // if (abs(state.state.longitudinal_velocity_mps) < 1e-4){

  // }
  // else
  // {
    //real angular acc <34 m/s^2
  // float a_max = 40;//28 give a max of 23//m/s^2 33 gives a max of 27
  // float max_curvature = a_max/pow(state.state.longitudinal_velocity_mps,2);
  // float max_curvature_steering= atan(L*max_curvature);
  // RCLCPP_INFO(rclcpp::get_logger("logger"),"max_curvature: %f",max_curvature);

  // float current_a = state.state.heading_rate_rps * state.state.longitudinal_velocity_mps;
  // float max_angular_acc = 
  // float max_steering_change =  
  // if (steering_command > max_curvature_steering){
  //   steering_command = max_curvature_steering;
  //   RCLCPP_INFO(rclcpp::get_logger("logger"),"limit steering: max_curvature_steering: %f",max_curvature_steering);

  // }
  // else if (steering_command < -max_curvature_steering){  
  //   steering_command = -max_curvature_steering;
  //   RCLCPP_INFO(rclcpp::get_logger("logger"),"limit steering: max_curvature_steering: %f",max_curvature_steering);

  // }

  // }
  

  //limit steering angle to a maximal and minimal value:
  // steering_command*=100.0F;//tmp - convert to "angular velocity"
  if (steering_command > max_steer_angle){
    steering_command = max_steer_angle;
  }
  else if (steering_command < -max_steer_angle){  
    steering_command = -max_steer_angle;
  }
  //follow velocity profile of the trajectory:
  size_t forward = 3;
  if (forward+1 < trajectory.points.size()-1){
      velocity_cmd = trajectory.points.at(forward+ 1).longitudinal_velocity_mps;
  }
  else{
    // velocity_cmd = 0.0F;
    velocity_cmd = 0.0F;
  }
  return false;
}


