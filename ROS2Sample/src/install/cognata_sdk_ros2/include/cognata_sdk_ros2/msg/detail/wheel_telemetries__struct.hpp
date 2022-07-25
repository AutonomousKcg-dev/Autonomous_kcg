// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cognata_sdk_ros2:msg/WheelTelemetries.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__WHEEL_TELEMETRIES__STRUCT_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__WHEEL_TELEMETRIES__STRUCT_HPP_

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
// Member 'tire_force'
// Member 'tire_slip'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'wheel_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cognata_sdk_ros2__msg__WheelTelemetries __attribute__((deprecated))
#else
# define DEPRECATED__cognata_sdk_ros2__msg__WheelTelemetries __declspec(deprecated)
#endif

namespace cognata_sdk_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelTelemetries_
{
  using Type = WheelTelemetries_<ContainerAllocator>;

  explicit WheelTelemetries_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    tire_force(_init),
    tire_slip(_init),
    wheel_velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angular_velocity = 0.0f;
      this->steer_angle = 0.0f;
      this->drive_torque = 0.0f;
      this->brake_torque = 0.0f;
      this->reaction_torque = 0.0f;
      this->can_slip = false;
      this->combined_tire_slip = 0.0f;
      this->suspension_compression = 0.0f;
      this->down_force = 0.0f;
      this->contact_angle = 0.0f;
      this->contact_depth = 0.0f;
      this->contact_speed = 0.0f;
      this->is_grounded = false;
    }
  }

  explicit WheelTelemetries_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    tire_force(_alloc, _init),
    tire_slip(_alloc, _init),
    wheel_velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angular_velocity = 0.0f;
      this->steer_angle = 0.0f;
      this->drive_torque = 0.0f;
      this->brake_torque = 0.0f;
      this->reaction_torque = 0.0f;
      this->can_slip = false;
      this->combined_tire_slip = 0.0f;
      this->suspension_compression = 0.0f;
      this->down_force = 0.0f;
      this->contact_angle = 0.0f;
      this->contact_depth = 0.0f;
      this->contact_speed = 0.0f;
      this->is_grounded = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _angular_velocity_type =
    float;
  _angular_velocity_type angular_velocity;
  using _steer_angle_type =
    float;
  _steer_angle_type steer_angle;
  using _drive_torque_type =
    float;
  _drive_torque_type drive_torque;
  using _brake_torque_type =
    float;
  _brake_torque_type brake_torque;
  using _reaction_torque_type =
    float;
  _reaction_torque_type reaction_torque;
  using _tire_force_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _tire_force_type tire_force;
  using _tire_slip_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _tire_slip_type tire_slip;
  using _can_slip_type =
    bool;
  _can_slip_type can_slip;
  using _combined_tire_slip_type =
    float;
  _combined_tire_slip_type combined_tire_slip;
  using _suspension_compression_type =
    float;
  _suspension_compression_type suspension_compression;
  using _down_force_type =
    float;
  _down_force_type down_force;
  using _contact_angle_type =
    float;
  _contact_angle_type contact_angle;
  using _contact_depth_type =
    float;
  _contact_depth_type contact_depth;
  using _contact_speed_type =
    float;
  _contact_speed_type contact_speed;
  using _is_grounded_type =
    bool;
  _is_grounded_type is_grounded;
  using _wheel_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _wheel_velocity_type wheel_velocity;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const float & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__steer_angle(
    const float & _arg)
  {
    this->steer_angle = _arg;
    return *this;
  }
  Type & set__drive_torque(
    const float & _arg)
  {
    this->drive_torque = _arg;
    return *this;
  }
  Type & set__brake_torque(
    const float & _arg)
  {
    this->brake_torque = _arg;
    return *this;
  }
  Type & set__reaction_torque(
    const float & _arg)
  {
    this->reaction_torque = _arg;
    return *this;
  }
  Type & set__tire_force(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->tire_force = _arg;
    return *this;
  }
  Type & set__tire_slip(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->tire_slip = _arg;
    return *this;
  }
  Type & set__can_slip(
    const bool & _arg)
  {
    this->can_slip = _arg;
    return *this;
  }
  Type & set__combined_tire_slip(
    const float & _arg)
  {
    this->combined_tire_slip = _arg;
    return *this;
  }
  Type & set__suspension_compression(
    const float & _arg)
  {
    this->suspension_compression = _arg;
    return *this;
  }
  Type & set__down_force(
    const float & _arg)
  {
    this->down_force = _arg;
    return *this;
  }
  Type & set__contact_angle(
    const float & _arg)
  {
    this->contact_angle = _arg;
    return *this;
  }
  Type & set__contact_depth(
    const float & _arg)
  {
    this->contact_depth = _arg;
    return *this;
  }
  Type & set__contact_speed(
    const float & _arg)
  {
    this->contact_speed = _arg;
    return *this;
  }
  Type & set__is_grounded(
    const bool & _arg)
  {
    this->is_grounded = _arg;
    return *this;
  }
  Type & set__wheel_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->wheel_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cognata_sdk_ros2::msg::WheelTelemetries_<ContainerAllocator> *;
  using ConstRawPtr =
    const cognata_sdk_ros2::msg::WheelTelemetries_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cognata_sdk_ros2::msg::WheelTelemetries_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cognata_sdk_ros2::msg::WheelTelemetries_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cognata_sdk_ros2::msg::WheelTelemetries_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cognata_sdk_ros2::msg::WheelTelemetries_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cognata_sdk_ros2::msg::WheelTelemetries_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cognata_sdk_ros2::msg::WheelTelemetries_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cognata_sdk_ros2::msg::WheelTelemetries_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cognata_sdk_ros2::msg::WheelTelemetries_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cognata_sdk_ros2__msg__WheelTelemetries
    std::shared_ptr<cognata_sdk_ros2::msg::WheelTelemetries_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cognata_sdk_ros2__msg__WheelTelemetries
    std::shared_ptr<cognata_sdk_ros2::msg::WheelTelemetries_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelTelemetries_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->steer_angle != other.steer_angle) {
      return false;
    }
    if (this->drive_torque != other.drive_torque) {
      return false;
    }
    if (this->brake_torque != other.brake_torque) {
      return false;
    }
    if (this->reaction_torque != other.reaction_torque) {
      return false;
    }
    if (this->tire_force != other.tire_force) {
      return false;
    }
    if (this->tire_slip != other.tire_slip) {
      return false;
    }
    if (this->can_slip != other.can_slip) {
      return false;
    }
    if (this->combined_tire_slip != other.combined_tire_slip) {
      return false;
    }
    if (this->suspension_compression != other.suspension_compression) {
      return false;
    }
    if (this->down_force != other.down_force) {
      return false;
    }
    if (this->contact_angle != other.contact_angle) {
      return false;
    }
    if (this->contact_depth != other.contact_depth) {
      return false;
    }
    if (this->contact_speed != other.contact_speed) {
      return false;
    }
    if (this->is_grounded != other.is_grounded) {
      return false;
    }
    if (this->wheel_velocity != other.wheel_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelTelemetries_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelTelemetries_

// alias to use template instance with default allocator
using WheelTelemetries =
  cognata_sdk_ros2::msg::WheelTelemetries_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cognata_sdk_ros2

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__WHEEL_TELEMETRIES__STRUCT_HPP_
