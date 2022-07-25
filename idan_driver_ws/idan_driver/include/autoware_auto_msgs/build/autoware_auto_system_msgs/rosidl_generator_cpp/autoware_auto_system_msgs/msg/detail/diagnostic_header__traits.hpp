// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_system_msgs:msg/DiagnosticHeader.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_HEADER__TRAITS_HPP_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_HEADER__TRAITS_HPP_

#include "autoware_auto_system_msgs/msg/detail/diagnostic_header__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'data_stamp'
// Member 'computation_start'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'runtime'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_system_msgs::msg::DiagnosticHeader>()
{
  return "autoware_auto_system_msgs::msg::DiagnosticHeader";
}

template<>
inline const char * name<autoware_auto_system_msgs::msg::DiagnosticHeader>()
{
  return "autoware_auto_system_msgs/msg/DiagnosticHeader";
}

template<>
struct has_fixed_size<autoware_auto_system_msgs::msg::DiagnosticHeader>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_system_msgs::msg::DiagnosticHeader>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<autoware_auto_system_msgs::msg::DiagnosticHeader>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_HEADER__TRAITS_HPP_
