// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tracked_object_msgs:msg/TrackedObject.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_OBJECT_MSGS__MSG__DETAIL__TRACKED_OBJECT__TRAITS_HPP_
#define TRACKED_OBJECT_MSGS__MSG__DETAIL__TRACKED_OBJECT__TRAITS_HPP_

#include "tracked_object_msgs/msg/detail/tracked_object__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'object_pose_m_quat'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'object_velocity_mps_radps'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'box_dimensions_m'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tracked_object_msgs::msg::TrackedObject>()
{
  return "tracked_object_msgs::msg::TrackedObject";
}

template<>
inline const char * name<tracked_object_msgs::msg::TrackedObject>()
{
  return "tracked_object_msgs/msg/TrackedObject";
}

template<>
struct has_fixed_size<tracked_object_msgs::msg::TrackedObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tracked_object_msgs::msg::TrackedObject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tracked_object_msgs::msg::TrackedObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRACKED_OBJECT_MSGS__MSG__DETAIL__TRACKED_OBJECT__TRAITS_HPP_
