// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cognata_sdk_ros2:msg/CarTelemetriesMsg.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__CAR_TELEMETRIES_MSG__STRUCT_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__CAR_TELEMETRIES_MSG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'center_of_mass'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'wheels'
#include "cognata_sdk_ros2/msg/detail/wheel_telemetries__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cognata_sdk_ros2__msg__CarTelemetriesMsg __attribute__((deprecated))
#else
# define DEPRECATED__cognata_sdk_ros2__msg__CarTelemetriesMsg __declspec(deprecated)
#endif

namespace cognata_sdk_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarTelemetriesMsg_
{
  using Type = CarTelemetriesMsg_<ContainerAllocator>;

  explicit CarTelemetriesMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    center_of_mass(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->turn_light = "";
      this->acceleration = 0.0f;
      this->brake = 0.0f;
      this->gas = 0.0f;
      this->steering = 0.0f;
      this->engine_rpm = 0.0f;
      this->engine_load = 0.0f;
      this->engine_torque = 0.0f;
      this->engine_power = 0.0f;
      this->current_gear = 0l;
    }
  }

  explicit CarTelemetriesMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    turn_light(_alloc),
    center_of_mass(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->turn_light = "";
      this->acceleration = 0.0f;
      this->brake = 0.0f;
      this->gas = 0.0f;
      this->steering = 0.0f;
      this->engine_rpm = 0.0f;
      this->engine_load = 0.0f;
      this->engine_torque = 0.0f;
      this->engine_power = 0.0f;
      this->current_gear = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _turn_light_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _turn_light_type turn_light;
  using _acceleration_type =
    float;
  _acceleration_type acceleration;
  using _brake_type =
    float;
  _brake_type brake;
  using _gas_type =
    float;
  _gas_type gas;
  using _steering_type =
    float;
  _steering_type steering;
  using _center_of_mass_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _center_of_mass_type center_of_mass;
  using _engine_rpm_type =
    float;
  _engine_rpm_type engine_rpm;
  using _engine_load_type =
    float;
  _engine_load_type engine_load;
  using _engine_torque_type =
    float;
  _engine_torque_type engine_torque;
  using _engine_power_type =
    float;
  _engine_power_type engine_power;
  using _current_gear_type =
    int32_t;
  _current_gear_type current_gear;
  using _wheels_type =
    std::vector<cognata_sdk_ros2::msg::WheelTelemetries_<ContainerAllocator>, typename ContainerAllocator::template rebind<cognata_sdk_ros2::msg::WheelTelemetries_<ContainerAllocator>>::other>;
  _wheels_type wheels;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__turn_light(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->turn_light = _arg;
    return *this;
  }
  Type & set__acceleration(
    const float & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__brake(
    const float & _arg)
  {
    this->brake = _arg;
    return *this;
  }
  Type & set__gas(
    const float & _arg)
  {
    this->gas = _arg;
    return *this;
  }
  Type & set__steering(
    const float & _arg)
  {
    this->steering = _arg;
    return *this;
  }
  Type & set__center_of_mass(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->center_of_mass = _arg;
    return *this;
  }
  Type & set__engine_rpm(
    const float & _arg)
  {
    this->engine_rpm = _arg;
    return *this;
  }
  Type & set__engine_load(
    const float & _arg)
  {
    this->engine_load = _arg;
    return *this;
  }
  Type & set__engine_torque(
    const float & _arg)
  {
    this->engine_torque = _arg;
    return *this;
  }
  Type & set__engine_power(
    const float & _arg)
  {
    this->engine_power = _arg;
    return *this;
  }
  Type & set__current_gear(
    const int32_t & _arg)
  {
    this->current_gear = _arg;
    return *this;
  }
  Type & set__wheels(
    const std::vector<cognata_sdk_ros2::msg::WheelTelemetries_<ContainerAllocator>, typename ContainerAllocator::template rebind<cognata_sdk_ros2::msg::WheelTelemetries_<ContainerAllocator>>::other> & _arg)
  {
    this->wheels = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cognata_sdk_ros2::msg::CarTelemetriesMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const cognata_sdk_ros2::msg::CarTelemetriesMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cognata_sdk_ros2::msg::CarTelemetriesMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cognata_sdk_ros2::msg::CarTelemetriesMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cognata_sdk_ros2::msg::CarTelemetriesMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cognata_sdk_ros2::msg::CarTelemetriesMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cognata_sdk_ros2::msg::CarTelemetriesMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cognata_sdk_ros2::msg::CarTelemetriesMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cognata_sdk_ros2::msg::CarTelemetriesMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cognata_sdk_ros2::msg::CarTelemetriesMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cognata_sdk_ros2__msg__CarTelemetriesMsg
    std::shared_ptr<cognata_sdk_ros2::msg::CarTelemetriesMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cognata_sdk_ros2__msg__CarTelemetriesMsg
    std::shared_ptr<cognata_sdk_ros2::msg::CarTelemetriesMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarTelemetriesMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->turn_light != other.turn_light) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->brake != other.brake) {
      return false;
    }
    if (this->gas != other.gas) {
      return false;
    }
    if (this->steering != other.steering) {
      return false;
    }
    if (this->center_of_mass != other.center_of_mass) {
      return false;
    }
    if (this->engine_rpm != other.engine_rpm) {
      return false;
    }
    if (this->engine_load != other.engine_load) {
      return false;
    }
    if (this->engine_torque != other.engine_torque) {
      return false;
    }
    if (this->engine_power != other.engine_power) {
      return false;
    }
    if (this->current_gear != other.current_gear) {
      return false;
    }
    if (this->wheels != other.wheels) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarTelemetriesMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarTelemetriesMsg_

// alias to use template instance with default allocator
using CarTelemetriesMsg =
  cognata_sdk_ros2::msg::CarTelemetriesMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cognata_sdk_ros2

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__CAR_TELEMETRIES_MSG__STRUCT_HPP_
