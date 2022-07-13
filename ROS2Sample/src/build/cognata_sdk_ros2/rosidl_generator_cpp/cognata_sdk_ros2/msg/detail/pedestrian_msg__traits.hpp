// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cognata_sdk_ros2:msg/PedestrianMsg.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__PEDESTRIAN_MSG__TRAITS_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__PEDESTRIAN_MSG__TRAITS_HPP_

#include "cognata_sdk_ros2/msg/detail/pedestrian_msg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'description'
#include "cognata_sdk_ros2/msg/detail/object_description__traits.hpp"
// Member 'pedestrian_velocity'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cognata_sdk_ros2::msg::PedestrianMsg>()
{
  return "cognata_sdk_ros2::msg::PedestrianMsg";
}

template<>
inline const char * name<cognata_sdk_ros2::msg::PedestrianMsg>()
{
  return "cognata_sdk_ros2/msg/PedestrianMsg";
}

template<>
struct has_fixed_size<cognata_sdk_ros2::msg::PedestrianMsg>
  : std::integral_constant<bool, has_fixed_size<cognata_sdk_ros2::msg::ObjectDescription>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<cognata_sdk_ros2::msg::PedestrianMsg>
  : std::integral_constant<bool, has_bounded_size<cognata_sdk_ros2::msg::ObjectDescription>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<cognata_sdk_ros2::msg::PedestrianMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__PEDESTRIAN_MSG__TRAITS_HPP_
