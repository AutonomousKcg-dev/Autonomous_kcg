// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_perception_msgs:msg/Shape.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__SHAPE__STRUCT_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__SHAPE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'polygon'
#include "geometry_msgs/msg/detail/polygon__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_perception_msgs__msg__Shape __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_perception_msgs__msg__Shape __declspec(deprecated)
#endif

namespace autoware_auto_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Shape_
{
  using Type = Shape_<ContainerAllocator>;

  explicit Shape_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : polygon(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0.0f;
    }
  }

  explicit Shape_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : polygon(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0.0f;
    }
  }

  // field types and members
  using _polygon_type =
    geometry_msgs::msg::Polygon_<ContainerAllocator>;
  _polygon_type polygon;
  using _height_type =
    float;
  _height_type height;

  // setters for named parameter idiom
  Type & set__polygon(
    const geometry_msgs::msg::Polygon_<ContainerAllocator> & _arg)
  {
    this->polygon = _arg;
    return *this;
  }
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_perception_msgs__msg__Shape
    std::shared_ptr<autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_perception_msgs__msg__Shape
    std::shared_ptr<autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Shape_ & other) const
  {
    if (this->polygon != other.polygon) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    return true;
  }
  bool operator!=(const Shape_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Shape_

// alias to use template instance with default allocator
using Shape =
  autoware_auto_perception_msgs::msg::Shape_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__SHAPE__STRUCT_HPP_
