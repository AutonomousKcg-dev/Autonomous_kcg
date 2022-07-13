// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_g29_force_feedback:msg/ForceFeedback.idl
// generated code does not contain a copyright notice

#ifndef ROS_G29_FORCE_FEEDBACK__MSG__DETAIL__FORCE_FEEDBACK__STRUCT_HPP_
#define ROS_G29_FORCE_FEEDBACK__MSG__DETAIL__FORCE_FEEDBACK__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__ros_g29_force_feedback__msg__ForceFeedback __attribute__((deprecated))
#else
# define DEPRECATED__ros_g29_force_feedback__msg__ForceFeedback __declspec(deprecated)
#endif

namespace ros_g29_force_feedback
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ForceFeedback_
{
  using Type = ForceFeedback_<ContainerAllocator>;

  explicit ForceFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0.0f;
      this->torque = 0.0f;
    }
  }

  explicit ForceFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0.0f;
      this->torque = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _position_type =
    float;
  _position_type position;
  using _torque_type =
    float;
  _torque_type torque;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__position(
    const float & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__torque(
    const float & _arg)
  {
    this->torque = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_g29_force_feedback::msg::ForceFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_g29_force_feedback::msg::ForceFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_g29_force_feedback::msg::ForceFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_g29_force_feedback::msg::ForceFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_g29_force_feedback::msg::ForceFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_g29_force_feedback::msg::ForceFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_g29_force_feedback::msg::ForceFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_g29_force_feedback::msg::ForceFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_g29_force_feedback::msg::ForceFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_g29_force_feedback::msg::ForceFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_g29_force_feedback__msg__ForceFeedback
    std::shared_ptr<ros_g29_force_feedback::msg::ForceFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_g29_force_feedback__msg__ForceFeedback
    std::shared_ptr<ros_g29_force_feedback::msg::ForceFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ForceFeedback_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->torque != other.torque) {
      return false;
    }
    return true;
  }
  bool operator!=(const ForceFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ForceFeedback_

// alias to use template instance with default allocator
using ForceFeedback =
  ros_g29_force_feedback::msg::ForceFeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_g29_force_feedback

#endif  // ROS_G29_FORCE_FEEDBACK__MSG__DETAIL__FORCE_FEEDBACK__STRUCT_HPP_
