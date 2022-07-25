// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/Shape.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__SHAPE__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__SHAPE__TRAITS_HPP_

#include "autoware_auto_perception_msgs/msg/detail/shape__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'polygon'
#include "geometry_msgs/msg/detail/polygon__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::Shape>()
{
  return "autoware_auto_perception_msgs::msg::Shape";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::Shape>()
{
  return "autoware_auto_perception_msgs/msg/Shape";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::Shape>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Polygon>::value> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::Shape>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Polygon>::value> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::Shape>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__SHAPE__TRAITS_HPP_
