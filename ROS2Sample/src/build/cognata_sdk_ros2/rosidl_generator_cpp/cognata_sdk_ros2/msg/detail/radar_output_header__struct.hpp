// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cognata_sdk_ros2:msg/RadarOutputHeader.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__RADAR_OUTPUT_HEADER__STRUCT_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__RADAR_OUTPUT_HEADER__STRUCT_HPP_

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
// Member 'radar_placement'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'targets'
#include "cognata_sdk_ros2/msg/detail/radar_output_target__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cognata_sdk_ros2__msg__RadarOutputHeader __attribute__((deprecated))
#else
# define DEPRECATED__cognata_sdk_ros2__msg__RadarOutputHeader __declspec(deprecated)
#endif

namespace cognata_sdk_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarOutputHeader_
{
  using Type = RadarOutputHeader_<ContainerAllocator>;

  explicit RadarOutputHeader_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    radar_placement(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radar_id = "";
      this->h_fov = 0.0f;
      this->v_fov = 0.0f;
    }
  }

  explicit RadarOutputHeader_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    radar_id(_alloc),
    radar_placement(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radar_id = "";
      this->h_fov = 0.0f;
      this->v_fov = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _radar_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _radar_id_type radar_id;
  using _radar_placement_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _radar_placement_type radar_placement;
  using _h_fov_type =
    float;
  _h_fov_type h_fov;
  using _v_fov_type =
    float;
  _v_fov_type v_fov;
  using _targets_type =
    std::vector<cognata_sdk_ros2::msg::RadarOutputTarget_<ContainerAllocator>, typename ContainerAllocator::template rebind<cognata_sdk_ros2::msg::RadarOutputTarget_<ContainerAllocator>>::other>;
  _targets_type targets;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__radar_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->radar_id = _arg;
    return *this;
  }
  Type & set__radar_placement(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->radar_placement = _arg;
    return *this;
  }
  Type & set__h_fov(
    const float & _arg)
  {
    this->h_fov = _arg;
    return *this;
  }
  Type & set__v_fov(
    const float & _arg)
  {
    this->v_fov = _arg;
    return *this;
  }
  Type & set__targets(
    const std::vector<cognata_sdk_ros2::msg::RadarOutputTarget_<ContainerAllocator>, typename ContainerAllocator::template rebind<cognata_sdk_ros2::msg::RadarOutputTarget_<ContainerAllocator>>::other> & _arg)
  {
    this->targets = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cognata_sdk_ros2::msg::RadarOutputHeader_<ContainerAllocator> *;
  using ConstRawPtr =
    const cognata_sdk_ros2::msg::RadarOutputHeader_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cognata_sdk_ros2::msg::RadarOutputHeader_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cognata_sdk_ros2::msg::RadarOutputHeader_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cognata_sdk_ros2::msg::RadarOutputHeader_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cognata_sdk_ros2::msg::RadarOutputHeader_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cognata_sdk_ros2::msg::RadarOutputHeader_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cognata_sdk_ros2::msg::RadarOutputHeader_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cognata_sdk_ros2::msg::RadarOutputHeader_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cognata_sdk_ros2::msg::RadarOutputHeader_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cognata_sdk_ros2__msg__RadarOutputHeader
    std::shared_ptr<cognata_sdk_ros2::msg::RadarOutputHeader_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cognata_sdk_ros2__msg__RadarOutputHeader
    std::shared_ptr<cognata_sdk_ros2::msg::RadarOutputHeader_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarOutputHeader_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->radar_id != other.radar_id) {
      return false;
    }
    if (this->radar_placement != other.radar_placement) {
      return false;
    }
    if (this->h_fov != other.h_fov) {
      return false;
    }
    if (this->v_fov != other.v_fov) {
      return false;
    }
    if (this->targets != other.targets) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarOutputHeader_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarOutputHeader_

// alias to use template instance with default allocator
using RadarOutputHeader =
  cognata_sdk_ros2::msg::RadarOutputHeader_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cognata_sdk_ros2

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__RADAR_OUTPUT_HEADER__STRUCT_HPP_
