// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_g29_force_feedback:msg/ForceFeedback.idl
// generated code does not contain a copyright notice

#ifndef ROS_G29_FORCE_FEEDBACK__MSG__DETAIL__FORCE_FEEDBACK__BUILDER_HPP_
#define ROS_G29_FORCE_FEEDBACK__MSG__DETAIL__FORCE_FEEDBACK__BUILDER_HPP_

#include "ros_g29_force_feedback/msg/detail/force_feedback__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros_g29_force_feedback
{

namespace msg
{

namespace builder
{

class Init_ForceFeedback_torque
{
public:
  explicit Init_ForceFeedback_torque(::ros_g29_force_feedback::msg::ForceFeedback & msg)
  : msg_(msg)
  {}
  ::ros_g29_force_feedback::msg::ForceFeedback torque(::ros_g29_force_feedback::msg::ForceFeedback::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_g29_force_feedback::msg::ForceFeedback msg_;
};

class Init_ForceFeedback_position
{
public:
  explicit Init_ForceFeedback_position(::ros_g29_force_feedback::msg::ForceFeedback & msg)
  : msg_(msg)
  {}
  Init_ForceFeedback_torque position(::ros_g29_force_feedback::msg::ForceFeedback::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ForceFeedback_torque(msg_);
  }

private:
  ::ros_g29_force_feedback::msg::ForceFeedback msg_;
};

class Init_ForceFeedback_header
{
public:
  Init_ForceFeedback_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ForceFeedback_position header(::ros_g29_force_feedback::msg::ForceFeedback::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ForceFeedback_position(msg_);
  }

private:
  ::ros_g29_force_feedback::msg::ForceFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_g29_force_feedback::msg::ForceFeedback>()
{
  return ros_g29_force_feedback::msg::builder::Init_ForceFeedback_header();
}

}  // namespace ros_g29_force_feedback

#endif  // ROS_G29_FORCE_FEEDBACK__MSG__DETAIL__FORCE_FEEDBACK__BUILDER_HPP_
