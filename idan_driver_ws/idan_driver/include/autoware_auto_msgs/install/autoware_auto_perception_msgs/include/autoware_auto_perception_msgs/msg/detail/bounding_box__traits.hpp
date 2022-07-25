// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__BOUNDING_BOX__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__BOUNDING_BOX__TRAITS_HPP_

#include "autoware_auto_perception_msgs/msg/detail/bounding_box__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'centroid'
// Member 'size'
// Member 'corners'
#include "geometry_msgs/msg/detail/point32__traits.hpp"
// Member 'orientation'
#include "autoware_auto_geometry_msgs/msg/detail/quaternion32__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::BoundingBox>()
{
  return "autoware_auto_perception_msgs::msg::BoundingBox";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::BoundingBox>()
{
  return "autoware_auto_perception_msgs/msg/BoundingBox";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::BoundingBox>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_geometry_msgs::msg::Quaternion32>::value && has_fixed_size<geometry_msgs::msg::Point32>::value> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::BoundingBox>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_geometry_msgs::msg::Quaternion32>::value && has_bounded_size<geometry_msgs::msg::Point32>::value> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::BoundingBox>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__BOUNDING_BOX__TRAITS_HPP_
