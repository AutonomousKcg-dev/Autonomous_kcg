// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_planning_msgs:msg/PathChangeModuleArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ARRAY__BUILDER_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ARRAY__BUILDER_HPP_

#include "autoware_auto_planning_msgs/msg/detail/path_change_module_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autoware_auto_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_PathChangeModuleArray_modules
{
public:
  explicit Init_PathChangeModuleArray_modules(::autoware_auto_planning_msgs::msg::PathChangeModuleArray & msg)
  : msg_(msg)
  {}
  ::autoware_auto_planning_msgs::msg::PathChangeModuleArray modules(::autoware_auto_planning_msgs::msg::PathChangeModuleArray::_modules_type arg)
  {
    msg_.modules = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::PathChangeModuleArray msg_;
};

class Init_PathChangeModuleArray_header
{
public:
  Init_PathChangeModuleArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathChangeModuleArray_modules header(::autoware_auto_planning_msgs::msg::PathChangeModuleArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PathChangeModuleArray_modules(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::PathChangeModuleArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::msg::PathChangeModuleArray>()
{
  return autoware_auto_planning_msgs::msg::builder::Init_PathChangeModuleArray_header();
}

}  // namespace autoware_auto_planning_msgs

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ARRAY__BUILDER_HPP_
