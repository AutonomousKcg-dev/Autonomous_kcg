// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cognata_sdk_ros2:msg/VehicleMsg.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__VEHICLE_MSG__BUILDER_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__VEHICLE_MSG__BUILDER_HPP_

#include "cognata_sdk_ros2/msg/detail/vehicle_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cognata_sdk_ros2
{

namespace msg
{

namespace builder
{

class Init_VehicleMsg_wheels
{
public:
  explicit Init_VehicleMsg_wheels(::cognata_sdk_ros2::msg::VehicleMsg & msg)
  : msg_(msg)
  {}
  ::cognata_sdk_ros2::msg::VehicleMsg wheels(::cognata_sdk_ros2::msg::VehicleMsg::_wheels_type arg)
  {
    msg_.wheels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::VehicleMsg msg_;
};

class Init_VehicleMsg_signal_light
{
public:
  explicit Init_VehicleMsg_signal_light(::cognata_sdk_ros2::msg::VehicleMsg & msg)
  : msg_(msg)
  {}
  Init_VehicleMsg_wheels signal_light(::cognata_sdk_ros2::msg::VehicleMsg::_signal_light_type arg)
  {
    msg_.signal_light = std::move(arg);
    return Init_VehicleMsg_wheels(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::VehicleMsg msg_;
};

class Init_VehicleMsg_signal_state
{
public:
  explicit Init_VehicleMsg_signal_state(::cognata_sdk_ros2::msg::VehicleMsg & msg)
  : msg_(msg)
  {}
  Init_VehicleMsg_signal_light signal_state(::cognata_sdk_ros2::msg::VehicleMsg::_signal_state_type arg)
  {
    msg_.signal_state = std::move(arg);
    return Init_VehicleMsg_signal_light(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::VehicleMsg msg_;
};

class Init_VehicleMsg_reverse_light_state
{
public:
  explicit Init_VehicleMsg_reverse_light_state(::cognata_sdk_ros2::msg::VehicleMsg & msg)
  : msg_(msg)
  {}
  Init_VehicleMsg_signal_state reverse_light_state(::cognata_sdk_ros2::msg::VehicleMsg::_reverse_light_state_type arg)
  {
    msg_.reverse_light_state = std::move(arg);
    return Init_VehicleMsg_signal_state(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::VehicleMsg msg_;
};

class Init_VehicleMsg_brake_light_state
{
public:
  explicit Init_VehicleMsg_brake_light_state(::cognata_sdk_ros2::msg::VehicleMsg & msg)
  : msg_(msg)
  {}
  Init_VehicleMsg_reverse_light_state brake_light_state(::cognata_sdk_ros2::msg::VehicleMsg::_brake_light_state_type arg)
  {
    msg_.brake_light_state = std::move(arg);
    return Init_VehicleMsg_reverse_light_state(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::VehicleMsg msg_;
};

class Init_VehicleMsg_head_light_state
{
public:
  explicit Init_VehicleMsg_head_light_state(::cognata_sdk_ros2::msg::VehicleMsg & msg)
  : msg_(msg)
  {}
  Init_VehicleMsg_brake_light_state head_light_state(::cognata_sdk_ros2::msg::VehicleMsg::_head_light_state_type arg)
  {
    msg_.head_light_state = std::move(arg);
    return Init_VehicleMsg_brake_light_state(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::VehicleMsg msg_;
};

class Init_VehicleMsg_lanes_from_left
{
public:
  explicit Init_VehicleMsg_lanes_from_left(::cognata_sdk_ros2::msg::VehicleMsg & msg)
  : msg_(msg)
  {}
  Init_VehicleMsg_head_light_state lanes_from_left(::cognata_sdk_ros2::msg::VehicleMsg::_lanes_from_left_type arg)
  {
    msg_.lanes_from_left = std::move(arg);
    return Init_VehicleMsg_head_light_state(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::VehicleMsg msg_;
};

class Init_VehicleMsg_lane_id
{
public:
  explicit Init_VehicleMsg_lane_id(::cognata_sdk_ros2::msg::VehicleMsg & msg)
  : msg_(msg)
  {}
  Init_VehicleMsg_lanes_from_left lane_id(::cognata_sdk_ros2::msg::VehicleMsg::_lane_id_type arg)
  {
    msg_.lane_id = std::move(arg);
    return Init_VehicleMsg_lanes_from_left(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::VehicleMsg msg_;
};

class Init_VehicleMsg_navigation_segment
{
public:
  explicit Init_VehicleMsg_navigation_segment(::cognata_sdk_ros2::msg::VehicleMsg & msg)
  : msg_(msg)
  {}
  Init_VehicleMsg_lane_id navigation_segment(::cognata_sdk_ros2::msg::VehicleMsg::_navigation_segment_type arg)
  {
    msg_.navigation_segment = std::move(arg);
    return Init_VehicleMsg_lane_id(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::VehicleMsg msg_;
};

class Init_VehicleMsg_vehicle_role
{
public:
  explicit Init_VehicleMsg_vehicle_role(::cognata_sdk_ros2::msg::VehicleMsg & msg)
  : msg_(msg)
  {}
  Init_VehicleMsg_navigation_segment vehicle_role(::cognata_sdk_ros2::msg::VehicleMsg::_vehicle_role_type arg)
  {
    msg_.vehicle_role = std::move(arg);
    return Init_VehicleMsg_navigation_segment(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::VehicleMsg msg_;
};

class Init_VehicleMsg_vehicle_type
{
public:
  explicit Init_VehicleMsg_vehicle_type(::cognata_sdk_ros2::msg::VehicleMsg & msg)
  : msg_(msg)
  {}
  Init_VehicleMsg_vehicle_role vehicle_type(::cognata_sdk_ros2::msg::VehicleMsg::_vehicle_type_type arg)
  {
    msg_.vehicle_type = std::move(arg);
    return Init_VehicleMsg_vehicle_role(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::VehicleMsg msg_;
};

class Init_VehicleMsg_description
{
public:
  explicit Init_VehicleMsg_description(::cognata_sdk_ros2::msg::VehicleMsg & msg)
  : msg_(msg)
  {}
  Init_VehicleMsg_vehicle_type description(::cognata_sdk_ros2::msg::VehicleMsg::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_VehicleMsg_vehicle_type(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::VehicleMsg msg_;
};

class Init_VehicleMsg_header
{
public:
  Init_VehicleMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleMsg_description header(::cognata_sdk_ros2::msg::VehicleMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleMsg_description(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::VehicleMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cognata_sdk_ros2::msg::VehicleMsg>()
{
  return cognata_sdk_ros2::msg::builder::Init_VehicleMsg_header();
}

}  // namespace cognata_sdk_ros2

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__VEHICLE_MSG__BUILDER_HPP_
