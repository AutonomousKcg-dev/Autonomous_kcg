// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_debug_msgs:msg/MultiArrayDimension.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__MULTI_ARRAY_DIMENSION__BUILDER_HPP_
#define AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__MULTI_ARRAY_DIMENSION__BUILDER_HPP_

#include "autoware_auto_debug_msgs/msg/detail/multi_array_dimension__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autoware_auto_debug_msgs
{

namespace msg
{

namespace builder
{

class Init_MultiArrayDimension_stride
{
public:
  explicit Init_MultiArrayDimension_stride(::autoware_auto_debug_msgs::msg::MultiArrayDimension & msg)
  : msg_(msg)
  {}
  ::autoware_auto_debug_msgs::msg::MultiArrayDimension stride(::autoware_auto_debug_msgs::msg::MultiArrayDimension::_stride_type arg)
  {
    msg_.stride = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_debug_msgs::msg::MultiArrayDimension msg_;
};

class Init_MultiArrayDimension_size
{
public:
  explicit Init_MultiArrayDimension_size(::autoware_auto_debug_msgs::msg::MultiArrayDimension & msg)
  : msg_(msg)
  {}
  Init_MultiArrayDimension_stride size(::autoware_auto_debug_msgs::msg::MultiArrayDimension::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_MultiArrayDimension_stride(msg_);
  }

private:
  ::autoware_auto_debug_msgs::msg::MultiArrayDimension msg_;
};

class Init_MultiArrayDimension_label
{
public:
  Init_MultiArrayDimension_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiArrayDimension_size label(::autoware_auto_debug_msgs::msg::MultiArrayDimension::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_MultiArrayDimension_size(msg_);
  }

private:
  ::autoware_auto_debug_msgs::msg::MultiArrayDimension msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_debug_msgs::msg::MultiArrayDimension>()
{
  return autoware_auto_debug_msgs::msg::builder::Init_MultiArrayDimension_label();
}

}  // namespace autoware_auto_debug_msgs

#endif  // AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__MULTI_ARRAY_DIMENSION__BUILDER_HPP_
