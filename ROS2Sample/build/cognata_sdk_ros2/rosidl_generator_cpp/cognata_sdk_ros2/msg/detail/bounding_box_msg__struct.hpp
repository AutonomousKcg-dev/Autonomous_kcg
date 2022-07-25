// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cognata_sdk_ros2:msg/BoundingBoxMsg.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__BOUNDING_BOX_MSG__STRUCT_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__BOUNDING_BOX_MSG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/transform__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cognata_sdk_ros2__msg__BoundingBoxMsg __attribute__((deprecated))
#else
# define DEPRECATED__cognata_sdk_ros2__msg__BoundingBoxMsg __declspec(deprecated)
#endif

namespace cognata_sdk_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoundingBoxMsg_
{
  using Type = BoundingBoxMsg_<ContainerAllocator>;

  explicit BoundingBoxMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : transform(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0.0f;
      this->width = 0.0f;
      this->length = 0.0f;
    }
  }

  explicit BoundingBoxMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : transform(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0.0f;
      this->width = 0.0f;
      this->length = 0.0f;
    }
  }

  // field types and members
  using _transform_type =
    geometry_msgs::msg::Transform_<ContainerAllocator>;
  _transform_type transform;
  using _height_type =
    float;
  _height_type height;
  using _width_type =
    float;
  _width_type width;
  using _length_type =
    float;
  _length_type length;

  // setters for named parameter idiom
  Type & set__transform(
    const geometry_msgs::msg::Transform_<ContainerAllocator> & _arg)
  {
    this->transform = _arg;
    return *this;
  }
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__width(
    const float & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__length(
    const float & _arg)
  {
    this->length = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cognata_sdk_ros2::msg::BoundingBoxMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const cognata_sdk_ros2::msg::BoundingBoxMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cognata_sdk_ros2::msg::BoundingBoxMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cognata_sdk_ros2::msg::BoundingBoxMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cognata_sdk_ros2::msg::BoundingBoxMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cognata_sdk_ros2::msg::BoundingBoxMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cognata_sdk_ros2::msg::BoundingBoxMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cognata_sdk_ros2::msg::BoundingBoxMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cognata_sdk_ros2::msg::BoundingBoxMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cognata_sdk_ros2::msg::BoundingBoxMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cognata_sdk_ros2__msg__BoundingBoxMsg
    std::shared_ptr<cognata_sdk_ros2::msg::BoundingBoxMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cognata_sdk_ros2__msg__BoundingBoxMsg
    std::shared_ptr<cognata_sdk_ros2::msg::BoundingBoxMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoundingBoxMsg_ & other) const
  {
    if (this->transform != other.transform) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoundingBoxMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoundingBoxMsg_

// alias to use template instance with default allocator
using BoundingBoxMsg =
  cognata_sdk_ros2::msg::BoundingBoxMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cognata_sdk_ros2

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__BOUNDING_BOX_MSG__STRUCT_HPP_
