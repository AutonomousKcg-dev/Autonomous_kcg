// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tracked_lane_msgs:msg/Lane.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_LANE_MSGS__MSG__DETAIL__LANE__TRAITS_HPP_
#define TRACKED_LANE_MSGS__MSG__DETAIL__LANE__TRAITS_HPP_

#include "tracked_lane_msgs/msg/detail/lane__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'left_boundary'
// Member 'right_boundary'
#include "tracked_lane_msgs/msg/detail/boundary__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tracked_lane_msgs::msg::Lane>()
{
  return "tracked_lane_msgs::msg::Lane";
}

template<>
inline const char * name<tracked_lane_msgs::msg::Lane>()
{
  return "tracked_lane_msgs/msg/Lane";
}

template<>
struct has_fixed_size<tracked_lane_msgs::msg::Lane>
  : std::integral_constant<bool, has_fixed_size<tracked_lane_msgs::msg::Boundary>::value> {};

template<>
struct has_bounded_size<tracked_lane_msgs::msg::Lane>
  : std::integral_constant<bool, has_bounded_size<tracked_lane_msgs::msg::Boundary>::value> {};

template<>
struct is_message<tracked_lane_msgs::msg::Lane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRACKED_LANE_MSGS__MSG__DETAIL__LANE__TRAITS_HPP_
