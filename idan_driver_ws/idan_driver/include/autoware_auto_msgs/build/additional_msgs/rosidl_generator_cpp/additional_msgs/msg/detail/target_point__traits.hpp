// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from additional_msgs:msg/TargetPoint.idl
// generated code does not contain a copyright notice

#ifndef ADDITIONAL_MSGS__MSG__DETAIL__TARGET_POINT__TRAITS_HPP_
#define ADDITIONAL_MSGS__MSG__DETAIL__TARGET_POINT__TRAITS_HPP_

#include "additional_msgs/msg/detail/target_point__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<additional_msgs::msg::TargetPoint>()
{
  return "additional_msgs::msg::TargetPoint";
}

template<>
inline const char * name<additional_msgs::msg::TargetPoint>()
{
  return "additional_msgs/msg/TargetPoint";
}

template<>
struct has_fixed_size<additional_msgs::msg::TargetPoint>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<additional_msgs::msg::TargetPoint>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<additional_msgs::msg::TargetPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ADDITIONAL_MSGS__MSG__DETAIL__TARGET_POINT__TRAITS_HPP_
