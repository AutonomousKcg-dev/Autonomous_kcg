// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_
#define AUTOWARE_AUTO_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_

#include "autoware_auto_msgs/msg/detail/trajectory__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autoware_auto_msgs
{

namespace msg
{

namespace builder
{

class Init_Trajectory_points
{
public:
  explicit Init_Trajectory_points(::autoware_auto_msgs::msg::Trajectory & msg)
  : msg_(msg)
  {}
  ::autoware_auto_msgs::msg::Trajectory points(::autoware_auto_msgs::msg::Trajectory::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_msgs::msg::Trajectory msg_;
};

class Init_Trajectory_header
{
public:
  Init_Trajectory_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trajectory_points header(::autoware_auto_msgs::msg::Trajectory::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Trajectory_points(msg_);
  }

private:
  ::autoware_auto_msgs::msg::Trajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_msgs::msg::Trajectory>()
{
  return autoware_auto_msgs::msg::builder::Init_Trajectory_header();
}

}  // namespace autoware_auto_msgs

#endif  // AUTOWARE_AUTO_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_
