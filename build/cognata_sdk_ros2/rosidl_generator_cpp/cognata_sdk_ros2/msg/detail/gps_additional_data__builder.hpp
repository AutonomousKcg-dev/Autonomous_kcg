// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cognata_sdk_ros2:msg/GPSAdditionalData.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__GPS_ADDITIONAL_DATA__BUILDER_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__GPS_ADDITIONAL_DATA__BUILDER_HPP_

#include "cognata_sdk_ros2/msg/detail/gps_additional_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cognata_sdk_ros2
{

namespace msg
{

namespace builder
{

class Init_GPSAdditionalData_navigation_segment
{
public:
  explicit Init_GPSAdditionalData_navigation_segment(::cognata_sdk_ros2::msg::GPSAdditionalData & msg)
  : msg_(msg)
  {}
  ::cognata_sdk_ros2::msg::GPSAdditionalData navigation_segment(::cognata_sdk_ros2::msg::GPSAdditionalData::_navigation_segment_type arg)
  {
    msg_.navigation_segment = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::GPSAdditionalData msg_;
};

class Init_GPSAdditionalData_lane_number
{
public:
  explicit Init_GPSAdditionalData_lane_number(::cognata_sdk_ros2::msg::GPSAdditionalData & msg)
  : msg_(msg)
  {}
  Init_GPSAdditionalData_navigation_segment lane_number(::cognata_sdk_ros2::msg::GPSAdditionalData::_lane_number_type arg)
  {
    msg_.lane_number = std::move(arg);
    return Init_GPSAdditionalData_navigation_segment(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::GPSAdditionalData msg_;
};

class Init_GPSAdditionalData_angular_acceleration_local_3d
{
public:
  explicit Init_GPSAdditionalData_angular_acceleration_local_3d(::cognata_sdk_ros2::msg::GPSAdditionalData & msg)
  : msg_(msg)
  {}
  Init_GPSAdditionalData_lane_number angular_acceleration_local_3d(::cognata_sdk_ros2::msg::GPSAdditionalData::_angular_acceleration_local_3d_type arg)
  {
    msg_.angular_acceleration_local_3d = std::move(arg);
    return Init_GPSAdditionalData_lane_number(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::GPSAdditionalData msg_;
};

class Init_GPSAdditionalData_velocity_local_3d
{
public:
  explicit Init_GPSAdditionalData_velocity_local_3d(::cognata_sdk_ros2::msg::GPSAdditionalData & msg)
  : msg_(msg)
  {}
  Init_GPSAdditionalData_angular_acceleration_local_3d velocity_local_3d(::cognata_sdk_ros2::msg::GPSAdditionalData::_velocity_local_3d_type arg)
  {
    msg_.velocity_local_3d = std::move(arg);
    return Init_GPSAdditionalData_angular_acceleration_local_3d(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::GPSAdditionalData msg_;
};

class Init_GPSAdditionalData_position
{
public:
  explicit Init_GPSAdditionalData_position(::cognata_sdk_ros2::msg::GPSAdditionalData & msg)
  : msg_(msg)
  {}
  Init_GPSAdditionalData_velocity_local_3d position(::cognata_sdk_ros2::msg::GPSAdditionalData::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_GPSAdditionalData_velocity_local_3d(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::GPSAdditionalData msg_;
};

class Init_GPSAdditionalData_lane_offset
{
public:
  explicit Init_GPSAdditionalData_lane_offset(::cognata_sdk_ros2::msg::GPSAdditionalData & msg)
  : msg_(msg)
  {}
  Init_GPSAdditionalData_position lane_offset(::cognata_sdk_ros2::msg::GPSAdditionalData::_lane_offset_type arg)
  {
    msg_.lane_offset = std::move(arg);
    return Init_GPSAdditionalData_position(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::GPSAdditionalData msg_;
};

class Init_GPSAdditionalData_lane_width
{
public:
  explicit Init_GPSAdditionalData_lane_width(::cognata_sdk_ros2::msg::GPSAdditionalData & msg)
  : msg_(msg)
  {}
  Init_GPSAdditionalData_lane_offset lane_width(::cognata_sdk_ros2::msg::GPSAdditionalData::_lane_width_type arg)
  {
    msg_.lane_width = std::move(arg);
    return Init_GPSAdditionalData_lane_offset(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::GPSAdditionalData msg_;
};

class Init_GPSAdditionalData_speed
{
public:
  explicit Init_GPSAdditionalData_speed(::cognata_sdk_ros2::msg::GPSAdditionalData & msg)
  : msg_(msg)
  {}
  Init_GPSAdditionalData_lane_width speed(::cognata_sdk_ros2::msg::GPSAdditionalData::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_GPSAdditionalData_lane_width(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::GPSAdditionalData msg_;
};

class Init_GPSAdditionalData_header
{
public:
  Init_GPSAdditionalData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GPSAdditionalData_speed header(::cognata_sdk_ros2::msg::GPSAdditionalData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GPSAdditionalData_speed(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::GPSAdditionalData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cognata_sdk_ros2::msg::GPSAdditionalData>()
{
  return cognata_sdk_ros2::msg::builder::Init_GPSAdditionalData_header();
}

}  // namespace cognata_sdk_ros2

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__GPS_ADDITIONAL_DATA__BUILDER_HPP_
