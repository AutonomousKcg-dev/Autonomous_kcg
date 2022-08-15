// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cognata_sdk_ros2:msg/GPSAdditionalData.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__GPS_ADDITIONAL_DATA__STRUCT_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__GPS_ADDITIONAL_DATA__STRUCT_HPP_

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
// Member 'position'
// Member 'velocity_local_3d'
// Member 'angular_acceleration_local_3d'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cognata_sdk_ros2__msg__GPSAdditionalData __attribute__((deprecated))
#else
# define DEPRECATED__cognata_sdk_ros2__msg__GPSAdditionalData __declspec(deprecated)
#endif

namespace cognata_sdk_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GPSAdditionalData_
{
  using Type = GPSAdditionalData_<ContainerAllocator>;

  explicit GPSAdditionalData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    position(_init),
    velocity_local_3d(_init),
    angular_acceleration_local_3d(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->lane_width = 0.0f;
      this->lane_offset = 0.0f;
      this->lane_number = 0l;
      this->navigation_segment = 0l;
    }
  }

  explicit GPSAdditionalData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    position(_alloc, _init),
    velocity_local_3d(_alloc, _init),
    angular_acceleration_local_3d(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->lane_width = 0.0f;
      this->lane_offset = 0.0f;
      this->lane_number = 0l;
      this->navigation_segment = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _speed_type =
    float;
  _speed_type speed;
  using _lane_width_type =
    float;
  _lane_width_type lane_width;
  using _lane_offset_type =
    float;
  _lane_offset_type lane_offset;
  using _position_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _position_type position;
  using _velocity_local_3d_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _velocity_local_3d_type velocity_local_3d;
  using _angular_acceleration_local_3d_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_acceleration_local_3d_type angular_acceleration_local_3d;
  using _lane_number_type =
    int32_t;
  _lane_number_type lane_number;
  using _navigation_segment_type =
    int32_t;
  _navigation_segment_type navigation_segment;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__lane_width(
    const float & _arg)
  {
    this->lane_width = _arg;
    return *this;
  }
  Type & set__lane_offset(
    const float & _arg)
  {
    this->lane_offset = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity_local_3d(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->velocity_local_3d = _arg;
    return *this;
  }
  Type & set__angular_acceleration_local_3d(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular_acceleration_local_3d = _arg;
    return *this;
  }
  Type & set__lane_number(
    const int32_t & _arg)
  {
    this->lane_number = _arg;
    return *this;
  }
  Type & set__navigation_segment(
    const int32_t & _arg)
  {
    this->navigation_segment = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cognata_sdk_ros2::msg::GPSAdditionalData_<ContainerAllocator> *;
  using ConstRawPtr =
    const cognata_sdk_ros2::msg::GPSAdditionalData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cognata_sdk_ros2::msg::GPSAdditionalData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cognata_sdk_ros2::msg::GPSAdditionalData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cognata_sdk_ros2::msg::GPSAdditionalData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cognata_sdk_ros2::msg::GPSAdditionalData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cognata_sdk_ros2::msg::GPSAdditionalData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cognata_sdk_ros2::msg::GPSAdditionalData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cognata_sdk_ros2::msg::GPSAdditionalData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cognata_sdk_ros2::msg::GPSAdditionalData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cognata_sdk_ros2__msg__GPSAdditionalData
    std::shared_ptr<cognata_sdk_ros2::msg::GPSAdditionalData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cognata_sdk_ros2__msg__GPSAdditionalData
    std::shared_ptr<cognata_sdk_ros2::msg::GPSAdditionalData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GPSAdditionalData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->lane_width != other.lane_width) {
      return false;
    }
    if (this->lane_offset != other.lane_offset) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity_local_3d != other.velocity_local_3d) {
      return false;
    }
    if (this->angular_acceleration_local_3d != other.angular_acceleration_local_3d) {
      return false;
    }
    if (this->lane_number != other.lane_number) {
      return false;
    }
    if (this->navigation_segment != other.navigation_segment) {
      return false;
    }
    return true;
  }
  bool operator!=(const GPSAdditionalData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GPSAdditionalData_

// alias to use template instance with default allocator
using GPSAdditionalData =
  cognata_sdk_ros2::msg::GPSAdditionalData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cognata_sdk_ros2

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__GPS_ADDITIONAL_DATA__STRUCT_HPP_
