// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cognata_sdk_ros2:msg/TrafficLightMsg.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__TRAFFIC_LIGHT_MSG__STRUCT_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__TRAFFIC_LIGHT_MSG__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__cognata_sdk_ros2__msg__TrafficLightMsg __attribute__((deprecated))
#else
# define DEPRECATED__cognata_sdk_ros2__msg__TrafficLightMsg __declspec(deprecated)
#endif

namespace cognata_sdk_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficLightMsg_
{
  using Type = TrafficLightMsg_<ContainerAllocator>;

  explicit TrafficLightMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    description(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
      this->bulb_status = "";
      this->functioning_status = "";
      this->behaviour = "";
      this->traffic_signal_status = "";
      this->azimuth_angle = 0.0f;
      this->facing = 0.0f;
    }
  }

  explicit TrafficLightMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    description(_alloc, _init),
    status(_alloc),
    bulb_status(_alloc),
    functioning_status(_alloc),
    behaviour(_alloc),
    traffic_signal_status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
      this->bulb_status = "";
      this->functioning_status = "";
      this->behaviour = "";
      this->traffic_signal_status = "";
      this->azimuth_angle = 0.0f;
      this->facing = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _description_type =
    cognata_sdk_ros2::msg::ObjectDescription_<ContainerAllocator>;
  _description_type description;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _status_type status;
  using _bulb_status_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _bulb_status_type bulb_status;
  using _functioning_status_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _functioning_status_type functioning_status;
  using _behaviour_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _behaviour_type behaviour;
  using _traffic_signal_status_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _traffic_signal_status_type traffic_signal_status;
  using _azimuth_angle_type =
    float;
  _azimuth_angle_type azimuth_angle;
  using _facing_type =
    float;
  _facing_type facing;

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
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__bulb_status(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->bulb_status = _arg;
    return *this;
  }
  Type & set__functioning_status(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->functioning_status = _arg;
    return *this;
  }
  Type & set__behaviour(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->behaviour = _arg;
    return *this;
  }
  Type & set__traffic_signal_status(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->traffic_signal_status = _arg;
    return *this;
  }
  Type & set__azimuth_angle(
    const float & _arg)
  {
    this->azimuth_angle = _arg;
    return *this;
  }
  Type & set__facing(
    const float & _arg)
  {
    this->facing = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cognata_sdk_ros2::msg::TrafficLightMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const cognata_sdk_ros2::msg::TrafficLightMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cognata_sdk_ros2::msg::TrafficLightMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cognata_sdk_ros2::msg::TrafficLightMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cognata_sdk_ros2::msg::TrafficLightMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cognata_sdk_ros2::msg::TrafficLightMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cognata_sdk_ros2::msg::TrafficLightMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cognata_sdk_ros2::msg::TrafficLightMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cognata_sdk_ros2::msg::TrafficLightMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cognata_sdk_ros2::msg::TrafficLightMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cognata_sdk_ros2__msg__TrafficLightMsg
    std::shared_ptr<cognata_sdk_ros2::msg::TrafficLightMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cognata_sdk_ros2__msg__TrafficLightMsg
    std::shared_ptr<cognata_sdk_ros2::msg::TrafficLightMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficLightMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->bulb_status != other.bulb_status) {
      return false;
    }
    if (this->functioning_status != other.functioning_status) {
      return false;
    }
    if (this->behaviour != other.behaviour) {
      return false;
    }
    if (this->traffic_signal_status != other.traffic_signal_status) {
      return false;
    }
    if (this->azimuth_angle != other.azimuth_angle) {
      return false;
    }
    if (this->facing != other.facing) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficLightMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficLightMsg_

// alias to use template instance with default allocator
using TrafficLightMsg =
  cognata_sdk_ros2::msg::TrafficLightMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cognata_sdk_ros2

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__TRAFFIC_LIGHT_MSG__STRUCT_HPP_
