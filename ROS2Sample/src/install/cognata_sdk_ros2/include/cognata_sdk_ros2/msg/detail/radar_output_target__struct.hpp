// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cognata_sdk_ros2:msg/RadarOutputTarget.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__RADAR_OUTPUT_TARGET__STRUCT_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__RADAR_OUTPUT_TARGET__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__cognata_sdk_ros2__msg__RadarOutputTarget __attribute__((deprecated))
#else
# define DEPRECATED__cognata_sdk_ros2__msg__RadarOutputTarget __declspec(deprecated)
#endif

namespace cognata_sdk_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarOutputTarget_
{
  using Type = RadarOutputTarget_<ContainerAllocator>;

  explicit RadarOutputTarget_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->time_stamp = 0ul;
      this->range = 0.0f;
      this->azimuth = 0.0f;
      this->elevation = 0.0f;
      this->range_rate = 0.0f;
      this->amplitude = 0.0f;
      this->is_aggregate = 0ul;
      this->tracking_status = 0l;
      this->age = 0ul;
      this->last_seen = 0ul;
      this->is_stationary = false;
      this->is_ghost = false;
    }
  }

  explicit RadarOutputTarget_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->time_stamp = 0ul;
      this->range = 0.0f;
      this->azimuth = 0.0f;
      this->elevation = 0.0f;
      this->range_rate = 0.0f;
      this->amplitude = 0.0f;
      this->is_aggregate = 0ul;
      this->tracking_status = 0l;
      this->age = 0ul;
      this->last_seen = 0ul;
      this->is_stationary = false;
      this->is_ghost = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    uint32_t;
  _id_type id;
  using _time_stamp_type =
    uint32_t;
  _time_stamp_type time_stamp;
  using _range_type =
    float;
  _range_type range;
  using _azimuth_type =
    float;
  _azimuth_type azimuth;
  using _elevation_type =
    float;
  _elevation_type elevation;
  using _range_rate_type =
    float;
  _range_rate_type range_rate;
  using _amplitude_type =
    float;
  _amplitude_type amplitude;
  using _is_aggregate_type =
    uint32_t;
  _is_aggregate_type is_aggregate;
  using _tracking_status_type =
    int32_t;
  _tracking_status_type tracking_status;
  using _age_type =
    uint32_t;
  _age_type age;
  using _last_seen_type =
    uint32_t;
  _last_seen_type last_seen;
  using _is_stationary_type =
    bool;
  _is_stationary_type is_stationary;
  using _is_ghost_type =
    bool;
  _is_ghost_type is_ghost;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__time_stamp(
    const uint32_t & _arg)
  {
    this->time_stamp = _arg;
    return *this;
  }
  Type & set__range(
    const float & _arg)
  {
    this->range = _arg;
    return *this;
  }
  Type & set__azimuth(
    const float & _arg)
  {
    this->azimuth = _arg;
    return *this;
  }
  Type & set__elevation(
    const float & _arg)
  {
    this->elevation = _arg;
    return *this;
  }
  Type & set__range_rate(
    const float & _arg)
  {
    this->range_rate = _arg;
    return *this;
  }
  Type & set__amplitude(
    const float & _arg)
  {
    this->amplitude = _arg;
    return *this;
  }
  Type & set__is_aggregate(
    const uint32_t & _arg)
  {
    this->is_aggregate = _arg;
    return *this;
  }
  Type & set__tracking_status(
    const int32_t & _arg)
  {
    this->tracking_status = _arg;
    return *this;
  }
  Type & set__age(
    const uint32_t & _arg)
  {
    this->age = _arg;
    return *this;
  }
  Type & set__last_seen(
    const uint32_t & _arg)
  {
    this->last_seen = _arg;
    return *this;
  }
  Type & set__is_stationary(
    const bool & _arg)
  {
    this->is_stationary = _arg;
    return *this;
  }
  Type & set__is_ghost(
    const bool & _arg)
  {
    this->is_ghost = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cognata_sdk_ros2::msg::RadarOutputTarget_<ContainerAllocator> *;
  using ConstRawPtr =
    const cognata_sdk_ros2::msg::RadarOutputTarget_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cognata_sdk_ros2::msg::RadarOutputTarget_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cognata_sdk_ros2::msg::RadarOutputTarget_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cognata_sdk_ros2::msg::RadarOutputTarget_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cognata_sdk_ros2::msg::RadarOutputTarget_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cognata_sdk_ros2::msg::RadarOutputTarget_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cognata_sdk_ros2::msg::RadarOutputTarget_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cognata_sdk_ros2::msg::RadarOutputTarget_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cognata_sdk_ros2::msg::RadarOutputTarget_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cognata_sdk_ros2__msg__RadarOutputTarget
    std::shared_ptr<cognata_sdk_ros2::msg::RadarOutputTarget_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cognata_sdk_ros2__msg__RadarOutputTarget
    std::shared_ptr<cognata_sdk_ros2::msg::RadarOutputTarget_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarOutputTarget_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->range != other.range) {
      return false;
    }
    if (this->azimuth != other.azimuth) {
      return false;
    }
    if (this->elevation != other.elevation) {
      return false;
    }
    if (this->range_rate != other.range_rate) {
      return false;
    }
    if (this->amplitude != other.amplitude) {
      return false;
    }
    if (this->is_aggregate != other.is_aggregate) {
      return false;
    }
    if (this->tracking_status != other.tracking_status) {
      return false;
    }
    if (this->age != other.age) {
      return false;
    }
    if (this->last_seen != other.last_seen) {
      return false;
    }
    if (this->is_stationary != other.is_stationary) {
      return false;
    }
    if (this->is_ghost != other.is_ghost) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarOutputTarget_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarOutputTarget_

// alias to use template instance with default allocator
using RadarOutputTarget =
  cognata_sdk_ros2::msg::RadarOutputTarget_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cognata_sdk_ros2

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__RADAR_OUTPUT_TARGET__STRUCT_HPP_
