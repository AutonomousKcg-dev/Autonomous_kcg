// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tracked_lane_msgs:msg/LaneResults.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_LANE_MSGS__MSG__DETAIL__LANE_RESULTS__TRAITS_HPP_
#define TRACKED_LANE_MSGS__MSG__DETAIL__LANE_RESULTS__TRAITS_HPP_

#include "tracked_lane_msgs/msg/detail/lane_results__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'ego_lane'
// Member 'road_boundary'
#include "tracked_lane_msgs/msg/detail/lane__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tracked_lane_msgs::msg::LaneResults>()
{
  return "tracked_lane_msgs::msg::LaneResults";
}

template<>
inline const char * name<tracked_lane_msgs::msg::LaneResults>()
{
  return "tracked_lane_msgs/msg/LaneResults";
}

template<>
struct has_fixed_size<tracked_lane_msgs::msg::LaneResults>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tracked_lane_msgs::msg::LaneResults>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tracked_lane_msgs::msg::LaneResults>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRACKED_LANE_MSGS__MSG__DETAIL__LANE_RESULTS__TRAITS_HPP_
