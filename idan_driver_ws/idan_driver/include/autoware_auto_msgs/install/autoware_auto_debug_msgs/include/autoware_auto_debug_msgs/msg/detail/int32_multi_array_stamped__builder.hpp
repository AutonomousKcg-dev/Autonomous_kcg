// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_debug_msgs:msg/Int32MultiArrayStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__INT32_MULTI_ARRAY_STAMPED__BUILDER_HPP_
#define AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__INT32_MULTI_ARRAY_STAMPED__BUILDER_HPP_

#include "autoware_auto_debug_msgs/msg/detail/int32_multi_array_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autoware_auto_debug_msgs
{

namespace msg
{

namespace builder
{

class Init_Int32MultiArrayStamped_data
{
public:
  explicit Init_Int32MultiArrayStamped_data(::autoware_auto_debug_msgs::msg::Int32MultiArrayStamped & msg)
  : msg_(msg)
  {}
  ::autoware_auto_debug_msgs::msg::Int32MultiArrayStamped data(::autoware_auto_debug_msgs::msg::Int32MultiArrayStamped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_debug_msgs::msg::Int32MultiArrayStamped msg_;
};

class Init_Int32MultiArrayStamped_layout
{
public:
  explicit Init_Int32MultiArrayStamped_layout(::autoware_auto_debug_msgs::msg::Int32MultiArrayStamped & msg)
  : msg_(msg)
  {}
  Init_Int32MultiArrayStamped_data layout(::autoware_auto_debug_msgs::msg::Int32MultiArrayStamped::_layout_type arg)
  {
    msg_.layout = std::move(arg);
    return Init_Int32MultiArrayStamped_data(msg_);
  }

private:
  ::autoware_auto_debug_msgs::msg::Int32MultiArrayStamped msg_;
};

class Init_Int32MultiArrayStamped_stamp
{
public:
  Init_Int32MultiArrayStamped_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Int32MultiArrayStamped_layout stamp(::autoware_auto_debug_msgs::msg::Int32MultiArrayStamped::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Int32MultiArrayStamped_layout(msg_);
  }

private:
  ::autoware_auto_debug_msgs::msg::Int32MultiArrayStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_debug_msgs::msg::Int32MultiArrayStamped>()
{
  return autoware_auto_debug_msgs::msg::builder::Init_Int32MultiArrayStamped_stamp();
}

}  // namespace autoware_auto_debug_msgs

#endif  // AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__INT32_MULTI_ARRAY_STAMPED__BUILDER_HPP_
