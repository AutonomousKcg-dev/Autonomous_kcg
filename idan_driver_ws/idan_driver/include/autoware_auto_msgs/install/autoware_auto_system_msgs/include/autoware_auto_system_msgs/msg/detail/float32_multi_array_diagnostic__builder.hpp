// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_system_msgs:msg/Float32MultiArrayDiagnostic.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__FLOAT32_MULTI_ARRAY_DIAGNOSTIC__BUILDER_HPP_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__FLOAT32_MULTI_ARRAY_DIAGNOSTIC__BUILDER_HPP_

#include "autoware_auto_system_msgs/msg/detail/float32_multi_array_diagnostic__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autoware_auto_system_msgs
{

namespace msg
{

namespace builder
{

class Init_Float32MultiArrayDiagnostic_diag_array
{
public:
  explicit Init_Float32MultiArrayDiagnostic_diag_array(::autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic & msg)
  : msg_(msg)
  {}
  ::autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic diag_array(::autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic::_diag_array_type arg)
  {
    msg_.diag_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic msg_;
};

class Init_Float32MultiArrayDiagnostic_diag_header
{
public:
  Init_Float32MultiArrayDiagnostic_diag_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Float32MultiArrayDiagnostic_diag_array diag_header(::autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic::_diag_header_type arg)
  {
    msg_.diag_header = std::move(arg);
    return Init_Float32MultiArrayDiagnostic_diag_array(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic>()
{
  return autoware_auto_system_msgs::msg::builder::Init_Float32MultiArrayDiagnostic_diag_header();
}

}  // namespace autoware_auto_system_msgs

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__FLOAT32_MULTI_ARRAY_DIAGNOSTIC__BUILDER_HPP_
