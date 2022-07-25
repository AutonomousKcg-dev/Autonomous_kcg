// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_planning_msgs:msg/Approval.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__APPROVAL__BUILDER_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__APPROVAL__BUILDER_HPP_

#include "autoware_auto_planning_msgs/msg/detail/approval__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autoware_auto_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_Approval_approval
{
public:
  explicit Init_Approval_approval(::autoware_auto_planning_msgs::msg::Approval & msg)
  : msg_(msg)
  {}
  ::autoware_auto_planning_msgs::msg::Approval approval(::autoware_auto_planning_msgs::msg::Approval::_approval_type arg)
  {
    msg_.approval = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::Approval msg_;
};

class Init_Approval_stamp
{
public:
  Init_Approval_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Approval_approval stamp(::autoware_auto_planning_msgs::msg::Approval::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Approval_approval(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::Approval msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::msg::Approval>()
{
  return autoware_auto_planning_msgs::msg::builder::Init_Approval_stamp();
}

}  // namespace autoware_auto_planning_msgs

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__APPROVAL__BUILDER_HPP_
