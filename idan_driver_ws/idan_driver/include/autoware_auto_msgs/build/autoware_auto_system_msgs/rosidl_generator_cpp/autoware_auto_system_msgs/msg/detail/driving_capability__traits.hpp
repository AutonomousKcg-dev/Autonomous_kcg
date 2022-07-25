// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_system_msgs:msg/DrivingCapability.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DRIVING_CAPABILITY__TRAITS_HPP_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DRIVING_CAPABILITY__TRAITS_HPP_

#include "autoware_auto_system_msgs/msg/detail/driving_capability__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'autonomous_driving'
// Member 'remote_control'
#include "autoware_auto_system_msgs/msg/detail/hazard_status__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_system_msgs::msg::DrivingCapability>()
{
  return "autoware_auto_system_msgs::msg::DrivingCapability";
}

template<>
inline const char * name<autoware_auto_system_msgs::msg::DrivingCapability>()
{
  return "autoware_auto_system_msgs/msg/DrivingCapability";
}

template<>
struct has_fixed_size<autoware_auto_system_msgs::msg::DrivingCapability>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_system_msgs::msg::HazardStatus>::value && has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<autoware_auto_system_msgs::msg::DrivingCapability>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_system_msgs::msg::HazardStatus>::value && has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<autoware_auto_system_msgs::msg::DrivingCapability>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DRIVING_CAPABILITY__TRAITS_HPP_
