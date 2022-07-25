// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_planning_msgs:msg/PathPoint.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__TRAITS_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__TRAITS_HPP_

#include "autoware_auto_planning_msgs/msg/detail/path_point__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_planning_msgs::msg::PathPoint>()
{
  return "autoware_auto_planning_msgs::msg::PathPoint";
}

template<>
inline const char * name<autoware_auto_planning_msgs::msg::PathPoint>()
{
  return "autoware_auto_planning_msgs/msg/PathPoint";
}

template<>
struct has_fixed_size<autoware_auto_planning_msgs::msg::PathPoint>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct has_bounded_size<autoware_auto_planning_msgs::msg::PathPoint>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct is_message<autoware_auto_planning_msgs::msg::PathPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__TRAITS_HPP_
