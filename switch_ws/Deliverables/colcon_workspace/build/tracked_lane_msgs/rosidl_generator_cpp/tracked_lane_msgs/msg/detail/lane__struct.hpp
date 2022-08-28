// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tracked_lane_msgs:msg/Lane.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_LANE_MSGS__MSG__DETAIL__LANE__STRUCT_HPP_
#define TRACKED_LANE_MSGS__MSG__DETAIL__LANE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'left_boundary'
// Member 'right_boundary'
#include "tracked_lane_msgs/msg/detail/boundary__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tracked_lane_msgs__msg__Lane __attribute__((deprecated))
#else
# define DEPRECATED__tracked_lane_msgs__msg__Lane __declspec(deprecated)
#endif

namespace tracked_lane_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Lane_
{
  using Type = Lane_<ContainerAllocator>;

  explicit Lane_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : left_boundary(_init),
    right_boundary(_init)
  {
    (void)_init;
  }

  explicit Lane_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : left_boundary(_alloc, _init),
    right_boundary(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _left_boundary_type =
    tracked_lane_msgs::msg::Boundary_<ContainerAllocator>;
  _left_boundary_type left_boundary;
  using _right_boundary_type =
    tracked_lane_msgs::msg::Boundary_<ContainerAllocator>;
  _right_boundary_type right_boundary;

  // setters for named parameter idiom
  Type & set__left_boundary(
    const tracked_lane_msgs::msg::Boundary_<ContainerAllocator> & _arg)
  {
    this->left_boundary = _arg;
    return *this;
  }
  Type & set__right_boundary(
    const tracked_lane_msgs::msg::Boundary_<ContainerAllocator> & _arg)
  {
    this->right_boundary = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tracked_lane_msgs::msg::Lane_<ContainerAllocator> *;
  using ConstRawPtr =
    const tracked_lane_msgs::msg::Lane_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tracked_lane_msgs::msg::Lane_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tracked_lane_msgs::msg::Lane_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tracked_lane_msgs::msg::Lane_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tracked_lane_msgs::msg::Lane_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tracked_lane_msgs::msg::Lane_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tracked_lane_msgs::msg::Lane_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tracked_lane_msgs::msg::Lane_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tracked_lane_msgs::msg::Lane_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tracked_lane_msgs__msg__Lane
    std::shared_ptr<tracked_lane_msgs::msg::Lane_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tracked_lane_msgs__msg__Lane
    std::shared_ptr<tracked_lane_msgs::msg::Lane_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Lane_ & other) const
  {
    if (this->left_boundary != other.left_boundary) {
      return false;
    }
    if (this->right_boundary != other.right_boundary) {
      return false;
    }
    return true;
  }
  bool operator!=(const Lane_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Lane_

// alias to use template instance with default allocator
using Lane =
  tracked_lane_msgs::msg::Lane_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tracked_lane_msgs

#endif  // TRACKED_LANE_MSGS__MSG__DETAIL__LANE__STRUCT_HPP_
