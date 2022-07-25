
#ifndef SENSOR_STREERING_CAN_H
#define SENSOR_STREERING_CAN_H
#include <ros/ros.h>
#include <sensor_msgs/Joy.h>
#include <vector>
#include "Frame.h"
#include <ros/console.h>

#define IDAN_REST_MODE 2000

using namespace can_msgs;
using namespace std;
namespace ariel_idan
{

class StreeringGasCan
{
public:
  StreeringGasCan(ros::NodeHandle& nh_);
  void buildFrame();
public:
  ros::Subscriber m_CmdVelSub;
  ros::Publisher m_PublishRxMessage;
  Frame m_CanMsgForAriel;
  double m_idan_pedal,m_idan_steer_angle;

  vector<int> intToHexDivedToTwo(int number_to_Change);
  vector<int> HexToBytes(const std::string& hex);
  void joyToIdan(const sensor_msgs::Joy &joy);
  double joyPedalToIdan(double brake_pedal_val,double gas_pedal_val);
  double joySteeringToIdan(double wheel_val);
  double breakProcedure(double brake_pedal_value);
  double gasProcedure(double gas_pedal_value);
};

}

#endif //SENSOR_STREERING_CAN_H
