// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/PredictedObjectKinematics.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT_KINEMATICS__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT_KINEMATICS__TRAITS_HPP_

#include "autoware_auto_perception_msgs/msg/detail/predicted_object_kinematics__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'initial_pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"
// Member 'initial_twist'
#include "geometry_msgs/msg/detail/twist_with_covariance__traits.hpp"
// Member 'initial_acceleration'
#include "geometry_msgs/msg/detail/accel_with_covariance__traits.hpp"
// Member 'predicted_paths'
#include "autoware_auto_perception_msgs/msg/detail/predicted_path__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::PredictedObjectKinematics>()
{
  return "autoware_auto_perception_msgs::msg::PredictedObjectKinematics";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::PredictedObjectKinematics>()
{
  return "autoware_auto_perception_msgs/msg/PredictedObjectKinematics";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::PredictedObjectKinematics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::PredictedObjectKinematics>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_perception_msgs::msg::PredictedPath>::value && has_bounded_size<geometry_msgs::msg::AccelWithCovariance>::value && has_bounded_size<geometry_msgs::msg::PoseWithCovariance>::value && has_bounded_size<geometry_msgs::msg::TwistWithCovariance>::value> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::PredictedObjectKinematics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT_KINEMATICS__TRAITS_HPP_
