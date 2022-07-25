// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_debug_msgs:msg/Int64Stamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__INT64_STAMPED__STRUCT_HPP_
#define AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__INT64_STAMPED__STRUCT_HPP_

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
# define DEPRECATED__autoware_auto_debug_msgs__msg__Int64Stamped __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_debug_msgs__msg__Int64Stamped __declspec(deprecated)
#endif

namespace autoware_auto_debug_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Int64Stamped_
{
  using Type = Int64Stamped_<ContainerAllocator>;

  explicit Int64Stamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0ll;
    }
  }

  explicit Int64Stamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0ll;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _data_type =
    int64_t;
  _data_type data;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__data(
    const int64_t & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_debug_msgs::msg::Int64Stamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_debug_msgs::msg::Int64Stamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_debug_msgs::msg::Int64Stamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_debug_msgs::msg::Int64Stamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_debug_msgs::msg::Int64Stamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_debug_msgs::msg::Int64Stamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_debug_msgs::msg::Int64Stamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_debug_msgs::msg::Int64Stamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_debug_msgs::msg::Int64Stamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_debug_msgs::msg::Int64Stamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_debug_msgs__msg__Int64Stamped
    std::shared_ptr<autoware_auto_debug_msgs::msg::Int64Stamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_debug_msgs__msg__Int64Stamped
    std::shared_ptr<autoware_auto_debug_msgs::msg::Int64Stamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Int64Stamped_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Int64Stamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Int64Stamped_

// alias to use template instance with default allocator
using Int64Stamped =
  autoware_auto_debug_msgs::msg::Int64Stamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_debug_msgs

#endif  // AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__INT64_STAMPED__STRUCT_HPP_
