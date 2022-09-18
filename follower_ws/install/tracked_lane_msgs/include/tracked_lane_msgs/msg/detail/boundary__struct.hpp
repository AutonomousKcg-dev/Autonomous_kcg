// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tracked_lane_msgs:msg/Boundary.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_LANE_MSGS__MSG__DETAIL__BOUNDARY__STRUCT_HPP_
#define TRACKED_LANE_MSGS__MSG__DETAIL__BOUNDARY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'points'
#include "tracked_lane_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tracked_lane_msgs__msg__Boundary __attribute__((deprecated))
#else
# define DEPRECATED__tracked_lane_msgs__msg__Boundary __declspec(deprecated)
#endif

namespace tracked_lane_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Boundary_
{
  using Type = Boundary_<ContainerAllocator>;

  explicit Boundary_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_points = 0ul;
    }
  }

  explicit Boundary_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_points = 0ul;
    }
  }

  // field types and members
  using _points_type =
    std::vector<tracked_lane_msgs::msg::Point_<ContainerAllocator>, typename ContainerAllocator::template rebind<tracked_lane_msgs::msg::Point_<ContainerAllocator>>::other>;
  _points_type points;
  using _num_points_type =
    uint32_t;
  _num_points_type num_points;

  // setters for named parameter idiom
  Type & set__points(
    const std::vector<tracked_lane_msgs::msg::Point_<ContainerAllocator>, typename ContainerAllocator::template rebind<tracked_lane_msgs::msg::Point_<ContainerAllocator>>::other> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__num_points(
    const uint32_t & _arg)
  {
    this->num_points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tracked_lane_msgs::msg::Boundary_<ContainerAllocator> *;
  using ConstRawPtr =
    const tracked_lane_msgs::msg::Boundary_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tracked_lane_msgs::msg::Boundary_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tracked_lane_msgs::msg::Boundary_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tracked_lane_msgs::msg::Boundary_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tracked_lane_msgs::msg::Boundary_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tracked_lane_msgs::msg::Boundary_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tracked_lane_msgs::msg::Boundary_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tracked_lane_msgs::msg::Boundary_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tracked_lane_msgs::msg::Boundary_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tracked_lane_msgs__msg__Boundary
    std::shared_ptr<tracked_lane_msgs::msg::Boundary_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tracked_lane_msgs__msg__Boundary
    std::shared_ptr<tracked_lane_msgs::msg::Boundary_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Boundary_ & other) const
  {
    if (this->points != other.points) {
      return false;
    }
    if (this->num_points != other.num_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const Boundary_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Boundary_

// alias to use template instance with default allocator
using Boundary =
  tracked_lane_msgs::msg::Boundary_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tracked_lane_msgs

#endif  // TRACKED_LANE_MSGS__MSG__DETAIL__BOUNDARY__STRUCT_HPP_
