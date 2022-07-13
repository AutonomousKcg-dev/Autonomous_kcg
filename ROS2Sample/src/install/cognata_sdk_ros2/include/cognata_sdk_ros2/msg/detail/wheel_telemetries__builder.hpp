// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cognata_sdk_ros2:msg/WheelTelemetries.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__WHEEL_TELEMETRIES__BUILDER_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__WHEEL_TELEMETRIES__BUILDER_HPP_

#include "cognata_sdk_ros2/msg/detail/wheel_telemetries__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cognata_sdk_ros2
{

namespace msg
{

namespace builder
{

class Init_WheelTelemetries_wheel_velocity
{
public:
  explicit Init_WheelTelemetries_wheel_velocity(::cognata_sdk_ros2::msg::WheelTelemetries & msg)
  : msg_(msg)
  {}
  ::cognata_sdk_ros2::msg::WheelTelemetries wheel_velocity(::cognata_sdk_ros2::msg::WheelTelemetries::_wheel_velocity_type arg)
  {
    msg_.wheel_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::WheelTelemetries msg_;
};

class Init_WheelTelemetries_is_grounded
{
public:
  explicit Init_WheelTelemetries_is_grounded(::cognata_sdk_ros2::msg::WheelTelemetries & msg)
  : msg_(msg)
  {}
  Init_WheelTelemetries_wheel_velocity is_grounded(::cognata_sdk_ros2::msg::WheelTelemetries::_is_grounded_type arg)
  {
    msg_.is_grounded = std::move(arg);
    return Init_WheelTelemetries_wheel_velocity(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::WheelTelemetries msg_;
};

class Init_WheelTelemetries_contact_speed
{
public:
  explicit Init_WheelTelemetries_contact_speed(::cognata_sdk_ros2::msg::WheelTelemetries & msg)
  : msg_(msg)
  {}
  Init_WheelTelemetries_is_grounded contact_speed(::cognata_sdk_ros2::msg::WheelTelemetries::_contact_speed_type arg)
  {
    msg_.contact_speed = std::move(arg);
    return Init_WheelTelemetries_is_grounded(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::WheelTelemetries msg_;
};

class Init_WheelTelemetries_contact_depth
{
public:
  explicit Init_WheelTelemetries_contact_depth(::cognata_sdk_ros2::msg::WheelTelemetries & msg)
  : msg_(msg)
  {}
  Init_WheelTelemetries_contact_speed contact_depth(::cognata_sdk_ros2::msg::WheelTelemetries::_contact_depth_type arg)
  {
    msg_.contact_depth = std::move(arg);
    return Init_WheelTelemetries_contact_speed(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::WheelTelemetries msg_;
};

class Init_WheelTelemetries_contact_angle
{
public:
  explicit Init_WheelTelemetries_contact_angle(::cognata_sdk_ros2::msg::WheelTelemetries & msg)
  : msg_(msg)
  {}
  Init_WheelTelemetries_contact_depth contact_angle(::cognata_sdk_ros2::msg::WheelTelemetries::_contact_angle_type arg)
  {
    msg_.contact_angle = std::move(arg);
    return Init_WheelTelemetries_contact_depth(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::WheelTelemetries msg_;
};

class Init_WheelTelemetries_down_force
{
public:
  explicit Init_WheelTelemetries_down_force(::cognata_sdk_ros2::msg::WheelTelemetries & msg)
  : msg_(msg)
  {}
  Init_WheelTelemetries_contact_angle down_force(::cognata_sdk_ros2::msg::WheelTelemetries::_down_force_type arg)
  {
    msg_.down_force = std::move(arg);
    return Init_WheelTelemetries_contact_angle(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::WheelTelemetries msg_;
};

class Init_WheelTelemetries_suspension_compression
{
public:
  explicit Init_WheelTelemetries_suspension_compression(::cognata_sdk_ros2::msg::WheelTelemetries & msg)
  : msg_(msg)
  {}
  Init_WheelTelemetries_down_force suspension_compression(::cognata_sdk_ros2::msg::WheelTelemetries::_suspension_compression_type arg)
  {
    msg_.suspension_compression = std::move(arg);
    return Init_WheelTelemetries_down_force(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::WheelTelemetries msg_;
};

class Init_WheelTelemetries_combined_tire_slip
{
public:
  explicit Init_WheelTelemetries_combined_tire_slip(::cognata_sdk_ros2::msg::WheelTelemetries & msg)
  : msg_(msg)
  {}
  Init_WheelTelemetries_suspension_compression combined_tire_slip(::cognata_sdk_ros2::msg::WheelTelemetries::_combined_tire_slip_type arg)
  {
    msg_.combined_tire_slip = std::move(arg);
    return Init_WheelTelemetries_suspension_compression(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::WheelTelemetries msg_;
};

class Init_WheelTelemetries_can_slip
{
public:
  explicit Init_WheelTelemetries_can_slip(::cognata_sdk_ros2::msg::WheelTelemetries & msg)
  : msg_(msg)
  {}
  Init_WheelTelemetries_combined_tire_slip can_slip(::cognata_sdk_ros2::msg::WheelTelemetries::_can_slip_type arg)
  {
    msg_.can_slip = std::move(arg);
    return Init_WheelTelemetries_combined_tire_slip(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::WheelTelemetries msg_;
};

class Init_WheelTelemetries_tire_slip
{
public:
  explicit Init_WheelTelemetries_tire_slip(::cognata_sdk_ros2::msg::WheelTelemetries & msg)
  : msg_(msg)
  {}
  Init_WheelTelemetries_can_slip tire_slip(::cognata_sdk_ros2::msg::WheelTelemetries::_tire_slip_type arg)
  {
    msg_.tire_slip = std::move(arg);
    return Init_WheelTelemetries_can_slip(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::WheelTelemetries msg_;
};

class Init_WheelTelemetries_tire_force
{
public:
  explicit Init_WheelTelemetries_tire_force(::cognata_sdk_ros2::msg::WheelTelemetries & msg)
  : msg_(msg)
  {}
  Init_WheelTelemetries_tire_slip tire_force(::cognata_sdk_ros2::msg::WheelTelemetries::_tire_force_type arg)
  {
    msg_.tire_force = std::move(arg);
    return Init_WheelTelemetries_tire_slip(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::WheelTelemetries msg_;
};

class Init_WheelTelemetries_reaction_torque
{
public:
  explicit Init_WheelTelemetries_reaction_torque(::cognata_sdk_ros2::msg::WheelTelemetries & msg)
  : msg_(msg)
  {}
  Init_WheelTelemetries_tire_force reaction_torque(::cognata_sdk_ros2::msg::WheelTelemetries::_reaction_torque_type arg)
  {
    msg_.reaction_torque = std::move(arg);
    return Init_WheelTelemetries_tire_force(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::WheelTelemetries msg_;
};

class Init_WheelTelemetries_brake_torque
{
public:
  explicit Init_WheelTelemetries_brake_torque(::cognata_sdk_ros2::msg::WheelTelemetries & msg)
  : msg_(msg)
  {}
  Init_WheelTelemetries_reaction_torque brake_torque(::cognata_sdk_ros2::msg::WheelTelemetries::_brake_torque_type arg)
  {
    msg_.brake_torque = std::move(arg);
    return Init_WheelTelemetries_reaction_torque(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::WheelTelemetries msg_;
};

class Init_WheelTelemetries_drive_torque
{
public:
  explicit Init_WheelTelemetries_drive_torque(::cognata_sdk_ros2::msg::WheelTelemetries & msg)
  : msg_(msg)
  {}
  Init_WheelTelemetries_brake_torque drive_torque(::cognata_sdk_ros2::msg::WheelTelemetries::_drive_torque_type arg)
  {
    msg_.drive_torque = std::move(arg);
    return Init_WheelTelemetries_brake_torque(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::WheelTelemetries msg_;
};

class Init_WheelTelemetries_steer_angle
{
public:
  explicit Init_WheelTelemetries_steer_angle(::cognata_sdk_ros2::msg::WheelTelemetries & msg)
  : msg_(msg)
  {}
  Init_WheelTelemetries_drive_torque steer_angle(::cognata_sdk_ros2::msg::WheelTelemetries::_steer_angle_type arg)
  {
    msg_.steer_angle = std::move(arg);
    return Init_WheelTelemetries_drive_torque(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::WheelTelemetries msg_;
};

class Init_WheelTelemetries_angular_velocity
{
public:
  explicit Init_WheelTelemetries_angular_velocity(::cognata_sdk_ros2::msg::WheelTelemetries & msg)
  : msg_(msg)
  {}
  Init_WheelTelemetries_steer_angle angular_velocity(::cognata_sdk_ros2::msg::WheelTelemetries::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_WheelTelemetries_steer_angle(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::WheelTelemetries msg_;
};

class Init_WheelTelemetries_header
{
public:
  Init_WheelTelemetries_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelTelemetries_angular_velocity header(::cognata_sdk_ros2::msg::WheelTelemetries::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WheelTelemetries_angular_velocity(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::WheelTelemetries msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cognata_sdk_ros2::msg::WheelTelemetries>()
{
  return cognata_sdk_ros2::msg::builder::Init_WheelTelemetries_header();
}

}  // namespace cognata_sdk_ros2

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__WHEEL_TELEMETRIES__BUILDER_HPP_
