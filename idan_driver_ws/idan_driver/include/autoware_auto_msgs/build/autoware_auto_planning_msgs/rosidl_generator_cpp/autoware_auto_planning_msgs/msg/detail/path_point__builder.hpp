// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_planning_msgs:msg/PathPoint.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__BUILDER_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__BUILDER_HPP_

#include "autoware_auto_planning_msgs/msg/detail/path_point__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autoware_auto_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_PathPoint_is_final
{
public:
  explicit Init_PathPoint_is_final(::autoware_auto_planning_msgs::msg::PathPoint & msg)
  : msg_(msg)
  {}
  ::autoware_auto_planning_msgs::msg::PathPoint is_final(::autoware_auto_planning_msgs::msg::PathPoint::_is_final_type arg)
  {
    msg_.is_final = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::PathPoint msg_;
};

class Init_PathPoint_twist
{
public:
  explicit Init_PathPoint_twist(::autoware_auto_planning_msgs::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_is_final twist(::autoware_auto_planning_msgs::msg::PathPoint::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_PathPoint_is_final(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::PathPoint msg_;
};

class Init_PathPoint_pose
{
public:
  Init_PathPoint_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathPoint_twist pose(::autoware_auto_planning_msgs::msg::PathPoint::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_PathPoint_twist(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::PathPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::msg::PathPoint>()
{
  return autoware_auto_planning_msgs::msg::builder::Init_PathPoint_pose();
}

}  // namespace autoware_auto_planning_msgs

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__BUILDER_HPP_
