// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_planning_msgs:msg/PathChangeModuleId.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ID__STRUCT_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ID__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__autoware_auto_planning_msgs__msg__PathChangeModuleId __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__msg__PathChangeModuleId __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathChangeModuleId_
{
  using Type = PathChangeModuleId_<ContainerAllocator>;

  explicit PathChangeModuleId_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->type = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->type = 0;
    }
  }

  explicit PathChangeModuleId_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->type = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->type = 0;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t AVOIDANCE =
    1u;
  static constexpr uint8_t LANE_CHANGE =
    2u;
  static constexpr uint8_t FORCE_LANE_CHANGE =
    3u;
  static constexpr uint8_t PULL_OVER =
    4u;
  static constexpr uint8_t PULL_OUT =
    5u;

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::msg::PathChangeModuleId_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::msg::PathChangeModuleId_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::msg::PathChangeModuleId_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::msg::PathChangeModuleId_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::msg::PathChangeModuleId_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::msg::PathChangeModuleId_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::msg::PathChangeModuleId_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::msg::PathChangeModuleId_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::msg::PathChangeModuleId_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::msg::PathChangeModuleId_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__msg__PathChangeModuleId
    std::shared_ptr<autoware_auto_planning_msgs::msg::PathChangeModuleId_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__msg__PathChangeModuleId
    std::shared_ptr<autoware_auto_planning_msgs::msg::PathChangeModuleId_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathChangeModuleId_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathChangeModuleId_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathChangeModuleId_

// alias to use template instance with default allocator
using PathChangeModuleId =
  autoware_auto_planning_msgs::msg::PathChangeModuleId_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t PathChangeModuleId_<ContainerAllocator>::NONE;
template<typename ContainerAllocator>
constexpr uint8_t PathChangeModuleId_<ContainerAllocator>::AVOIDANCE;
template<typename ContainerAllocator>
constexpr uint8_t PathChangeModuleId_<ContainerAllocator>::LANE_CHANGE;
template<typename ContainerAllocator>
constexpr uint8_t PathChangeModuleId_<ContainerAllocator>::FORCE_LANE_CHANGE;
template<typename ContainerAllocator>
constexpr uint8_t PathChangeModuleId_<ContainerAllocator>::PULL_OVER;
template<typename ContainerAllocator>
constexpr uint8_t PathChangeModuleId_<ContainerAllocator>::PULL_OUT;

}  // namespace msg

}  // namespace autoware_auto_planning_msgs

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ID__STRUCT_HPP_
