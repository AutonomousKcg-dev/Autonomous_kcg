// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cognata_sdk_ros2:msg/TrafficLightMsg.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__TRAFFIC_LIGHT_MSG__BUILDER_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__TRAFFIC_LIGHT_MSG__BUILDER_HPP_

#include "cognata_sdk_ros2/msg/detail/traffic_light_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cognata_sdk_ros2
{

namespace msg
{

namespace builder
{

class Init_TrafficLightMsg_facing
{
public:
  explicit Init_TrafficLightMsg_facing(::cognata_sdk_ros2::msg::TrafficLightMsg & msg)
  : msg_(msg)
  {}
  ::cognata_sdk_ros2::msg::TrafficLightMsg facing(::cognata_sdk_ros2::msg::TrafficLightMsg::_facing_type arg)
  {
    msg_.facing = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::TrafficLightMsg msg_;
};

class Init_TrafficLightMsg_azimuth_angle
{
public:
  explicit Init_TrafficLightMsg_azimuth_angle(::cognata_sdk_ros2::msg::TrafficLightMsg & msg)
  : msg_(msg)
  {}
  Init_TrafficLightMsg_facing azimuth_angle(::cognata_sdk_ros2::msg::TrafficLightMsg::_azimuth_angle_type arg)
  {
    msg_.azimuth_angle = std::move(arg);
    return Init_TrafficLightMsg_facing(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::TrafficLightMsg msg_;
};

class Init_TrafficLightMsg_traffic_signal_status
{
public:
  explicit Init_TrafficLightMsg_traffic_signal_status(::cognata_sdk_ros2::msg::TrafficLightMsg & msg)
  : msg_(msg)
  {}
  Init_TrafficLightMsg_azimuth_angle traffic_signal_status(::cognata_sdk_ros2::msg::TrafficLightMsg::_traffic_signal_status_type arg)
  {
    msg_.traffic_signal_status = std::move(arg);
    return Init_TrafficLightMsg_azimuth_angle(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::TrafficLightMsg msg_;
};

class Init_TrafficLightMsg_behaviour
{
public:
  explicit Init_TrafficLightMsg_behaviour(::cognata_sdk_ros2::msg::TrafficLightMsg & msg)
  : msg_(msg)
  {}
  Init_TrafficLightMsg_traffic_signal_status behaviour(::cognata_sdk_ros2::msg::TrafficLightMsg::_behaviour_type arg)
  {
    msg_.behaviour = std::move(arg);
    return Init_TrafficLightMsg_traffic_signal_status(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::TrafficLightMsg msg_;
};

class Init_TrafficLightMsg_functioning_status
{
public:
  explicit Init_TrafficLightMsg_functioning_status(::cognata_sdk_ros2::msg::TrafficLightMsg & msg)
  : msg_(msg)
  {}
  Init_TrafficLightMsg_behaviour functioning_status(::cognata_sdk_ros2::msg::TrafficLightMsg::_functioning_status_type arg)
  {
    msg_.functioning_status = std::move(arg);
    return Init_TrafficLightMsg_behaviour(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::TrafficLightMsg msg_;
};

class Init_TrafficLightMsg_bulb_status
{
public:
  explicit Init_TrafficLightMsg_bulb_status(::cognata_sdk_ros2::msg::TrafficLightMsg & msg)
  : msg_(msg)
  {}
  Init_TrafficLightMsg_functioning_status bulb_status(::cognata_sdk_ros2::msg::TrafficLightMsg::_bulb_status_type arg)
  {
    msg_.bulb_status = std::move(arg);
    return Init_TrafficLightMsg_functioning_status(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::TrafficLightMsg msg_;
};

class Init_TrafficLightMsg_status
{
public:
  explicit Init_TrafficLightMsg_status(::cognata_sdk_ros2::msg::TrafficLightMsg & msg)
  : msg_(msg)
  {}
  Init_TrafficLightMsg_bulb_status status(::cognata_sdk_ros2::msg::TrafficLightMsg::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TrafficLightMsg_bulb_status(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::TrafficLightMsg msg_;
};

class Init_TrafficLightMsg_description
{
public:
  explicit Init_TrafficLightMsg_description(::cognata_sdk_ros2::msg::TrafficLightMsg & msg)
  : msg_(msg)
  {}
  Init_TrafficLightMsg_status description(::cognata_sdk_ros2::msg::TrafficLightMsg::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_TrafficLightMsg_status(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::TrafficLightMsg msg_;
};

class Init_TrafficLightMsg_header
{
public:
  Init_TrafficLightMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficLightMsg_description header(::cognata_sdk_ros2::msg::TrafficLightMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrafficLightMsg_description(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::TrafficLightMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cognata_sdk_ros2::msg::TrafficLightMsg>()
{
  return cognata_sdk_ros2::msg::builder::Init_TrafficLightMsg_header();
}

}  // namespace cognata_sdk_ros2

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__TRAFFIC_LIGHT_MSG__BUILDER_HPP_
