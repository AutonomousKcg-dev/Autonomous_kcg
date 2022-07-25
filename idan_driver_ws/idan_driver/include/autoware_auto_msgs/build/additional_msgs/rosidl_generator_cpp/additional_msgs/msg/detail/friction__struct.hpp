// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from additional_msgs:msg/Friction.idl
// generated code does not contain a copyright notice

#ifndef ADDITIONAL_MSGS__MSG__DETAIL__FRICTION__STRUCT_HPP_
#define ADDITIONAL_MSGS__MSG__DETAIL__FRICTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__additional_msgs__msg__Friction __attribute__((deprecated))
#else
# define DEPRECATED__additional_msgs__msg__Friction __declspec(deprecated)
#endif

namespace additional_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Friction_
{
  using Type = Friction_<ContainerAllocator>;

  explicit Friction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->value = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->value = 0.0f;
    }
  }

  explicit Friction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->value = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->value = 0.0f;
    }
  }

  // field types and members
  using _value_type =
    float;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const float & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    additional_msgs::msg::Friction_<ContainerAllocator> *;
  using ConstRawPtr =
    const additional_msgs::msg::Friction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<additional_msgs::msg::Friction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<additional_msgs::msg::Friction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      additional_msgs::msg::Friction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<additional_msgs::msg::Friction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      additional_msgs::msg::Friction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<additional_msgs::msg::Friction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<additional_msgs::msg::Friction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<additional_msgs::msg::Friction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__additional_msgs__msg__Friction
    std::shared_ptr<additional_msgs::msg::Friction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__additional_msgs__msg__Friction
    std::shared_ptr<additional_msgs::msg::Friction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Friction_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const Friction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Friction_

// alias to use template instance with default allocator
using Friction =
  additional_msgs::msg::Friction_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace additional_msgs

#endif  // ADDITIONAL_MSGS__MSG__DETAIL__FRICTION__STRUCT_HPP_
