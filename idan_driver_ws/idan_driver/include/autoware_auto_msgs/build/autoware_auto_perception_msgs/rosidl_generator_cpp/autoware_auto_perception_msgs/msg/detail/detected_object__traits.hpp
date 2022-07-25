// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/DetectedObject.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT__TRAITS_HPP_

#include "autoware_auto_perception_msgs/msg/detail/detected_object__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'kinematics'
#include "autoware_auto_perception_msgs/msg/detail/detected_object_kinematics__traits.hpp"
// Member 'shape'
#include "autoware_auto_perception_msgs/msg/detail/shape__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::DetectedObject>()
{
  return "autoware_auto_perception_msgs::msg::DetectedObject";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::DetectedObject>()
{
  return "autoware_auto_perception_msgs/msg/DetectedObject";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::DetectedObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::DetectedObject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::DetectedObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT__TRAITS_HPP_
