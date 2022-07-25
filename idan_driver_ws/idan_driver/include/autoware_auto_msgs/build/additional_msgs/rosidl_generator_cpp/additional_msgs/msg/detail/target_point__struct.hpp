// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from additional_msgs:msg/TargetPoint.idl
// generated code does not contain a copyright notice

#ifndef ADDITIONAL_MSGS__MSG__DETAIL__TARGET_POINT__STRUCT_HPP_
#define ADDITIONAL_MSGS__MSG__DETAIL__TARGET_POINT__STRUCT_HPP_

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
# define DEPRECATED__additional_msgs__msg__TargetPoint __attribute__((deprecated))
#else
# define DEPRECATED__additional_msgs__msg__TargetPoint __declspec(deprecated)
#endif

namespace additional_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TargetPoint_
{
  using Type = TargetPoint_<ContainerAllocator>;

  explicit TargetPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->angle = 0.0f;
      this->distance = 0.0f;
      this->velocity = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->angle = 0.0f;
      this->distance = 0.0f;
      this->velocity = 0.0f;
    }
  }

  explicit TargetPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->angle = 0.0f;
      this->distance = 0.0f;
      this->velocity = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->angle = 0.0f;
      this->distance = 0.0f;
      this->velocity = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _angle_type =
    float;
  _angle_type angle;
  using _distance_type =
    float;
  _distance_type distance;
  using _velocity_type =
    float;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__velocity(
    const float & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    additional_msgs::msg::TargetPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const additional_msgs::msg::TargetPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<additional_msgs::msg::TargetPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<additional_msgs::msg::TargetPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      additional_msgs::msg::TargetPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<additional_msgs::msg::TargetPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      additional_msgs::msg::TargetPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<additional_msgs::msg::TargetPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<additional_msgs::msg::TargetPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<additional_msgs::msg::TargetPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__additional_msgs__msg__TargetPoint
    std::shared_ptr<additional_msgs::msg::TargetPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__additional_msgs__msg__TargetPoint
    std::shared_ptr<additional_msgs::msg::TargetPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetPoint_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetPoint_

// alias to use template instance with default allocator
using TargetPoint =
  additional_msgs::msg::TargetPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace additional_msgs

#endif  // ADDITIONAL_MSGS__MSG__DETAIL__TARGET_POINT__STRUCT_HPP_
