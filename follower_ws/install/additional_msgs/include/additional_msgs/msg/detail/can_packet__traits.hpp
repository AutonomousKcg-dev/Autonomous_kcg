// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from additional_msgs:msg/CanPacket.idl
// generated code does not contain a copyright notice

#ifndef ADDITIONAL_MSGS__MSG__DETAIL__CAN_PACKET__TRAITS_HPP_
#define ADDITIONAL_MSGS__MSG__DETAIL__CAN_PACKET__TRAITS_HPP_

#include "additional_msgs/msg/detail/can_packet__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<additional_msgs::msg::CanPacket>()
{
  return "additional_msgs::msg::CanPacket";
}

template<>
inline const char * name<additional_msgs::msg::CanPacket>()
{
  return "additional_msgs/msg/CanPacket";
}

template<>
struct has_fixed_size<additional_msgs::msg::CanPacket>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<additional_msgs::msg::CanPacket>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<additional_msgs::msg::CanPacket>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ADDITIONAL_MSGS__MSG__DETAIL__CAN_PACKET__TRAITS_HPP_
