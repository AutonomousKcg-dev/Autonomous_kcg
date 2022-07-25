// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from additional_msgs:msg/TargetPoint.idl
// generated code does not contain a copyright notice

#ifndef ADDITIONAL_MSGS__MSG__DETAIL__TARGET_POINT__BUILDER_HPP_
#define ADDITIONAL_MSGS__MSG__DETAIL__TARGET_POINT__BUILDER_HPP_

#include "additional_msgs/msg/detail/target_point__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace additional_msgs
{

namespace msg
{

namespace builder
{

class Init_TargetPoint_velocity
{
public:
  explicit Init_TargetPoint_velocity(::additional_msgs::msg::TargetPoint & msg)
  : msg_(msg)
  {}
  ::additional_msgs::msg::TargetPoint velocity(::additional_msgs::msg::TargetPoint::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::additional_msgs::msg::TargetPoint msg_;
};

class Init_TargetPoint_distance
{
public:
  explicit Init_TargetPoint_distance(::additional_msgs::msg::TargetPoint & msg)
  : msg_(msg)
  {}
  Init_TargetPoint_velocity distance(::additional_msgs::msg::TargetPoint::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_TargetPoint_velocity(msg_);
  }

private:
  ::additional_msgs::msg::TargetPoint msg_;
};

class Init_TargetPoint_angle
{
public:
  explicit Init_TargetPoint_angle(::additional_msgs::msg::TargetPoint & msg)
  : msg_(msg)
  {}
  Init_TargetPoint_distance angle(::additional_msgs::msg::TargetPoint::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_TargetPoint_distance(msg_);
  }

private:
  ::additional_msgs::msg::TargetPoint msg_;
};

class Init_TargetPoint_header
{
public:
  Init_TargetPoint_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetPoint_angle header(::additional_msgs::msg::TargetPoint::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TargetPoint_angle(msg_);
  }

private:
  ::additional_msgs::msg::TargetPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::additional_msgs::msg::TargetPoint>()
{
  return additional_msgs::msg::builder::Init_TargetPoint_header();
}

}  // namespace additional_msgs

#endif  // ADDITIONAL_MSGS__MSG__DETAIL__TARGET_POINT__BUILDER_HPP_
