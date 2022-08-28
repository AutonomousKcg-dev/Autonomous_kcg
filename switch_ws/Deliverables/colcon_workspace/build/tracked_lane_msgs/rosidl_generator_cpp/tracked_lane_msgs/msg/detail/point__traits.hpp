// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tracked_lane_msgs:msg/Point.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_LANE_MSGS__MSG__DETAIL__POINT__TRAITS_HPP_
#define TRACKED_LANE_MSGS__MSG__DETAIL__POINT__TRAITS_HPP_

#include "tracked_lane_msgs/msg/detail/point__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tracked_lane_msgs::msg::Point>()
{
  return "tracked_lane_msgs::msg::Point";
}

template<>
inline const char * name<tracked_lane_msgs::msg::Point>()
{
  return "tracked_lane_msgs/msg/Point";
}

template<>
struct has_fixed_size<tracked_lane_msgs::msg::Point>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tracked_lane_msgs::msg::Point>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tracked_lane_msgs::msg::Point>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRACKED_LANE_MSGS__MSG__DETAIL__POINT__TRAITS_HPP_
