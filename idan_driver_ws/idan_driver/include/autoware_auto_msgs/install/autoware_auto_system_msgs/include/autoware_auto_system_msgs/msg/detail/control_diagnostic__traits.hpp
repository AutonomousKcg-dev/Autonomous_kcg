// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_system_msgs:msg/ControlDiagnostic.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__CONTROL_DIAGNOSTIC__TRAITS_HPP_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__CONTROL_DIAGNOSTIC__TRAITS_HPP_

#include "autoware_auto_system_msgs/msg/detail/control_diagnostic__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'diag_header'
#include "autoware_auto_system_msgs/msg/detail/diagnostic_header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_system_msgs::msg::ControlDiagnostic>()
{
  return "autoware_auto_system_msgs::msg::ControlDiagnostic";
}

template<>
inline const char * name<autoware_auto_system_msgs::msg::ControlDiagnostic>()
{
  return "autoware_auto_system_msgs/msg/ControlDiagnostic";
}

template<>
struct has_fixed_size<autoware_auto_system_msgs::msg::ControlDiagnostic>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_system_msgs::msg::ControlDiagnostic>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_system_msgs::msg::DiagnosticHeader>::value> {};

template<>
struct is_message<autoware_auto_system_msgs::msg::ControlDiagnostic>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__CONTROL_DIAGNOSTIC__TRAITS_HPP_
