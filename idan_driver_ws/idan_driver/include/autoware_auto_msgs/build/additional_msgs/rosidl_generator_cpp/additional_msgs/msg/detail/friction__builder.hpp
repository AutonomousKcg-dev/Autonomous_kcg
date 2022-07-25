// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from additional_msgs:msg/Friction.idl
// generated code does not contain a copyright notice

#ifndef ADDITIONAL_MSGS__MSG__DETAIL__FRICTION__BUILDER_HPP_
#define ADDITIONAL_MSGS__MSG__DETAIL__FRICTION__BUILDER_HPP_

#include "additional_msgs/msg/detail/friction__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace additional_msgs
{

namespace msg
{

namespace builder
{

class Init_Friction_value
{
public:
  Init_Friction_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::additional_msgs::msg::Friction value(::additional_msgs::msg::Friction::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::additional_msgs::msg::Friction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::additional_msgs::msg::Friction>()
{
  return additional_msgs::msg::builder::Init_Friction_value();
}

}  // namespace additional_msgs

#endif  // ADDITIONAL_MSGS__MSG__DETAIL__FRICTION__BUILDER_HPP_
