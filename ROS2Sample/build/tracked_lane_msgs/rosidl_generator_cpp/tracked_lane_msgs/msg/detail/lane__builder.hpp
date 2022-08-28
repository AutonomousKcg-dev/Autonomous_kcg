// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tracked_lane_msgs:msg/Lane.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_LANE_MSGS__MSG__DETAIL__LANE__BUILDER_HPP_
#define TRACKED_LANE_MSGS__MSG__DETAIL__LANE__BUILDER_HPP_

#include "tracked_lane_msgs/msg/detail/lane__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tracked_lane_msgs
{

namespace msg
{

namespace builder
{

class Init_Lane_right_boundary
{
public:
  explicit Init_Lane_right_boundary(::tracked_lane_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  ::tracked_lane_msgs::msg::Lane right_boundary(::tracked_lane_msgs::msg::Lane::_right_boundary_type arg)
  {
    msg_.right_boundary = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tracked_lane_msgs::msg::Lane msg_;
};

class Init_Lane_left_boundary
{
public:
  Init_Lane_left_boundary()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Lane_right_boundary left_boundary(::tracked_lane_msgs::msg::Lane::_left_boundary_type arg)
  {
    msg_.left_boundary = std::move(arg);
    return Init_Lane_right_boundary(msg_);
  }

private:
  ::tracked_lane_msgs::msg::Lane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tracked_lane_msgs::msg::Lane>()
{
  return tracked_lane_msgs::msg::builder::Init_Lane_left_boundary();
}

}  // namespace tracked_lane_msgs

#endif  // TRACKED_LANE_MSGS__MSG__DETAIL__LANE__BUILDER_HPP_
