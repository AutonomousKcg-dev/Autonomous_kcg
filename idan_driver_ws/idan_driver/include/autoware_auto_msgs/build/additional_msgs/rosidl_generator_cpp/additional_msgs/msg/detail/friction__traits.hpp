// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from additional_msgs:msg/Friction.idl
// generated code does not contain a copyright notice

#ifndef ADDITIONAL_MSGS__MSG__DETAIL__FRICTION__TRAITS_HPP_
#define ADDITIONAL_MSGS__MSG__DETAIL__FRICTION__TRAITS_HPP_

#include "additional_msgs/msg/detail/friction__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<additional_msgs::msg::Friction>()
{
  return "additional_msgs::msg::Friction";
}

template<>
inline const char * name<additional_msgs::msg::Friction>()
{
  return "additional_msgs/msg/Friction";
}

template<>
struct has_fixed_size<additional_msgs::msg::Friction>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<additional_msgs::msg::Friction>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<additional_msgs::msg::Friction>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ADDITIONAL_MSGS__MSG__DETAIL__FRICTION__TRAITS_HPP_
