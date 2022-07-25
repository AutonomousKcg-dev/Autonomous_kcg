// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_planning_msgs:msg/LateralOffset.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__LATERAL_OFFSET__STRUCT_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__LATERAL_OFFSET__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_planning_msgs__msg__LateralOffset __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__msg__LateralOffset __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LateralOffset_
{
  using Type = LateralOffset_<ContainerAllocator>;

  explicit LateralOffset_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->lateral_offset = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->lateral_offset = 0.0f;
    }
  }

  explicit LateralOffset_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->lateral_offset = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->lateral_offset = 0.0f;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _lateral_offset_type =
    float;
  _lateral_offset_type lateral_offset;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__lateral_offset(
    const float & _arg)
  {
    this->lateral_offset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::msg::LateralOffset_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::msg::LateralOffset_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::msg::LateralOffset_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::msg::LateralOffset_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::msg::LateralOffset_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::msg::LateralOffset_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::msg::LateralOffset_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::msg::LateralOffset_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::msg::LateralOffset_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::msg::LateralOffset_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__msg__LateralOffset
    std::shared_ptr<autoware_auto_planning_msgs::msg::LateralOffset_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__msg__LateralOffset
    std::shared_ptr<autoware_auto_planning_msgs::msg::LateralOffset_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LateralOffset_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->lateral_offset != other.lateral_offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const LateralOffset_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LateralOffset_

// alias to use template instance with default allocator
using LateralOffset =
  autoware_auto_planning_msgs::msg::LateralOffset_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_planning_msgs

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__LATERAL_OFFSET__STRUCT_HPP_
