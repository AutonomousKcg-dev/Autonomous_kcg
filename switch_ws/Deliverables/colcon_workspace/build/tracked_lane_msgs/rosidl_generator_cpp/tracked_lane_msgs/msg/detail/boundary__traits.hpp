// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tracked_lane_msgs:msg/Boundary.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_LANE_MSGS__MSG__DETAIL__BOUNDARY__TRAITS_HPP_
#define TRACKED_LANE_MSGS__MSG__DETAIL__BOUNDARY__TRAITS_HPP_

#include "tracked_lane_msgs/msg/detail/boundary__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tracked_lane_msgs::msg::Boundary>()
{
  return "tracked_lane_msgs::msg::Boundary";
}

template<>
inline const char * name<tracked_lane_msgs::msg::Boundary>()
{
  return "tracked_lane_msgs/msg/Boundary";
}

template<>
struct has_fixed_size<tracked_lane_msgs::msg::Boundary>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tracked_lane_msgs::msg::Boundary>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tracked_lane_msgs::msg::Boundary>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRACKED_LANE_MSGS__MSG__DETAIL__BOUNDARY__TRAITS_HPP_
