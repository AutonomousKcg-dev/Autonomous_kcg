// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from additional_msgs:msg/TrajectoryArray.idl
// generated code does not contain a copyright notice

#ifndef ADDITIONAL_MSGS__MSG__DETAIL__TRAJECTORY_ARRAY__BUILDER_HPP_
#define ADDITIONAL_MSGS__MSG__DETAIL__TRAJECTORY_ARRAY__BUILDER_HPP_

#include "additional_msgs/msg/detail/trajectory_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace additional_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajectoryArray_trajectories
{
public:
  explicit Init_TrajectoryArray_trajectories(::additional_msgs::msg::TrajectoryArray & msg)
  : msg_(msg)
  {}
  ::additional_msgs::msg::TrajectoryArray trajectories(::additional_msgs::msg::TrajectoryArray::_trajectories_type arg)
  {
    msg_.trajectories = std::move(arg);
    return std::move(msg_);
  }

private:
  ::additional_msgs::msg::TrajectoryArray msg_;
};

class Init_TrajectoryArray_header
{
public:
  Init_TrajectoryArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryArray_trajectories header(::additional_msgs::msg::TrajectoryArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrajectoryArray_trajectories(msg_);
  }

private:
  ::additional_msgs::msg::TrajectoryArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::additional_msgs::msg::TrajectoryArray>()
{
  return additional_msgs::msg::builder::Init_TrajectoryArray_header();
}

}  // namespace additional_msgs

#endif  // ADDITIONAL_MSGS__MSG__DETAIL__TRAJECTORY_ARRAY__BUILDER_HPP_
