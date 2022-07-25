// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_planning_msgs:msg/PathChangeModuleArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ARRAY__STRUCT_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ARRAY__STRUCT_HPP_

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
// Member 'modules'
#include "autoware_auto_planning_msgs/msg/detail/path_change_module_id__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_planning_msgs__msg__PathChangeModuleArray __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__msg__PathChangeModuleArray __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathChangeModuleArray_
{
  using Type = PathChangeModuleArray_<ContainerAllocator>;

  explicit PathChangeModuleArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit PathChangeModuleArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _modules_type =
    std::vector<autoware_auto_planning_msgs::msg::PathChangeModuleId_<ContainerAllocator>, typename ContainerAllocator::template rebind<autoware_auto_planning_msgs::msg::PathChangeModuleId_<ContainerAllocator>>::other>;
  _modules_type modules;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__modules(
    const std::vector<autoware_auto_planning_msgs::msg::PathChangeModuleId_<ContainerAllocator>, typename ContainerAllocator::template rebind<autoware_auto_planning_msgs::msg::PathChangeModuleId_<ContainerAllocator>>::other> & _arg)
  {
    this->modules = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::msg::PathChangeModuleArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::msg::PathChangeModuleArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::msg::PathChangeModuleArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::msg::PathChangeModuleArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::msg::PathChangeModuleArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::msg::PathChangeModuleArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::msg::PathChangeModuleArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::msg::PathChangeModuleArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::msg::PathChangeModuleArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::msg::PathChangeModuleArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__msg__PathChangeModuleArray
    std::shared_ptr<autoware_auto_planning_msgs::msg::PathChangeModuleArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__msg__PathChangeModuleArray
    std::shared_ptr<autoware_auto_planning_msgs::msg::PathChangeModuleArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathChangeModuleArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->modules != other.modules) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathChangeModuleArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathChangeModuleArray_

// alias to use template instance with default allocator
using PathChangeModuleArray =
  autoware_auto_planning_msgs::msg::PathChangeModuleArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_planning_msgs

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ARRAY__STRUCT_HPP_
