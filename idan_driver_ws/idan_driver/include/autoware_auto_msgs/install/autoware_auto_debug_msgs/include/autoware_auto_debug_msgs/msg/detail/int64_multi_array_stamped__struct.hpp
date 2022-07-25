// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_debug_msgs:msg/Int64MultiArrayStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__INT64_MULTI_ARRAY_STAMPED__STRUCT_HPP_
#define AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__INT64_MULTI_ARRAY_STAMPED__STRUCT_HPP_

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
// Member 'layout'
#include "autoware_auto_debug_msgs/msg/detail/multi_array_layout__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_debug_msgs__msg__Int64MultiArrayStamped __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_debug_msgs__msg__Int64MultiArrayStamped __declspec(deprecated)
#endif

namespace autoware_auto_debug_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Int64MultiArrayStamped_
{
  using Type = Int64MultiArrayStamped_<ContainerAllocator>;

  explicit Int64MultiArrayStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    layout(_init)
  {
    (void)_init;
  }

  explicit Int64MultiArrayStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    layout(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _layout_type =
    autoware_auto_debug_msgs::msg::MultiArrayLayout_<ContainerAllocator>;
  _layout_type layout;
  using _data_type =
    std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__layout(
    const autoware_auto_debug_msgs::msg::MultiArrayLayout_<ContainerAllocator> & _arg)
  {
    this->layout = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_debug_msgs::msg::Int64MultiArrayStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_debug_msgs::msg::Int64MultiArrayStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_debug_msgs::msg::Int64MultiArrayStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_debug_msgs::msg::Int64MultiArrayStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_debug_msgs::msg::Int64MultiArrayStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_debug_msgs::msg::Int64MultiArrayStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_debug_msgs::msg::Int64MultiArrayStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_debug_msgs::msg::Int64MultiArrayStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_debug_msgs::msg::Int64MultiArrayStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_debug_msgs::msg::Int64MultiArrayStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_debug_msgs__msg__Int64MultiArrayStamped
    std::shared_ptr<autoware_auto_debug_msgs::msg::Int64MultiArrayStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_debug_msgs__msg__Int64MultiArrayStamped
    std::shared_ptr<autoware_auto_debug_msgs::msg::Int64MultiArrayStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Int64MultiArrayStamped_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->layout != other.layout) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Int64MultiArrayStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Int64MultiArrayStamped_

// alias to use template instance with default allocator
using Int64MultiArrayStamped =
  autoware_auto_debug_msgs::msg::Int64MultiArrayStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_debug_msgs

#endif  // AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__INT64_MULTI_ARRAY_STAMPED__STRUCT_HPP_
