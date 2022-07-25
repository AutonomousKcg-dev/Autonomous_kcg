// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cognata_sdk_ros2:msg/RadarOutputTarget.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__RADAR_OUTPUT_TARGET__BUILDER_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__RADAR_OUTPUT_TARGET__BUILDER_HPP_

#include "cognata_sdk_ros2/msg/detail/radar_output_target__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cognata_sdk_ros2
{

namespace msg
{

namespace builder
{

class Init_RadarOutputTarget_is_ghost
{
public:
  explicit Init_RadarOutputTarget_is_ghost(::cognata_sdk_ros2::msg::RadarOutputTarget & msg)
  : msg_(msg)
  {}
  ::cognata_sdk_ros2::msg::RadarOutputTarget is_ghost(::cognata_sdk_ros2::msg::RadarOutputTarget::_is_ghost_type arg)
  {
    msg_.is_ghost = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::RadarOutputTarget msg_;
};

class Init_RadarOutputTarget_is_stationary
{
public:
  explicit Init_RadarOutputTarget_is_stationary(::cognata_sdk_ros2::msg::RadarOutputTarget & msg)
  : msg_(msg)
  {}
  Init_RadarOutputTarget_is_ghost is_stationary(::cognata_sdk_ros2::msg::RadarOutputTarget::_is_stationary_type arg)
  {
    msg_.is_stationary = std::move(arg);
    return Init_RadarOutputTarget_is_ghost(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::RadarOutputTarget msg_;
};

class Init_RadarOutputTarget_last_seen
{
public:
  explicit Init_RadarOutputTarget_last_seen(::cognata_sdk_ros2::msg::RadarOutputTarget & msg)
  : msg_(msg)
  {}
  Init_RadarOutputTarget_is_stationary last_seen(::cognata_sdk_ros2::msg::RadarOutputTarget::_last_seen_type arg)
  {
    msg_.last_seen = std::move(arg);
    return Init_RadarOutputTarget_is_stationary(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::RadarOutputTarget msg_;
};

class Init_RadarOutputTarget_age
{
public:
  explicit Init_RadarOutputTarget_age(::cognata_sdk_ros2::msg::RadarOutputTarget & msg)
  : msg_(msg)
  {}
  Init_RadarOutputTarget_last_seen age(::cognata_sdk_ros2::msg::RadarOutputTarget::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_RadarOutputTarget_last_seen(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::RadarOutputTarget msg_;
};

class Init_RadarOutputTarget_tracking_status
{
public:
  explicit Init_RadarOutputTarget_tracking_status(::cognata_sdk_ros2::msg::RadarOutputTarget & msg)
  : msg_(msg)
  {}
  Init_RadarOutputTarget_age tracking_status(::cognata_sdk_ros2::msg::RadarOutputTarget::_tracking_status_type arg)
  {
    msg_.tracking_status = std::move(arg);
    return Init_RadarOutputTarget_age(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::RadarOutputTarget msg_;
};

class Init_RadarOutputTarget_is_aggregate
{
public:
  explicit Init_RadarOutputTarget_is_aggregate(::cognata_sdk_ros2::msg::RadarOutputTarget & msg)
  : msg_(msg)
  {}
  Init_RadarOutputTarget_tracking_status is_aggregate(::cognata_sdk_ros2::msg::RadarOutputTarget::_is_aggregate_type arg)
  {
    msg_.is_aggregate = std::move(arg);
    return Init_RadarOutputTarget_tracking_status(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::RadarOutputTarget msg_;
};

class Init_RadarOutputTarget_amplitude
{
public:
  explicit Init_RadarOutputTarget_amplitude(::cognata_sdk_ros2::msg::RadarOutputTarget & msg)
  : msg_(msg)
  {}
  Init_RadarOutputTarget_is_aggregate amplitude(::cognata_sdk_ros2::msg::RadarOutputTarget::_amplitude_type arg)
  {
    msg_.amplitude = std::move(arg);
    return Init_RadarOutputTarget_is_aggregate(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::RadarOutputTarget msg_;
};

class Init_RadarOutputTarget_range_rate
{
public:
  explicit Init_RadarOutputTarget_range_rate(::cognata_sdk_ros2::msg::RadarOutputTarget & msg)
  : msg_(msg)
  {}
  Init_RadarOutputTarget_amplitude range_rate(::cognata_sdk_ros2::msg::RadarOutputTarget::_range_rate_type arg)
  {
    msg_.range_rate = std::move(arg);
    return Init_RadarOutputTarget_amplitude(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::RadarOutputTarget msg_;
};

class Init_RadarOutputTarget_elevation
{
public:
  explicit Init_RadarOutputTarget_elevation(::cognata_sdk_ros2::msg::RadarOutputTarget & msg)
  : msg_(msg)
  {}
  Init_RadarOutputTarget_range_rate elevation(::cognata_sdk_ros2::msg::RadarOutputTarget::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return Init_RadarOutputTarget_range_rate(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::RadarOutputTarget msg_;
};

class Init_RadarOutputTarget_azimuth
{
public:
  explicit Init_RadarOutputTarget_azimuth(::cognata_sdk_ros2::msg::RadarOutputTarget & msg)
  : msg_(msg)
  {}
  Init_RadarOutputTarget_elevation azimuth(::cognata_sdk_ros2::msg::RadarOutputTarget::_azimuth_type arg)
  {
    msg_.azimuth = std::move(arg);
    return Init_RadarOutputTarget_elevation(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::RadarOutputTarget msg_;
};

class Init_RadarOutputTarget_range
{
public:
  explicit Init_RadarOutputTarget_range(::cognata_sdk_ros2::msg::RadarOutputTarget & msg)
  : msg_(msg)
  {}
  Init_RadarOutputTarget_azimuth range(::cognata_sdk_ros2::msg::RadarOutputTarget::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_RadarOutputTarget_azimuth(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::RadarOutputTarget msg_;
};

class Init_RadarOutputTarget_time_stamp
{
public:
  explicit Init_RadarOutputTarget_time_stamp(::cognata_sdk_ros2::msg::RadarOutputTarget & msg)
  : msg_(msg)
  {}
  Init_RadarOutputTarget_range time_stamp(::cognata_sdk_ros2::msg::RadarOutputTarget::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_RadarOutputTarget_range(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::RadarOutputTarget msg_;
};

class Init_RadarOutputTarget_id
{
public:
  explicit Init_RadarOutputTarget_id(::cognata_sdk_ros2::msg::RadarOutputTarget & msg)
  : msg_(msg)
  {}
  Init_RadarOutputTarget_time_stamp id(::cognata_sdk_ros2::msg::RadarOutputTarget::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RadarOutputTarget_time_stamp(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::RadarOutputTarget msg_;
};

class Init_RadarOutputTarget_header
{
public:
  Init_RadarOutputTarget_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarOutputTarget_id header(::cognata_sdk_ros2::msg::RadarOutputTarget::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RadarOutputTarget_id(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::RadarOutputTarget msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cognata_sdk_ros2::msg::RadarOutputTarget>()
{
  return cognata_sdk_ros2::msg::builder::Init_RadarOutputTarget_header();
}

}  // namespace cognata_sdk_ros2

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__RADAR_OUTPUT_TARGET__BUILDER_HPP_
