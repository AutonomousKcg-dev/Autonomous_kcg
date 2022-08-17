// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/HeadlightsCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HEADLIGHTS_COMMAND__TRAITS_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HEADLIGHTS_COMMAND__TRAITS_HPP_

#include "autoware_auto_vehicle_msgs/msg/detail/headlights_command__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_vehicle_msgs::msg::HeadlightsCommand>()
{
  return "autoware_auto_vehicle_msgs::msg::HeadlightsCommand";
}

template<>
inline const char * name<autoware_auto_vehicle_msgs::msg::HeadlightsCommand>()
{
  return "autoware_auto_vehicle_msgs/msg/HeadlightsCommand";
}

template<>
struct has_fixed_size<autoware_auto_vehicle_msgs::msg::HeadlightsCommand>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<autoware_auto_vehicle_msgs::msg::HeadlightsCommand>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<autoware_auto_vehicle_msgs::msg::HeadlightsCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HEADLIGHTS_COMMAND__TRAITS_HPP_