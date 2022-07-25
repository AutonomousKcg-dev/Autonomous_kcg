// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_debug_msgs:msg/MultiArrayLayout.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__MULTI_ARRAY_LAYOUT__TRAITS_HPP_
#define AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__MULTI_ARRAY_LAYOUT__TRAITS_HPP_

#include "autoware_auto_debug_msgs/msg/detail/multi_array_layout__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_debug_msgs::msg::MultiArrayLayout>()
{
  return "autoware_auto_debug_msgs::msg::MultiArrayLayout";
}

template<>
inline const char * name<autoware_auto_debug_msgs::msg::MultiArrayLayout>()
{
  return "autoware_auto_debug_msgs/msg/MultiArrayLayout";
}

template<>
struct has_fixed_size<autoware_auto_debug_msgs::msg::MultiArrayLayout>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_debug_msgs::msg::MultiArrayLayout>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_auto_debug_msgs::msg::MultiArrayLayout>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__MULTI_ARRAY_LAYOUT__TRAITS_HPP_
