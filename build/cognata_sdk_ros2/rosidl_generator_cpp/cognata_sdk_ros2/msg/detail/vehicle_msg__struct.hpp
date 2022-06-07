// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cognata_sdk_ros2:msg/VehicleMsg.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__VEHICLE_MSG__STRUCT_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__VEHICLE_MSG__STRUCT_HPP_

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
// Member 'wheels'
#include "cognata_sdk_ros2/msg/detail/wheel_msg__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cognata_sdk_ros2__msg__VehicleMsg __attribute__((deprecated))
#else
# define DEPRECATED__cognata_sdk_ros2__msg__VehicleMsg __declspec(deprecated)
#endif

namespace cognata_sdk_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleMsg_
{
  using Type = VehicleMsg_<ContainerAllocator>;

  explicit VehicleMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    description(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_type = "";
      this->vehicle_role = "";
      this->navigation_segment = "";
      this->lane_id = "";
      this->lanes_from_left = "";
      this->head_light_state = false;
      this->brake_light_state = false;
      this->reverse_light_state = false;
      this->signal_state = "";
      this->signal_light = "";
    }
  }

  explicit VehicleMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    description(_alloc, _init),
    vehicle_type(_alloc),
    vehicle_role(_alloc),
    navigation_segment(_alloc),
    lane_id(_alloc),
    lanes_from_left(_alloc),
    signal_state(_alloc),
    signal_light(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_type = "";
      this->vehicle_role = "";
      this->navigation_segment = "";
      this->lane_id = "";
      this->lanes_from_left = "";
      this->head_light_state = false;
      this->brake_light_state = false;
      this->reverse_light_state = false;
      this->signal_state = "";
      this->signal_light = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _description_type =
    cognata_sdk_ros2::msg::ObjectDescription_<ContainerAllocator>;
  _description_type description;
  using _vehicle_type_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _vehicle_type_type vehicle_type;
  using _vehicle_role_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _vehicle_role_type vehicle_role;
  using _navigation_segment_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _navigation_segment_type navigation_segment;
  using _lane_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _lane_id_type lane_id;
  using _lanes_from_left_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _lanes_from_left_type lanes_from_left;
  using _head_light_state_type =
    bool;
  _head_light_state_type head_light_state;
  using _brake_light_state_type =
    bool;
  _brake_light_state_type brake_light_state;
  using _reverse_light_state_type =
    bool;
  _reverse_light_state_type reverse_light_state;
  using _signal_state_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _signal_state_type signal_state;
  using _signal_light_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _signal_light_type signal_light;
  using _wheels_type =
    std::vector<cognata_sdk_ros2::msg::WheelMsg_<ContainerAllocator>, typename ContainerAllocator::template rebind<cognata_sdk_ros2::msg::WheelMsg_<ContainerAllocator>>::other>;
  _wheels_type wheels;

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
  Type & set__vehicle_type(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->vehicle_type = _arg;
    return *this;
  }
  Type & set__vehicle_role(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->vehicle_role = _arg;
    return *this;
  }
  Type & set__navigation_segment(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->navigation_segment = _arg;
    return *this;
  }
  Type & set__lane_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->lane_id = _arg;
    return *this;
  }
  Type & set__lanes_from_left(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->lanes_from_left = _arg;
    return *this;
  }
  Type & set__head_light_state(
    const bool & _arg)
  {
    this->head_light_state = _arg;
    return *this;
  }
  Type & set__brake_light_state(
    const bool & _arg)
  {
    this->brake_light_state = _arg;
    return *this;
  }
  Type & set__reverse_light_state(
    const bool & _arg)
  {
    this->reverse_light_state = _arg;
    return *this;
  }
  Type & set__signal_state(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->signal_state = _arg;
    return *this;
  }
  Type & set__signal_light(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->signal_light = _arg;
    return *this;
  }
  Type & set__wheels(
    const std::vector<cognata_sdk_ros2::msg::WheelMsg_<ContainerAllocator>, typename ContainerAllocator::template rebind<cognata_sdk_ros2::msg::WheelMsg_<ContainerAllocator>>::other> & _arg)
  {
    this->wheels = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cognata_sdk_ros2::msg::VehicleMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const cognata_sdk_ros2::msg::VehicleMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cognata_sdk_ros2::msg::VehicleMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cognata_sdk_ros2::msg::VehicleMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cognata_sdk_ros2::msg::VehicleMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cognata_sdk_ros2::msg::VehicleMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cognata_sdk_ros2::msg::VehicleMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cognata_sdk_ros2::msg::VehicleMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cognata_sdk_ros2::msg::VehicleMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cognata_sdk_ros2::msg::VehicleMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cognata_sdk_ros2__msg__VehicleMsg
    std::shared_ptr<cognata_sdk_ros2::msg::VehicleMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cognata_sdk_ros2__msg__VehicleMsg
    std::shared_ptr<cognata_sdk_ros2::msg::VehicleMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->vehicle_type != other.vehicle_type) {
      return false;
    }
    if (this->vehicle_role != other.vehicle_role) {
      return false;
    }
    if (this->navigation_segment != other.navigation_segment) {
      return false;
    }
    if (this->lane_id != other.lane_id) {
      return false;
    }
    if (this->lanes_from_left != other.lanes_from_left) {
      return false;
    }
    if (this->head_light_state != other.head_light_state) {
      return false;
    }
    if (this->brake_light_state != other.brake_light_state) {
      return false;
    }
    if (this->reverse_light_state != other.reverse_light_state) {
      return false;
    }
    if (this->signal_state != other.signal_state) {
      return false;
    }
    if (this->signal_light != other.signal_light) {
      return false;
    }
    if (this->wheels != other.wheels) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleMsg_

// alias to use template instance with default allocator
using VehicleMsg =
  cognata_sdk_ros2::msg::VehicleMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cognata_sdk_ros2

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__VEHICLE_MSG__STRUCT_HPP_
