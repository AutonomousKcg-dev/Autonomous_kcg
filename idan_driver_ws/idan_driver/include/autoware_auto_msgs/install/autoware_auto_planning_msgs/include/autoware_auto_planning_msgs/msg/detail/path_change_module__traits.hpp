// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_planning_msgs:msg/PathChangeModule.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE__TRAITS_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE__TRAITS_HPP_

#include "autoware_auto_planning_msgs/msg/detail/path_change_module__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'module'
#include "autoware_auto_planning_msgs/msg/detail/path_change_module_id__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_planning_msgs::msg::PathChangeModule>()
{
  return "autoware_auto_planning_msgs::msg::PathChangeModule";
}

template<>
inline const char * name<autoware_auto_planning_msgs::msg::PathChangeModule>()
{
  return "autoware_auto_planning_msgs/msg/PathChangeModule";
}

template<>
struct has_fixed_size<autoware_auto_planning_msgs::msg::PathChangeModule>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_planning_msgs::msg::PathChangeModuleId>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<autoware_auto_planning_msgs::msg::PathChangeModule>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_planning_msgs::msg::PathChangeModuleId>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<autoware_auto_planning_msgs::msg::PathChangeModule>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE__TRAITS_HPP_
