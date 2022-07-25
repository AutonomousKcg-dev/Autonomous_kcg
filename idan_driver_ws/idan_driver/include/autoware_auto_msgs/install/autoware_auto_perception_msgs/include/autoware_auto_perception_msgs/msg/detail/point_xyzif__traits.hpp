// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/PointXYZIF.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__POINT_XYZIF__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__POINT_XYZIF__TRAITS_HPP_

#include "autoware_auto_perception_msgs/msg/detail/point_xyzif__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::PointXYZIF>()
{
  return "autoware_auto_perception_msgs::msg::PointXYZIF";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::PointXYZIF>()
{
  return "autoware_auto_perception_msgs/msg/PointXYZIF";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::PointXYZIF>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::PointXYZIF>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::PointXYZIF>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__POINT_XYZIF__TRAITS_HPP_
