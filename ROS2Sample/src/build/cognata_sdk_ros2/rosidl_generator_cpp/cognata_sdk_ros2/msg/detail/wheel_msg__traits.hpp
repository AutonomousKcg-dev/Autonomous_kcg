// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cognata_sdk_ros2:msg/WheelMsg.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__WHEEL_MSG__TRAITS_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__WHEEL_MSG__TRAITS_HPP_

#include "cognata_sdk_ros2/msg/detail/wheel_msg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'relative_position'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cognata_sdk_ros2::msg::WheelMsg>()
{
  return "cognata_sdk_ros2::msg::WheelMsg";
}

template<>
inline const char * name<cognata_sdk_ros2::msg::WheelMsg>()
{
  return "cognata_sdk_ros2/msg/WheelMsg";
}

template<>
struct has_fixed_size<cognata_sdk_ros2::msg::WheelMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cognata_sdk_ros2::msg::WheelMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cognata_sdk_ros2::msg::WheelMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__WHEEL_MSG__TRAITS_HPP_
