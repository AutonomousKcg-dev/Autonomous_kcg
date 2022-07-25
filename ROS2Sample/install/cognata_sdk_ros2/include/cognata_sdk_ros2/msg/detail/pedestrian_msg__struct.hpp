// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cognata_sdk_ros2:msg/PedestrianMsg.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__PEDESTRIAN_MSG__STRUCT_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__PEDESTRIAN_MSG__STRUCT_HPP_

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
// Member 'description'
#include "cognata_sdk_ros2/msg/detail/object_description__struct.hpp"
// Member 'pedestrian_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cognata_sdk_ros2__msg__PedestrianMsg __attribute__((deprecated))
#else
# define DEPRECATED__cognata_sdk_ros2__msg__PedestrianMsg __declspec(deprecated)
#endif

namespace cognata_sdk_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PedestrianMsg_
{
  using Type = PedestrianMsg_<ContainerAllocator>;

  explicit PedestrianMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    description(_init),
    pedestrian_velocity(_init)
  {
    (void)_init;
  }

  explicit PedestrianMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    description(_alloc, _init),
    pedestrian_velocity(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _description_type =
    cognata_sdk_ros2::msg::ObjectDescription_<ContainerAllocator>;
  _description_type description;
  using _pedestrian_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _pedestrian_velocity_type pedestrian_velocity;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__description(
    const cognata_sdk_ros2::msg::ObjectDescription_<ContainerAllocator> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__pedestrian_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->pedestrian_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cognata_sdk_ros2::msg::PedestrianMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const cognata_sdk_ros2::msg::PedestrianMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cognata_sdk_ros2::msg::PedestrianMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cognata_sdk_ros2::msg::PedestrianMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cognata_sdk_ros2::msg::PedestrianMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cognata_sdk_ros2::msg::PedestrianMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cognata_sdk_ros2::msg::PedestrianMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cognata_sdk_ros2::msg::PedestrianMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cognata_sdk_ros2::msg::PedestrianMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cognata_sdk_ros2::msg::PedestrianMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cognata_sdk_ros2__msg__PedestrianMsg
    std::shared_ptr<cognata_sdk_ros2::msg::PedestrianMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cognata_sdk_ros2__msg__PedestrianMsg
    std::shared_ptr<cognata_sdk_ros2::msg::PedestrianMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PedestrianMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->pedestrian_velocity != other.pedestrian_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const PedestrianMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PedestrianMsg_

// alias to use template instance with default allocator
using PedestrianMsg =
  cognata_sdk_ros2::msg::PedestrianMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cognata_sdk_ros2

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__PEDESTRIAN_MSG__STRUCT_HPP_
