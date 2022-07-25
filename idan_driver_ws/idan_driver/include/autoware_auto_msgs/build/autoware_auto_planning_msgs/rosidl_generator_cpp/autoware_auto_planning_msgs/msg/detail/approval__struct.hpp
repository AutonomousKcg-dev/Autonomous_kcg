// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_planning_msgs:msg/Approval.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__APPROVAL__STRUCT_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__APPROVAL__STRUCT_HPP_

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
# define DEPRECATED__autoware_auto_planning_msgs__msg__Approval __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__msg__Approval __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Approval_
{
  using Type = Approval_<ContainerAllocator>;

  explicit Approval_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->approval = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->approval = false;
    }
  }

  explicit Approval_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->approval = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->approval = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _approval_type =
    bool;
  _approval_type approval;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__approval(
    const bool & _arg)
  {
    this->approval = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::msg::Approval_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::msg::Approval_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::msg::Approval_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::msg::Approval_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::msg::Approval_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::msg::Approval_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::msg::Approval_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::msg::Approval_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::msg::Approval_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::msg::Approval_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__msg__Approval
    std::shared_ptr<autoware_auto_planning_msgs::msg::Approval_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__msg__Approval
    std::shared_ptr<autoware_auto_planning_msgs::msg::Approval_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Approval_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->approval != other.approval) {
      return false;
    }
    return true;
  }
  bool operator!=(const Approval_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Approval_

// alias to use template instance with default allocator
using Approval =
  autoware_auto_planning_msgs::msg::Approval_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_planning_msgs

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__APPROVAL__STRUCT_HPP_
