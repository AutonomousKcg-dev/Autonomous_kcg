// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cognata_sdk_ros2:msg/BoundingBoxMsg.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__BOUNDING_BOX_MSG__TRAITS_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__BOUNDING_BOX_MSG__TRAITS_HPP_

#include "cognata_sdk_ros2/msg/detail/bounding_box_msg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/transform__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cognata_sdk_ros2::msg::BoundingBoxMsg>()
{
  return "cognata_sdk_ros2::msg::BoundingBoxMsg";
}

template<>
inline const char * name<cognata_sdk_ros2::msg::BoundingBoxMsg>()
{
  return "cognata_sdk_ros2/msg/BoundingBoxMsg";
}

template<>
struct has_fixed_size<cognata_sdk_ros2::msg::BoundingBoxMsg>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Transform>::value> {};

template<>
struct has_bounded_size<cognata_sdk_ros2::msg::BoundingBoxMsg>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Transform>::value> {};

template<>
struct is_message<cognata_sdk_ros2::msg::BoundingBoxMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__BOUNDING_BOX_MSG__TRAITS_HPP_
