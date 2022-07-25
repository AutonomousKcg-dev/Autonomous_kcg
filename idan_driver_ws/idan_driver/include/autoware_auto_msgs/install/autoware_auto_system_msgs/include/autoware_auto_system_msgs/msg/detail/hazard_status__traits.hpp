// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_system_msgs:msg/HazardStatus.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS__TRAITS_HPP_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS__TRAITS_HPP_

#include "autoware_auto_system_msgs/msg/detail/hazard_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_system_msgs::msg::HazardStatus>()
{
  return "autoware_auto_system_msgs::msg::HazardStatus";
}

template<>
inline const char * name<autoware_auto_system_msgs::msg::HazardStatus>()
{
  return "autoware_auto_system_msgs/msg/HazardStatus";
}

template<>
struct has_fixed_size<autoware_auto_system_msgs::msg::HazardStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_system_msgs::msg::HazardStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_auto_system_msgs::msg::HazardStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS__TRAITS_HPP_
