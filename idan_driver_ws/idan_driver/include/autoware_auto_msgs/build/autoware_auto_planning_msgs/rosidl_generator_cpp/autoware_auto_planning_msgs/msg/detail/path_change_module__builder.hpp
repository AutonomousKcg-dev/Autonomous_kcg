// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_planning_msgs:msg/PathChangeModule.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE__BUILDER_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE__BUILDER_HPP_

#include "autoware_auto_planning_msgs/msg/detail/path_change_module__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autoware_auto_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_PathChangeModule_module
{
public:
  explicit Init_PathChangeModule_module(::autoware_auto_planning_msgs::msg::PathChangeModule & msg)
  : msg_(msg)
  {}
  ::autoware_auto_planning_msgs::msg::PathChangeModule module(::autoware_auto_planning_msgs::msg::PathChangeModule::_module_type arg)
  {
    msg_.module = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::PathChangeModule msg_;
};

class Init_PathChangeModule_header
{
public:
  Init_PathChangeModule_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathChangeModule_module header(::autoware_auto_planning_msgs::msg::PathChangeModule::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PathChangeModule_module(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::PathChangeModule msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::msg::PathChangeModule>()
{
  return autoware_auto_planning_msgs::msg::builder::Init_PathChangeModule_header();
}

}  // namespace autoware_auto_planning_msgs

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE__BUILDER_HPP_
