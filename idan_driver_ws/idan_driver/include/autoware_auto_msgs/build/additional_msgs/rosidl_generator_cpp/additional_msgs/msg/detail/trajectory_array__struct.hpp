// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from additional_msgs:msg/TrajectoryArray.idl
// generated code does not contain a copyright notice

#ifndef ADDITIONAL_MSGS__MSG__DETAIL__TRAJECTORY_ARRAY__STRUCT_HPP_
#define ADDITIONAL_MSGS__MSG__DETAIL__TRAJECTORY_ARRAY__STRUCT_HPP_

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
// Member 'trajectories'
#include "autoware_auto_msgs/msg/detail/trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__additional_msgs__msg__TrajectoryArray __attribute__((deprecated))
#else
# define DEPRECATED__additional_msgs__msg__TrajectoryArray __declspec(deprecated)
#endif

namespace additional_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajectoryArray_
{
  using Type = TrajectoryArray_<ContainerAllocator>;

  explicit TrajectoryArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit TrajectoryArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _trajectories_type =
    rosidl_runtime_cpp::BoundedVector<autoware_auto_msgs::msg::Trajectory_<ContainerAllocator>, 100, typename ContainerAllocator::template rebind<autoware_auto_msgs::msg::Trajectory_<ContainerAllocator>>::other>;
  _trajectories_type trajectories;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__trajectories(
    const rosidl_runtime_cpp::BoundedVector<autoware_auto_msgs::msg::Trajectory_<ContainerAllocator>, 100, typename ContainerAllocator::template rebind<autoware_auto_msgs::msg::Trajectory_<ContainerAllocator>>::other> & _arg)
  {
    this->trajectories = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t CAPACITY =
    100u;

  // pointer types
  using RawPtr =
    additional_msgs::msg::TrajectoryArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const additional_msgs::msg::TrajectoryArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<additional_msgs::msg::TrajectoryArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<additional_msgs::msg::TrajectoryArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      additional_msgs::msg::TrajectoryArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<additional_msgs::msg::TrajectoryArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      additional_msgs::msg::TrajectoryArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<additional_msgs::msg::TrajectoryArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<additional_msgs::msg::TrajectoryArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<additional_msgs::msg::TrajectoryArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__additional_msgs__msg__TrajectoryArray
    std::shared_ptr<additional_msgs::msg::TrajectoryArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__additional_msgs__msg__TrajectoryArray
    std::shared_ptr<additional_msgs::msg::TrajectoryArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->trajectories != other.trajectories) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryArray_

// alias to use template instance with default allocator
using TrajectoryArray =
  additional_msgs::msg::TrajectoryArray_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint32_t TrajectoryArray_<ContainerAllocator>::CAPACITY;

}  // namespace msg

}  // namespace additional_msgs

#endif  // ADDITIONAL_MSGS__MSG__DETAIL__TRAJECTORY_ARRAY__STRUCT_HPP_
