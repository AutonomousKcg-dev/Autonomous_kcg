// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tracked_object_msgs:msg/ObjectTypes.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_OBJECT_MSGS__MSG__DETAIL__OBJECT_TYPES__TRAITS_HPP_
#define TRACKED_OBJECT_MSGS__MSG__DETAIL__OBJECT_TYPES__TRAITS_HPP_

#include "tracked_object_msgs/msg/detail/object_types__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tracked_object_msgs::msg::ObjectTypes>()
{
  return "tracked_object_msgs::msg::ObjectTypes";
}

template<>
inline const char * name<tracked_object_msgs::msg::ObjectTypes>()
{
  return "tracked_object_msgs/msg/ObjectTypes";
}

template<>
struct has_fixed_size<tracked_object_msgs::msg::ObjectTypes>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tracked_object_msgs::msg::ObjectTypes>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tracked_object_msgs::msg::ObjectTypes>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRACKED_OBJECT_MSGS__MSG__DETAIL__OBJECT_TYPES__TRAITS_HPP_
