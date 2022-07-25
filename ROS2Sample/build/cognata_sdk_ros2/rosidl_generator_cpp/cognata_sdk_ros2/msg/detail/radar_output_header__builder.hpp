// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cognata_sdk_ros2:msg/RadarOutputHeader.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__RADAR_OUTPUT_HEADER__BUILDER_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__RADAR_OUTPUT_HEADER__BUILDER_HPP_

#include "cognata_sdk_ros2/msg/detail/radar_output_header__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cognata_sdk_ros2
{

namespace msg
{

namespace builder
{

class Init_RadarOutputHeader_targets
{
public:
  explicit Init_RadarOutputHeader_targets(::cognata_sdk_ros2::msg::RadarOutputHeader & msg)
  : msg_(msg)
  {}
  ::cognata_sdk_ros2::msg::RadarOutputHeader targets(::cognata_sdk_ros2::msg::RadarOutputHeader::_targets_type arg)
  {
    msg_.targets = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::RadarOutputHeader msg_;
};

class Init_RadarOutputHeader_v_fov
{
public:
  explicit Init_RadarOutputHeader_v_fov(::cognata_sdk_ros2::msg::RadarOutputHeader & msg)
  : msg_(msg)
  {}
  Init_RadarOutputHeader_targets v_fov(::cognata_sdk_ros2::msg::RadarOutputHeader::_v_fov_type arg)
  {
    msg_.v_fov = std::move(arg);
    return Init_RadarOutputHeader_targets(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::RadarOutputHeader msg_;
};

class Init_RadarOutputHeader_h_fov
{
public:
  explicit Init_RadarOutputHeader_h_fov(::cognata_sdk_ros2::msg::RadarOutputHeader & msg)
  : msg_(msg)
  {}
  Init_RadarOutputHeader_v_fov h_fov(::cognata_sdk_ros2::msg::RadarOutputHeader::_h_fov_type arg)
  {
    msg_.h_fov = std::move(arg);
    return Init_RadarOutputHeader_v_fov(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::RadarOutputHeader msg_;
};

class Init_RadarOutputHeader_radar_placement
{
public:
  explicit Init_RadarOutputHeader_radar_placement(::cognata_sdk_ros2::msg::RadarOutputHeader & msg)
  : msg_(msg)
  {}
  Init_RadarOutputHeader_h_fov radar_placement(::cognata_sdk_ros2::msg::RadarOutputHeader::_radar_placement_type arg)
  {
    msg_.radar_placement = std::move(arg);
    return Init_RadarOutputHeader_h_fov(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::RadarOutputHeader msg_;
};

class Init_RadarOutputHeader_radar_id
{
public:
  explicit Init_RadarOutputHeader_radar_id(::cognata_sdk_ros2::msg::RadarOutputHeader & msg)
  : msg_(msg)
  {}
  Init_RadarOutputHeader_radar_placement radar_id(::cognata_sdk_ros2::msg::RadarOutputHeader::_radar_id_type arg)
  {
    msg_.radar_id = std::move(arg);
    return Init_RadarOutputHeader_radar_placement(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::RadarOutputHeader msg_;
};

class Init_RadarOutputHeader_header
{
public:
  Init_RadarOutputHeader_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarOutputHeader_radar_id header(::cognata_sdk_ros2::msg::RadarOutputHeader::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RadarOutputHeader_radar_id(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::RadarOutputHeader msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cognata_sdk_ros2::msg::RadarOutputHeader>()
{
  return cognata_sdk_ros2::msg::builder::Init_RadarOutputHeader_header();
}

}  // namespace cognata_sdk_ros2

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__RADAR_OUTPUT_HEADER__BUILDER_HPP_
