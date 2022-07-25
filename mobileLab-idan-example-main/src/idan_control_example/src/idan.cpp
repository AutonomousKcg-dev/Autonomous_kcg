
#include "idan.h"

using namespace ariel_idan;

// Omer - need to check if the msg from joy is on continous mode.

StreeringGasCan::StreeringGasCan(ros::NodeHandle& nh_)
{
  m_CmdVelSub = nh_.subscribe("/joyTest", 10, &StreeringGasCan::joyToIdan, this);
  m_PublishRxMessage = nh_.advertise<Frame>("/can_rx",1000);
  m_CanMsgForAriel = Frame();
  m_CanMsgForAriel.id = 0x30;
  m_CanMsgForAriel.dlc = 8;
  m_idan_pedal = IDAN_REST_MODE;
  m_idan_steer_angle = IDAN_REST_MODE;
}

double StreeringGasCan::joyPedalToIdan(double brake_pedal_value,double gas_pedal_value)
{
    if (brake_pedal_value>-1.0)
    {
        return breakProcedure(brake_pedal_value);
    }
    else if (brake_pedal_value==-1 && gas_pedal_value==-1)
    {
        return IDAN_REST_MODE;
    }
    else
    {
        return gasProcedure(gas_pedal_value);
    }
}

double StreeringGasCan::joySteeringToIdan(double wheel_val)
{
    double steer_angle;
    if (wheel_val>=0) 
    {
        steer_angle=IDAN_REST_MODE+1700*fabs(wheel_val);
    }
    else
    {
        steer_angle=IDAN_REST_MODE-1700*fabs(wheel_val);
    }
    return steer_angle;
}

double StreeringGasCan::breakProcedure(double brake_pedal_value){
     if (brake_pedal_value<0)
        {
            return (IDAN_REST_MODE-(1.0-fabs(brake_pedal_value))*1700/2);
        }
        else
        {
            return (IDAN_REST_MODE-(brake_pedal_value+1)*1700/2);
        }
}

double StreeringGasCan::gasProcedure(double gas_pedal_value){
    if (gas_pedal_value!=-1.0)
        {
            if (gas_pedal_value<0)
            {
                return ((1.0-fabs(gas_pedal_value))*1700/2+IDAN_REST_MODE);}
            else
            {
                return ((gas_pedal_value+1)*1700/2+IDAN_REST_MODE);
            }
        }
        else
        {
           return IDAN_REST_MODE;
        }
}



vector<int> StreeringGasCan::intToHexDivedToTwo(int number_to_Change) {
  std::stringstream stream;
  stream << std::hex << number_to_Change;
  std::string str =  std::string ( stream.str() );
  size_t len = str.length();
  if(len % 2 != 0 )
    str.insert(0,"0");
  return HexToBytes(str);
}

vector<int> StreeringGasCan::HexToBytes(const std::string& hex) {
  std::vector<int> bytes;

  size_t len = hex.length();
  for (unsigned int i = 0; i < len; i += 2) {
    std::string byteString = hex.substr(i, 2);
    int byte = strtol(byteString.c_str(), NULL, 16);
    bytes.push_back(byte);
  }

  return bytes;
}


void StreeringGasCan::buildFrame() {
  std::vector<int> pedal_command = intToHexDivedToTwo(m_idan_pedal);
  std::vector<int> steering_command = intToHexDivedToTwo(m_idan_steer_angle);
  m_CanMsgForAriel.data[0] = steering_command[0];
  m_CanMsgForAriel.data[1] = steering_command[1];
  m_CanMsgForAriel.data[2] = pedal_command[0];
  m_CanMsgForAriel.data[3] = pedal_command[1];
  m_CanMsgForAriel.data[4] = 0x00;
  m_CanMsgForAriel.data[5] = 0x00;
  m_CanMsgForAriel.data[6] = 0x00;
  m_CanMsgForAriel.data[7] = 0x00; // Halt Command (A5)
  m_PublishRxMessage.publish(m_CanMsgForAriel);
 }

void StreeringGasCan::joyToIdan(const sensor_msgs::Joy &joy)
{
  //Omer please check
  double wheel_val=joy.axes.at(0);
  double brake_pedal_val=joy.axes.at(2);
  double gas_pedal_val=joy.axes.at(1);
  m_idan_pedal=joyPedalToIdan( brake_pedal_val, gas_pedal_val);
  m_idan_steer_angle=joySteeringToIdan(wheel_val);
  buildFrame();
}
