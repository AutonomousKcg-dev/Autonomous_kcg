#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <cmath>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"


#include <autoware_auto_msgs/msg/vehicle_control_command.hpp>

#include <trajectory_following/trajectory_following.hpp>

using namespace std::chrono_literals;
using std::placeholders::_1;




class TrajectoryFollwingNode : public rclcpp::Node
{
  
public:
  TrajectoryFollwingNode()
  : Node("trajectory_following"), count_(0)
  {
    num_sub = 2;
    count_sub = 0;
    sended = false;
    // first_flag_ = true;
    first_sub = true;
    //publishers:
    pub_ctrl_cmd_ = this->create_publisher<autoware_auto_msgs::msg::VehicleControlCommand>("ctrl_cmd", 10);
    pub_marker_array_ = this->create_publisher<MarkerArray>("trajectory_following_marker_array", 10);


    //subscribers
    sub_kinematic_state_ = this->create_subscription<KinematicState>(
      "vehicle_state", 10, std::bind(&TrajectoryFollwingNode::on_state, this, _1));
    
    sub_trajectory_ = this->create_subscription<autoware_auto_msgs::msg::Trajectory>(
      "trajectory", 10, std::bind(&TrajectoryFollwingNode::on_trajectory, this, _1));
  }

private:
bool check_stamp(builtin_interfaces::msg::Time stamp)
{
    if(first_sub){
    current_stamp = stamp;
    first_sub = false;
    return false;
  }
  rclcpp::Time t = stamp;
  rclcpp::Time current_t = current_stamp;
  rclcpp::Duration dt = t - current_t;
  double double_dt = dt.seconds();// + double(dt.nanoseconds()) * 1e-9;  
  double max_dt_diff = 0.01;
  if (double_dt != 0 && (abs(double_dt) > max_dt_diff) && !sended)
  { //error
    // if (current_stamp.sec != 0 &&  current_stamp.nanosec != 0 && (current_stamp.sec != stamp.sec ||  current_stamp.nanosec != stamp.nanosec) && !sended){//error
    count_sub = 0;
    RCLCPP_WARN(
        this->get_logger(), "not all data received %f current_t: %d.%d  t: %d.%d",double_dt,current_stamp.sec, current_stamp.nanosec,stamp.sec,stamp.nanosec);
    return true;
  }
  return false;
}
  void process()
  {
    // count_sub++;
    // if (count_sub == num_sub)
    // {
    float steering_command = 0,velocity_cmd = 0;
    MarkerArray marker_array;
    algo_.compute_commands(
      state_,trajectory_,steering_command,velocity_cmd,marker_array);

    pub_cmd(steering_command,velocity_cmd);
    pub_marker_array_->publish(marker_array);
    //   sended = true;
    //   count_sub = 0;
    // }
    // else
    // {
    //   sended = false;
    // }
  }
  void on_trajectory(const autoware_auto_msgs::msg::Trajectory::SharedPtr msg)
  {
    // check_stamp(msg->header.stamp);
    // current_stamp = msg->header.stamp;
    trajectory_ = *msg;



      // process();
    

  }
 
  void on_state(const KinematicState::SharedPtr msg)
  {
    state_ = *msg;

    //RCLCPP_INFO(this->get_logger(), "on state");
    // check_stamp(msg->header.stamp);
    // current_stamp = msg->header.stamp;
    // double double_t = rclcpp::Time(msg->header.stamp).seconds() + 0.002;
      // RCLCPP_WARN(this->get_logger(), "--------------on_state. state time: %f",double_t);

    
    
      process();

    


  }

  void pub_cmd(float steering_command, float velocity_cmd)
  {
    autoware_auto_msgs::msg::VehicleControlCommand cmd;

    cmd.stamp = this->get_clock()->now();  //state_.header.stamp; //trajectory_.header.stamp;//
    cmd.velocity_mps = velocity_cmd;
    cmd.front_wheel_angle_rad = steering_command;//float(steer);//[rad] #-1:1 from -19:19 deg, -0.33:0.33 rad
    pub_ctrl_cmd_->publish(cmd);
  }

  //publishers:
  rclcpp::Publisher<autoware_auto_msgs::msg::VehicleControlCommand>::SharedPtr pub_ctrl_cmd_;
  rclcpp::Publisher<MarkerArray>::SharedPtr pub_marker_array_;
  //subscribers:
  rclcpp::Subscription<KinematicState>::SharedPtr sub_kinematic_state_;
  rclcpp::Subscription<Trajectory>::SharedPtr sub_trajectory_;



  builtin_interfaces::msg::Time current_t_;
  // bool first_flag_;


  TrajectoryFollwing algo_;
  KinematicState state_;
  Trajectory trajectory_;

  size_t count_;

  int num_sub;
  int count_sub;
  bool sended;
  bool first_sub;
  builtin_interfaces::msg::Time current_stamp;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<TrajectoryFollwingNode>());
  rclcpp::shutdown();
  return 0;
}
