// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_planning_msgs:msg/LateralOffset.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__LATERAL_OFFSET__BUILDER_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__LATERAL_OFFSET__BUILDER_HPP_

#include "autoware_auto_planning_msgs/msg/detail/lateral_offset__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autoware_auto_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_LateralOffset_lateral_offset
{
public:
  explicit Init_LateralOffset_lateral_offset(::autoware_auto_planning_msgs::msg::LateralOffset & msg)
  : msg_(msg)
  {}
  ::autoware_auto_planning_msgs::msg::LateralOffset lateral_offset(::autoware_auto_planning_msgs::msg::LateralOffset::_lateral_offset_type arg)
  {
    msg_.lateral_offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::LateralOffset msg_;
};

class Init_LateralOffset_stamp
{
public:
  Init_LateralOffset_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LateralOffset_lateral_offset stamp(::autoware_auto_planning_msgs::msg::LateralOffset::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_LateralOffset_lateral_offset(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::LateralOffset msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::msg::LateralOffset>()
{
  return autoware_auto_planning_msgs::msg::builder::Init_LateralOffset_stamp();
}

}  // namespace autoware_auto_planning_msgs

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__LATERAL_OFFSET__BUILDER_HPP_
