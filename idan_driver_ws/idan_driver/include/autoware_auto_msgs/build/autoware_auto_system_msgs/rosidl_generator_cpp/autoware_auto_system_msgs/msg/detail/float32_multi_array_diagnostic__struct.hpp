// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_system_msgs:msg/Float32MultiArrayDiagnostic.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__FLOAT32_MULTI_ARRAY_DIAGNOSTIC__STRUCT_HPP_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__FLOAT32_MULTI_ARRAY_DIAGNOSTIC__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'diag_header'
#include "autoware_auto_system_msgs/msg/detail/diagnostic_header__struct.hpp"
// Member 'diag_array'
#include "std_msgs/msg/detail/float32_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic __declspec(deprecated)
#endif

namespace autoware_auto_system_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Float32MultiArrayDiagnostic_
{
  using Type = Float32MultiArrayDiagnostic_<ContainerAllocator>;

  explicit Float32MultiArrayDiagnostic_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : diag_header(_init),
    diag_array(_init)
  {
    (void)_init;
  }

  explicit Float32MultiArrayDiagnostic_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : diag_header(_alloc, _init),
    diag_array(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _diag_header_type =
    autoware_auto_system_msgs::msg::DiagnosticHeader_<ContainerAllocator>;
  _diag_header_type diag_header;
  using _diag_array_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _diag_array_type diag_array;

  // setters for named parameter idiom
  Type & set__diag_header(
    const autoware_auto_system_msgs::msg::DiagnosticHeader_<ContainerAllocator> & _arg)
  {
    this->diag_header = _arg;
    return *this;
  }
  Type & set__diag_array(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->diag_array = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic
    std::shared_ptr<autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic
    std::shared_ptr<autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Float32MultiArrayDiagnostic_ & other) const
  {
    if (this->diag_header != other.diag_header) {
      return false;
    }
    if (this->diag_array != other.diag_array) {
      return false;
    }
    return true;
  }
  bool operator!=(const Float32MultiArrayDiagnostic_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Float32MultiArrayDiagnostic_

// alias to use template instance with default allocator
using Float32MultiArrayDiagnostic =
  autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_system_msgs

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__FLOAT32_MULTI_ARRAY_DIAGNOSTIC__STRUCT_HPP_
