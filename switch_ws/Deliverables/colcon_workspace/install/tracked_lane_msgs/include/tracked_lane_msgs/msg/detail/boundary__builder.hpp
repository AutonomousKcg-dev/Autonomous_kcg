// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tracked_lane_msgs:msg/Boundary.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_LANE_MSGS__MSG__DETAIL__BOUNDARY__BUILDER_HPP_
#define TRACKED_LANE_MSGS__MSG__DETAIL__BOUNDARY__BUILDER_HPP_

#include "tracked_lane_msgs/msg/detail/boundary__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tracked_lane_msgs
{

namespace msg
{

namespace builder
{

class Init_Boundary_num_points
{
public:
  explicit Init_Boundary_num_points(::tracked_lane_msgs::msg::Boundary & msg)
  : msg_(msg)
  {}
  ::tracked_lane_msgs::msg::Boundary num_points(::tracked_lane_msgs::msg::Boundary::_num_points_type arg)
  {
    msg_.num_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tracked_lane_msgs::msg::Boundary msg_;
};

class Init_Boundary_points
{
public:
  Init_Boundary_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Boundary_num_points points(::tracked_lane_msgs::msg::Boundary::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_Boundary_num_points(msg_);
  }

private:
  ::tracked_lane_msgs::msg::Boundary msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tracked_lane_msgs::msg::Boundary>()
{
  return tracked_lane_msgs::msg::builder::Init_Boundary_points();
}

}  // namespace tracked_lane_msgs

#endif  // TRACKED_LANE_MSGS__MSG__DETAIL__BOUNDARY__BUILDER_HPP_
