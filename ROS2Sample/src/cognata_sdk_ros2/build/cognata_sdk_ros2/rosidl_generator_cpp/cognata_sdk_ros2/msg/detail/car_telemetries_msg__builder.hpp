// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cognata_sdk_ros2:msg/CarTelemetriesMsg.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__CAR_TELEMETRIES_MSG__BUILDER_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__CAR_TELEMETRIES_MSG__BUILDER_HPP_

#include "cognata_sdk_ros2/msg/detail/car_telemetries_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cognata_sdk_ros2
{

namespace msg
{

namespace builder
{

class Init_CarTelemetriesMsg_wheels
{
public:
  explicit Init_CarTelemetriesMsg_wheels(::cognata_sdk_ros2::msg::CarTelemetriesMsg & msg)
  : msg_(msg)
  {}
  ::cognata_sdk_ros2::msg::CarTelemetriesMsg wheels(::cognata_sdk_ros2::msg::CarTelemetriesMsg::_wheels_type arg)
  {
    msg_.wheels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::CarTelemetriesMsg msg_;
};

class Init_CarTelemetriesMsg_current_gear
{
public:
  explicit Init_CarTelemetriesMsg_current_gear(::cognata_sdk_ros2::msg::CarTelemetriesMsg & msg)
  : msg_(msg)
  {}
  Init_CarTelemetriesMsg_wheels current_gear(::cognata_sdk_ros2::msg::CarTelemetriesMsg::_current_gear_type arg)
  {
    msg_.current_gear = std::move(arg);
    return Init_CarTelemetriesMsg_wheels(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::CarTelemetriesMsg msg_;
};

class Init_CarTelemetriesMsg_engine_power
{
public:
  explicit Init_CarTelemetriesMsg_engine_power(::cognata_sdk_ros2::msg::CarTelemetriesMsg & msg)
  : msg_(msg)
  {}
  Init_CarTelemetriesMsg_current_gear engine_power(::cognata_sdk_ros2::msg::CarTelemetriesMsg::_engine_power_type arg)
  {
    msg_.engine_power = std::move(arg);
    return Init_CarTelemetriesMsg_current_gear(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::CarTelemetriesMsg msg_;
};

class Init_CarTelemetriesMsg_engine_torque
{
public:
  explicit Init_CarTelemetriesMsg_engine_torque(::cognata_sdk_ros2::msg::CarTelemetriesMsg & msg)
  : msg_(msg)
  {}
  Init_CarTelemetriesMsg_engine_power engine_torque(::cognata_sdk_ros2::msg::CarTelemetriesMsg::_engine_torque_type arg)
  {
    msg_.engine_torque = std::move(arg);
    return Init_CarTelemetriesMsg_engine_power(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::CarTelemetriesMsg msg_;
};

class Init_CarTelemetriesMsg_engine_load
{
public:
  explicit Init_CarTelemetriesMsg_engine_load(::cognata_sdk_ros2::msg::CarTelemetriesMsg & msg)
  : msg_(msg)
  {}
  Init_CarTelemetriesMsg_engine_torque engine_load(::cognata_sdk_ros2::msg::CarTelemetriesMsg::_engine_load_type arg)
  {
    msg_.engine_load = std::move(arg);
    return Init_CarTelemetriesMsg_engine_torque(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::CarTelemetriesMsg msg_;
};

class Init_CarTelemetriesMsg_engine_rpm
{
public:
  explicit Init_CarTelemetriesMsg_engine_rpm(::cognata_sdk_ros2::msg::CarTelemetriesMsg & msg)
  : msg_(msg)
  {}
  Init_CarTelemetriesMsg_engine_load engine_rpm(::cognata_sdk_ros2::msg::CarTelemetriesMsg::_engine_rpm_type arg)
  {
    msg_.engine_rpm = std::move(arg);
    return Init_CarTelemetriesMsg_engine_load(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::CarTelemetriesMsg msg_;
};

class Init_CarTelemetriesMsg_center_of_mass
{
public:
  explicit Init_CarTelemetriesMsg_center_of_mass(::cognata_sdk_ros2::msg::CarTelemetriesMsg & msg)
  : msg_(msg)
  {}
  Init_CarTelemetriesMsg_engine_rpm center_of_mass(::cognata_sdk_ros2::msg::CarTelemetriesMsg::_center_of_mass_type arg)
  {
    msg_.center_of_mass = std::move(arg);
    return Init_CarTelemetriesMsg_engine_rpm(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::CarTelemetriesMsg msg_;
};

class Init_CarTelemetriesMsg_steering
{
public:
  explicit Init_CarTelemetriesMsg_steering(::cognata_sdk_ros2::msg::CarTelemetriesMsg & msg)
  : msg_(msg)
  {}
  Init_CarTelemetriesMsg_center_of_mass steering(::cognata_sdk_ros2::msg::CarTelemetriesMsg::_steering_type arg)
  {
    msg_.steering = std::move(arg);
    return Init_CarTelemetriesMsg_center_of_mass(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::CarTelemetriesMsg msg_;
};

class Init_CarTelemetriesMsg_gas
{
public:
  explicit Init_CarTelemetriesMsg_gas(::cognata_sdk_ros2::msg::CarTelemetriesMsg & msg)
  : msg_(msg)
  {}
  Init_CarTelemetriesMsg_steering gas(::cognata_sdk_ros2::msg::CarTelemetriesMsg::_gas_type arg)
  {
    msg_.gas = std::move(arg);
    return Init_CarTelemetriesMsg_steering(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::CarTelemetriesMsg msg_;
};

class Init_CarTelemetriesMsg_brake
{
public:
  explicit Init_CarTelemetriesMsg_brake(::cognata_sdk_ros2::msg::CarTelemetriesMsg & msg)
  : msg_(msg)
  {}
  Init_CarTelemetriesMsg_gas brake(::cognata_sdk_ros2::msg::CarTelemetriesMsg::_brake_type arg)
  {
    msg_.brake = std::move(arg);
    return Init_CarTelemetriesMsg_gas(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::CarTelemetriesMsg msg_;
};

class Init_CarTelemetriesMsg_acceleration
{
public:
  explicit Init_CarTelemetriesMsg_acceleration(::cognata_sdk_ros2::msg::CarTelemetriesMsg & msg)
  : msg_(msg)
  {}
  Init_CarTelemetriesMsg_brake acceleration(::cognata_sdk_ros2::msg::CarTelemetriesMsg::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_CarTelemetriesMsg_brake(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::CarTelemetriesMsg msg_;
};

class Init_CarTelemetriesMsg_turn_light
{
public:
  explicit Init_CarTelemetriesMsg_turn_light(::cognata_sdk_ros2::msg::CarTelemetriesMsg & msg)
  : msg_(msg)
  {}
  Init_CarTelemetriesMsg_acceleration turn_light(::cognata_sdk_ros2::msg::CarTelemetriesMsg::_turn_light_type arg)
  {
    msg_.turn_light = std::move(arg);
    return Init_CarTelemetriesMsg_acceleration(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::CarTelemetriesMsg msg_;
};

class Init_CarTelemetriesMsg_header
{
public:
  Init_CarTelemetriesMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarTelemetriesMsg_turn_light header(::cognata_sdk_ros2::msg::CarTelemetriesMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CarTelemetriesMsg_turn_light(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::CarTelemetriesMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cognata_sdk_ros2::msg::CarTelemetriesMsg>()
{
  return cognata_sdk_ros2::msg::builder::Init_CarTelemetriesMsg_header();
}

}  // namespace cognata_sdk_ros2

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__CAR_TELEMETRIES_MSG__BUILDER_HPP_
