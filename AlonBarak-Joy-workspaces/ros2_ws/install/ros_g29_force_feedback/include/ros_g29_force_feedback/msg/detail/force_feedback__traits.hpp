// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_g29_force_feedback:msg/ForceFeedback.idl
// generated code does not contain a copyright notice

#ifndef ROS_G29_FORCE_FEEDBACK__MSG__DETAIL__FORCE_FEEDBACK__TRAITS_HPP_
#define ROS_G29_FORCE_FEEDBACK__MSG__DETAIL__FORCE_FEEDBACK__TRAITS_HPP_

#include "ros_g29_force_feedback/msg/detail/force_feedback__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_g29_force_feedback::msg::ForceFeedback>()
{
  return "ros_g29_force_feedback::msg::ForceFeedback";
}

template<>
inline const char * name<ros_g29_force_feedback::msg::ForceFeedback>()
{
  return "ros_g29_force_feedback/msg/ForceFeedback";
}

template<>
struct has_fixed_size<ros_g29_force_feedback::msg::ForceFeedback>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ros_g29_force_feedback::msg::ForceFeedback>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ros_g29_force_feedback::msg::ForceFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_G29_FORCE_FEEDBACK__MSG__DETAIL__FORCE_FEEDBACK__TRAITS_HPP_
