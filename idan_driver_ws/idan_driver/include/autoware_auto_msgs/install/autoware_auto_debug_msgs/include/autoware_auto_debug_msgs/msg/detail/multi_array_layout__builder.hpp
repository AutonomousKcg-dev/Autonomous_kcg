// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_debug_msgs:msg/MultiArrayLayout.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__MULTI_ARRAY_LAYOUT__BUILDER_HPP_
#define AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__MULTI_ARRAY_LAYOUT__BUILDER_HPP_

#include "autoware_auto_debug_msgs/msg/detail/multi_array_layout__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autoware_auto_debug_msgs
{

namespace msg
{

namespace builder
{

class Init_MultiArrayLayout_data_offset
{
public:
  explicit Init_MultiArrayLayout_data_offset(::autoware_auto_debug_msgs::msg::MultiArrayLayout & msg)
  : msg_(msg)
  {}
  ::autoware_auto_debug_msgs::msg::MultiArrayLayout data_offset(::autoware_auto_debug_msgs::msg::MultiArrayLayout::_data_offset_type arg)
  {
    msg_.data_offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_debug_msgs::msg::MultiArrayLayout msg_;
};

class Init_MultiArrayLayout_dim
{
public:
  Init_MultiArrayLayout_dim()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiArrayLayout_data_offset dim(::autoware_auto_debug_msgs::msg::MultiArrayLayout::_dim_type arg)
  {
    msg_.dim = std::move(arg);
    return Init_MultiArrayLayout_data_offset(msg_);
  }

private:
  ::autoware_auto_debug_msgs::msg::MultiArrayLayout msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_debug_msgs::msg::MultiArrayLayout>()
{
  return autoware_auto_debug_msgs::msg::builder::Init_MultiArrayLayout_dim();
}

}  // namespace autoware_auto_debug_msgs

#endif  // AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__MULTI_ARRAY_LAYOUT__BUILDER_HPP_
