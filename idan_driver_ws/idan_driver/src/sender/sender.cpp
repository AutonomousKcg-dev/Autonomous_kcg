//sender - subsribed to acceleration, braking, steering, indicators, neutralize commands. create a can massage for the Idan drive by wire system 
#include <stdio.h>
#include <signal.h>
#include <errno.h>
#include <unistd.h>
#include <time.h>
#include "rclcpp/rclcpp.hpp"
#include <additional_msgs/msg/can_packet.hpp>
#include <autoware_auto_msgs/msg/vehicle_control_command.hpp>

#include <sender/sender.hpp>

using std::placeholders::_1;
using CanPacket = additional_msgs::msg::CanPacket;
using ControlCommand = autoware_auto_msgs::msg::VehicleControlCommand;


class IdanSender : public rclcpp::Node
{
  public:
  IdanSender();
  ~IdanSender();
private:
  rclcpp::Publisher<CanPacket>::SharedPtr pub_can_;
  rclcpp::Subscription<ControlCommand>::SharedPtr sub_command_;
  size_t count_;
  void command_callback(const ControlCommand::SharedPtr msg);

  convertIdanData Conv;
  CanPacket candat;  
  sendingData sData = sendingData();
  void convertToCan();
  float max_steering_ang; //for simulation: 14.3  #deg

};
IdanSender::IdanSender()
: Node("idan_sender"), count_(0)
{
  max_steering_ang =  0.325;
  sub_command_ = this->create_subscription<ControlCommand>(
      "raw_command", 10, std::bind(&IdanSender::command_callback, this, _1));
    
  pub_can_ = this->create_publisher<CanPacket>("can_raw_command", 10);
}
IdanSender::~IdanSender()
{
}
void IdanSender::command_callback(const ControlCommand::SharedPtr msg)
{
  sData.steer =  msg->front_wheel_angle_rad/max_steering_ang;
  if(sData.steer > 1.0) sData.steer = 1.0;
  else if(sData.steer < -1.0) sData.steer = -1.0;
  sData.acc =  msg->long_accel_mps2;
  convertToCan();

}


// void IdanSender::steerCallback(const std_msgs::Float64::ConstPtr & msg)
// {
//   //sData.stamp = msg->header.stamp;
//   sData.steer =  msg->data;
//   //ROS_INFO_STREAM("steer: "<<sData.steer);
//   //candat.header.stamp= msg->header.stamp;
//   convertToCan();
// }
// void IdanSender::accelCallback(const std_msgs::Float64::ConstPtr & msg)
// {
//   //sData.stamp = msg->header.stamp;
//   sData.acc =  msg->data;
//   //ROS_INFO_STREAM("accel: "<<sData.acc);
//   //candat.header.stamp= msg->header.stamp;
//   convertToCan();
// }
// void IdanSender::brakeCallback(const autoware_msgs::BrakeCmdConstPtr & msg)
// {
//   ROS_INFO_STREAM("brake: "<<msg->brake);
// }
void IdanSender::convertToCan()
{
  unsigned char  idan_sData[8] = { 0 };

  Conv.convert_to_idan(&sData, idan_sData);
  candat.count =0;//number of sended message
	candat.time=0;//time of data creation
	candat.id = 0x30;//
	candat.len = 8;//message lenght?
	candat.header.stamp= this->now();
  	// RCLCPP_WARN(rclcpp::get_logger("logger"), "sender:");
			
  for (int j = 0; j < 8; j++)
  {
    //printf("%2.2x ", idan_sData[j]);
	  candat.dat[j]=idan_sData[j];
    
			// RCLCPP_WARN(
			// 	rclcpp::get_logger("logger"), "%X,", candat.dat[j]);
			
		
		
	}
	pub_can_->publish(candat);


}


 
int main (int argc, char *argv[])

{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<IdanSender>());
  rclcpp::shutdown();

  return 0;
}





