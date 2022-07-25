// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_geometry_msgs:msg/Quaternion32.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__QUATERNION32__TRAITS_HPP_
#define AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__QUATERNION32__TRAITS_HPP_

#include "autoware_auto_geometry_msgs/msg/detail/quaternion32__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_geometry_msgs::msg::Quaternion32>()
{
  return "autoware_auto_geometry_msgs::msg::Quaternion32";
}

template<>
inline const char * name<autoware_auto_geometry_msgs::msg::Quaternion32>()
{
  return "autoware_auto_geometry_msgs/msg/Quaternion32";
}

template<>
struct has_fixed_size<autoware_auto_geometry_msgs::msg::Quaternion32>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_auto_geometry_msgs::msg::Quaternion32>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_auto_geometry_msgs::msg::Quaternion32>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__QUATERNION32__TRAITS_HPP_
