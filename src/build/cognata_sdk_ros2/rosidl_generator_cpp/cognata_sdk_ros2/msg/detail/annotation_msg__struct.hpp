// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cognata_sdk_ros2:msg/AnnotationMsg.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__ANNOTATION_MSG__STRUCT_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__ANNOTATION_MSG__STRUCT_HPP_

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
// Member 'description'
#include "cognata_sdk_ros2/msg/detail/object_description__struct.hpp"
// Member 'local_transform'
#include "geometry_msgs/msg/detail/transform__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cognata_sdk_ros2__msg__AnnotationMsg __attribute__((deprecated))
#else
# define DEPRECATED__cognata_sdk_ros2__msg__AnnotationMsg __declspec(deprecated)
#endif

namespace cognata_sdk_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AnnotationMsg_
{
  using Type = AnnotationMsg_<ContainerAllocator>;

  explicit AnnotationMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    description(_init),
    local_transform(_init)
  {
    (void)_init;
  }

  explicit AnnotationMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    description(_alloc, _init),
    local_transform(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _description_type =
    cognata_sdk_ros2::msg::ObjectDescription_<ContainerAllocator>;
  _description_type description;
  using _local_transform_type =
    geometry_msgs::msg::Transform_<ContainerAllocator>;
  _local_transform_type local_transform;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__description(
    const cognata_sdk_ros2::msg::ObjectDescription_<ContainerAllocator> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__local_transform(
    const geometry_msgs::msg::Transform_<ContainerAllocator> & _arg)
  {
    this->local_transform = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cognata_sdk_ros2::msg::AnnotationMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const cognata_sdk_ros2::msg::AnnotationMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cognata_sdk_ros2::msg::AnnotationMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cognata_sdk_ros2::msg::AnnotationMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cognata_sdk_ros2::msg::AnnotationMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cognata_sdk_ros2::msg::AnnotationMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cognata_sdk_ros2::msg::AnnotationMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cognata_sdk_ros2::msg::AnnotationMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cognata_sdk_ros2::msg::AnnotationMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cognata_sdk_ros2::msg::AnnotationMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cognata_sdk_ros2__msg__AnnotationMsg
    std::shared_ptr<cognata_sdk_ros2::msg::AnnotationMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cognata_sdk_ros2__msg__AnnotationMsg
    std::shared_ptr<cognata_sdk_ros2::msg::AnnotationMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AnnotationMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->local_transform != other.local_transform) {
      return false;
    }
    return true;
  }
  bool operator!=(const AnnotationMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AnnotationMsg_

// alias to use template instance with default allocator
using AnnotationMsg =
  cognata_sdk_ros2::msg::AnnotationMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cognata_sdk_ros2

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__ANNOTATION_MSG__STRUCT_HPP_
