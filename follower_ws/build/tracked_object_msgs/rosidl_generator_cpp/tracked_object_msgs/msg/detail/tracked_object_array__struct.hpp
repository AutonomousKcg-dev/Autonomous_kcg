// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tracked_object_msgs:msg/TrackedObjectArray.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_OBJECT_MSGS__MSG__DETAIL__TRACKED_OBJECT_ARRAY__STRUCT_HPP_
#define TRACKED_OBJECT_MSGS__MSG__DETAIL__TRACKED_OBJECT_ARRAY__STRUCT_HPP_

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
// Member 'tracked_objects'
#include "tracked_object_msgs/msg/detail/tracked_object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tracked_object_msgs__msg__TrackedObjectArray __attribute__((deprecated))
#else
# define DEPRECATED__tracked_object_msgs__msg__TrackedObjectArray __declspec(deprecated)
#endif

namespace tracked_object_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackedObjectArray_
{
  using Type = TrackedObjectArray_<ContainerAllocator>;

  explicit TrackedObjectArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit TrackedObjectArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tracked_objects_type =
    std::vector<tracked_object_msgs::msg::TrackedObject_<ContainerAllocator>, typename ContainerAllocator::template rebind<tracked_object_msgs::msg::TrackedObject_<ContainerAllocator>>::other>;
  _tracked_objects_type tracked_objects;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tracked_objects(
    const std::vector<tracked_object_msgs::msg::TrackedObject_<ContainerAllocator>, typename ContainerAllocator::template rebind<tracked_object_msgs::msg::TrackedObject_<ContainerAllocator>>::other> & _arg)
  {
    this->tracked_objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tracked_object_msgs::msg::TrackedObjectArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const tracked_object_msgs::msg::TrackedObjectArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tracked_object_msgs::msg::TrackedObjectArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tracked_object_msgs::msg::TrackedObjectArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tracked_object_msgs::msg::TrackedObjectArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tracked_object_msgs::msg::TrackedObjectArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tracked_object_msgs::msg::TrackedObjectArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tracked_object_msgs::msg::TrackedObjectArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tracked_object_msgs::msg::TrackedObjectArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tracked_object_msgs::msg::TrackedObjectArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tracked_object_msgs__msg__TrackedObjectArray
    std::shared_ptr<tracked_object_msgs::msg::TrackedObjectArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tracked_object_msgs__msg__TrackedObjectArray
    std::shared_ptr<tracked_object_msgs::msg::TrackedObjectArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackedObjectArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tracked_objects != other.tracked_objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackedObjectArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackedObjectArray_

// alias to use template instance with default allocator
using TrackedObjectArray =
  tracked_object_msgs::msg::TrackedObjectArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tracked_object_msgs

#endif  // TRACKED_OBJECT_MSGS__MSG__DETAIL__TRACKED_OBJECT_ARRAY__STRUCT_HPP_
