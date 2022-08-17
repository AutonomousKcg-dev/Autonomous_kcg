//sender - subsribed to acceleration, braking, steering, indicators, neutralize commands. create a can massage for the Idan drive by wire system 
#include <stdio.h>
#include <signal.h>
#include <errno.h>
#include <unistd.h>
#include <time.h>
#include "rclcpp/rclcpp.hpp"
#include <additional_msgs/msg/can_packet.hpp>

// #include <can_communication/can_communication.hpp>//shared with can_communication_lib.cpp
//#include "socketCanComm.h"//shared with socketCanComm.cpp

#include <can_communication_titan/titan_can.hpp>


using std::placeholders::_1;
using CanPacket = additional_msgs::msg::CanPacket;
using namespace std::chrono_literals;



class CanComm : public rclcpp::Node
{
  public:
  CanComm();
  ~CanComm();
  // int run();

private:
  rclcpp::Subscription<CanPacket>::SharedPtr sub_can_;
  rclcpp::Publisher<CanPacket>::SharedPtr pub_can_;
  size_t count_;
  bool first_flag = true;
  bool lock_flag = false;
  TitanComm Comm;
  CanPacket can_raw_command;  
  CanPacket can_raw_data;  
  void UpdateDataCallback(const CanPacket::SharedPtr msg);
  void timer_callback();

  rclcpp::TimerBase::SharedPtr timer_;

};
CanComm::CanComm()
: Node("can_communication"), count_(0)

{
  pub_can_ = this->create_publisher<CanPacket>("can_raw_data", 10);
  sub_can_ = this->create_subscription<CanPacket>(
      "can_raw_command", 10, std::bind(&CanComm::UpdateDataCallback, this, _1));
  timer_ = this->create_wall_timer(
      20ms, std::bind(&CanComm::timer_callback, this));
  //TODO add all defenition as arguments to function
  if (Comm.connect())
  {
    RCLCPP_FATAL(this->get_logger(),"cannot connect to CAN");
    rclcpp::shutdown();
  }
  
  can_raw_command.id = 0x30;
  can_raw_command.dat[0]=0x7;
   can_raw_command.dat[1]=0xD0;
    can_raw_command.dat[2]=6;
     can_raw_command.dat[3]=0xD0;
      can_raw_command.dat[4]=0;
       can_raw_command.dat[5]=0;
        can_raw_command.dat[6]=0;
         can_raw_command.dat[7]=0;
  can_raw_command.len =8;
}
// int CanComm::run()
// {
// ////TODO wait for safe commands before connecting to idan
// ////ros::Duration dt(0.05);
// // ros::Rate loop_rate(100);
// // int id = 0,len = 0;
// TitanComm Comm;
// //ROS_INFO_STREAM("before connect" );
// //int a = 10;
// bool error;
// //ROS_INFO_STREAM("before connect1" );
// error = Comm.connect();//TODO add all defenition as arguments to function
// if (error)
// {
//   RCLCPP_ERROR(this->get_logger(),"cannot connect to CAN");
//   return 1;
// }

// // while(ros::ok())// && count < 100
// // {
// //   if(!first_flag)
// //   {
// //     RCLCPP_INFO(this->get_logger(),"read" );
// //   bool read_failed = Comm.read(&id, &can_raw_data.dat[0],&len);
// //   if (!read_failed)
// //   {
// //     can_raw_data.id = id;
// //     can_raw_data.len = len;
// //     can_pub.publish(can_raw_data);
// //   }
// //   // RCLCPP_INFO(this->get_logger(),"can_raw_data: "<<can_raw_data);

// //   Comm.write(int(can_raw_command.id), &can_raw_command.dat[0], int(can_raw_command.len));
  
// //   }

// //   ros::spinOnce();
// //   loop_rate.sleep();
  
// // }

// return 0;
// //ros::spin();

// }

CanComm::~CanComm()
{
}
void CanComm::UpdateDataCallback(const CanPacket::SharedPtr msg)
{
  can_raw_command.header  = msg->header;
  can_raw_command.id = msg->id;
  can_raw_command.dat = msg->dat;
  can_raw_command.len = int(msg->len);
  if (!lock_flag)
  {
    lock_flag = true;
  for (int j = 0; j < 8; j++)
  {
    //printf("%2.2x ", msg->dat[j]);
	  can_raw_command.dat[j]=msg->dat[j];
	}
  lock_flag = false;
    // RCLCPP_WARN(this->get_logger(),"UpdateDataCallback");
  }
  else{
    RCLCPP_WARN(this->get_logger(),"Locked");

  }

  // ROS_INFO_STREAM("update"<<can_raw_command);

  first_flag = false;
}

void CanComm::timer_callback()
{
 

    // RCLCPP_WARN(this->get_logger(),"read" );
    int id = 0, len = 0;
    bool read_failed = Comm.read(&id, &can_raw_data.dat[0], &len);
    if (!read_failed)
    {
      can_raw_data.id = id;
      can_raw_data.len = len;
      pub_can_->publish(can_raw_data);

      // RCLCPP_INFO(this->get_logger(),"can_raw_data: "<<can_raw_data);
      if (!lock_flag)
      {
        lock_flag = true;

        Comm.write(int(can_raw_command.id), &can_raw_command.dat[0], int(can_raw_command.len));
        lock_flag = false;
      }
      else
      {
        RCLCPP_WARN(this->get_logger(), "Locked1");
      }
    }
  
 
}

int main (int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<CanComm>());
  rclcpp::shutdown();
  return 0;
}





