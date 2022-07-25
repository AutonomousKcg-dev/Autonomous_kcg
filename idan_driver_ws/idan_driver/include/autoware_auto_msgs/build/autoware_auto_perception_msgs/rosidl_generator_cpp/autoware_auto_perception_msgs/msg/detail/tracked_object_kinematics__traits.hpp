// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/TrackedObjectKinematics.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT_KINEMATICS__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT_KINEMATICS__TRAITS_HPP_

#include "autoware_auto_perception_msgs/msg/detail/tracked_object_kinematics__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'centroid_position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance__traits.hpp"
// Member 'acceleration'
#include "geometry_msgs/msg/detail/accel_with_covariance__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::TrackedObjectKinematics>()
{
  return "autoware_auto_perception_msgs::msg::TrackedObjectKinematics";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::TrackedObjectKinematics>()
{
  return "autoware_auto_perception_msgs/msg/TrackedObjectKinematics";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::TrackedObjectKinematics>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::AccelWithCovariance>::value && has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Quaternion>::value && has_fixed_size<geometry_msgs::msg::TwistWithCovariance>::value> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::TrackedObjectKinematics>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::AccelWithCovariance>::value && has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Quaternion>::value && has_bounded_size<geometry_msgs::msg::TwistWithCovariance>::value> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::TrackedObjectKinematics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT_KINEMATICS__TRAITS_HPP_
