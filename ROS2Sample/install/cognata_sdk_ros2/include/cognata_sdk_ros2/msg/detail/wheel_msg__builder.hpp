// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cognata_sdk_ros2:msg/WheelMsg.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__WHEEL_MSG__BUILDER_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__WHEEL_MSG__BUILDER_HPP_

#include "cognata_sdk_ros2/msg/detail/wheel_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cognata_sdk_ros2
{

namespace msg
{

namespace builder
{

class Init_WheelMsg_name
{
public:
  explicit Init_WheelMsg_name(::cognata_sdk_ros2::msg::WheelMsg & msg)
  : msg_(msg)
  {}
  ::cognata_sdk_ros2::msg::WheelMsg name(::cognata_sdk_ros2::msg::WheelMsg::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::WheelMsg msg_;
};

class Init_WheelMsg_rotate_angle
{
public:
  explicit Init_WheelMsg_rotate_angle(::cognata_sdk_ros2::msg::WheelMsg & msg)
  : msg_(msg)
  {}
  Init_WheelMsg_name rotate_angle(::cognata_sdk_ros2::msg::WheelMsg::_rotate_angle_type arg)
  {
    msg_.rotate_angle = std::move(arg);
    return Init_WheelMsg_name(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::WheelMsg msg_;
};

class Init_WheelMsg_steering_angle
{
public:
  explicit Init_WheelMsg_steering_angle(::cognata_sdk_ros2::msg::WheelMsg & msg)
  : msg_(msg)
  {}
  Init_WheelMsg_rotate_angle steering_angle(::cognata_sdk_ros2::msg::WheelMsg::_steering_angle_type arg)
  {
    msg_.steering_angle = std::move(arg);
    return Init_WheelMsg_rotate_angle(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::WheelMsg msg_;
};

class Init_WheelMsg_relative_position
{
public:
  Init_WheelMsg_relative_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelMsg_steering_angle relative_position(::cognata_sdk_ros2::msg::WheelMsg::_relative_position_type arg)
  {
    msg_.relative_position = std::move(arg);
    return Init_WheelMsg_steering_angle(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::WheelMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cognata_sdk_ros2::msg::WheelMsg>()
{
  return cognata_sdk_ros2::msg::builder::Init_WheelMsg_relative_position();
}

}  // namespace cognata_sdk_ros2

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__WHEEL_MSG__BUILDER_HPP_
