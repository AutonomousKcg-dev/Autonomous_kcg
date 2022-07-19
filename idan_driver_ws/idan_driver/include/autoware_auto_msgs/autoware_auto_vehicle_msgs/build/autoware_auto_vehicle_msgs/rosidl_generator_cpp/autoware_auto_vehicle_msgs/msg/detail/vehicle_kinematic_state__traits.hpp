// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/VehicleKinematicState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_KINEMATIC_STATE__TRAITS_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_KINEMATIC_STATE__TRAITS_HPP_

#include "autoware_auto_vehicle_msgs/msg/detail/vehicle_kinematic_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'state'
#include "autoware_auto_planning_msgs/msg/detail/trajectory_point__traits.hpp"
// Member 'delta'
#include "geometry_msgs/msg/detail/transform__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_vehicle_msgs::msg::VehicleKinematicState>()
{
  return "autoware_auto_vehicle_msgs::msg::VehicleKinematicState";
}

template<>
inline const char * name<autoware_auto_vehicle_msgs::msg::VehicleKinematicState>()
{
  return "autoware_auto_vehicle_msgs/msg/VehicleKinematicState";
}

template<>
struct has_fixed_size<autoware_auto_vehicle_msgs::msg::VehicleKinematicState>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_planning_msgs::msg::TrajectoryPoint>::value && has_fixed_size<geometry_msgs::msg::Transform>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<autoware_auto_vehicle_msgs::msg::VehicleKinematicState>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_planning_msgs::msg::TrajectoryPoint>::value && has_bounded_size<geometry_msgs::msg::Transform>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<autoware_auto_vehicle_msgs::msg::VehicleKinematicState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_KINEMATIC_STATE__TRAITS_HPP_
