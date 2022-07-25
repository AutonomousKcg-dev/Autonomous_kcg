// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cognata_sdk_ros2:msg/CarTelemetriesMsg.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__CAR_TELEMETRIES_MSG__TRAITS_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__CAR_TELEMETRIES_MSG__TRAITS_HPP_

#include "cognata_sdk_ros2/msg/detail/car_telemetries_msg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'center_of_mass'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cognata_sdk_ros2::msg::CarTelemetriesMsg>()
{
  return "cognata_sdk_ros2::msg::CarTelemetriesMsg";
}

template<>
inline const char * name<cognata_sdk_ros2::msg::CarTelemetriesMsg>()
{
  return "cognata_sdk_ros2/msg/CarTelemetriesMsg";
}

template<>
struct has_fixed_size<cognata_sdk_ros2::msg::CarTelemetriesMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cognata_sdk_ros2::msg::CarTelemetriesMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cognata_sdk_ros2::msg::CarTelemetriesMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__CAR_TELEMETRIES_MSG__TRAITS_HPP_
