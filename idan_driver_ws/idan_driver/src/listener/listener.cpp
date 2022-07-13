//sender - subsribed to acceleration, braking, steering, indicators, neutralize commands. create a can massage for the Idan drive by wire system 
#include <stdio.h>
#include <signal.h>
#include <errno.h>
#include <unistd.h>
#include <time.h>
#include "rclcpp/rclcpp.hpp"
#include <additional_msgs/msg/can_packet.hpp>
#include <autoware_auto_msgs/msg/vehicle_control_command.hpp>

// #include "autoware_msgs/SteerCmd.h"
// #include "autoware_msgs/AccelCmd.h"
// #include <std_msgs/Float64.h>


#include <listener/listener.hpp>

using std::placeholders::_1;
using CanPacket = additional_msgs::msg::CanPacket;
using ControlCommand = autoware_auto_msgs::msg::VehicleControlCommand;

class IdanListener : public rclcpp::Node
{
  public:
  IdanListener();
  ~IdanListener();
private:
  // ros::NodeHandle n;
  rclcpp::Subscription<CanPacket>::SharedPtr sub_can_;
  rclcpp::Publisher<ControlCommand>::SharedPtr pub_command_;
  size_t count_;
  float max_steering_ang; //for simulation: 14.3  #deg

void canCallback(const CanPacket::SharedPtr msg);
  convertIdanData Conv;
  // std_msgs::msg::Float64 steer;
  // std_msgs::msg::Float64 accel;
  ControlCommand cmd_;
  receivingData rData = receivingData();
  void convertFromCan();

};
IdanListener::IdanListener()
: Node("idan_listener"), count_(0)
{
  max_steering_ang =  0.325F;

  pub_command_ = this->create_publisher<ControlCommand>("vehicle_command_feedback", 10);
  sub_can_ = this->create_subscription<CanPacket>(
      "can_raw_data", 10, std::bind(&IdanListener::canCallback, this, _1));

    
}
IdanListener::~IdanListener()
{
}
void IdanListener::canCallback(const CanPacket::SharedPtr msg)
{
  unsigned char idan_rData[8];
 //ROS_INFO_STREAM("callback");

  if (msg->id == 0x39)
  {
    for (int j = 0; j < 8; j++)
    {
      //printf("%2.2x ", idan_rData[j]);
      idan_rData[j] = msg->dat[j];
    }
    Conv.convert_from_idan(idan_rData,&rData);

    
    cmd_.long_accel_mps2 = rData.acc;
    //includes brake. it is not correct since it should be raw comand,
    //but raw commands is int
    cmd_.front_wheel_angle_rad = rData.steer*max_steering_ang;
    //need convertion to rad, currently [-1,1]
    pub_command_->publish(cmd_);
    // steer.data = rData.steer;
    // steer_pub.publish(steer);
    // accel.data = rData.acc;
    // accel_pub.publish(accel);
    //ROS_INFO_STREAM("steer: "<<steer.data<<"accel: "<< accel.data);
  }
}



int main (int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<IdanListener>());
  rclcpp::shutdown();
  return 0;
}





