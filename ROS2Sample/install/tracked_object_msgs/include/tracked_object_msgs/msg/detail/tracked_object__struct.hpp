// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tracked_object_msgs:msg/TrackedObject.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_OBJECT_MSGS__MSG__DETAIL__TRACKED_OBJECT__STRUCT_HPP_
#define TRACKED_OBJECT_MSGS__MSG__DETAIL__TRACKED_OBJECT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'object_pose_m_quat'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'object_velocity_mps_radps'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'box_dimensions_m'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tracked_object_msgs__msg__TrackedObject __attribute__((deprecated))
#else
# define DEPRECATED__tracked_object_msgs__msg__TrackedObject __declspec(deprecated)
#endif

namespace tracked_object_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackedObject_
{
  using Type = TrackedObject_<ContainerAllocator>;

  explicit TrackedObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    object_pose_m_quat(_init),
    object_velocity_mps_radps(_init),
    box_dimensions_m(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uuid = 0ul;
      this->object_type = 0ul;
      this->base_frame_id = "";
      this->confidence = 0.0f;
      this->metadata = "";
    }
  }

  explicit TrackedObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    object_pose_m_quat(_alloc, _init),
    base_frame_id(_alloc),
    object_velocity_mps_radps(_alloc, _init),
    box_dimensions_m(_alloc, _init),
    metadata(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uuid = 0ul;
      this->object_type = 0ul;
      this->base_frame_id = "";
      this->confidence = 0.0f;
      this->metadata = "";
    }
  }

  // field types and members
  using _uuid_type =
    uint32_t;
  _uuid_type uuid;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _object_type_type =
    uint32_t;
  _object_type_type object_type;
  using _object_pose_m_quat_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _object_pose_m_quat_type object_pose_m_quat;
  using _base_frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _base_frame_id_type base_frame_id;
  using _object_velocity_mps_radps_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _object_velocity_mps_radps_type object_velocity_mps_radps;
  using _box_dimensions_m_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _box_dimensions_m_type box_dimensions_m;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _metadata_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _metadata_type metadata;

  // setters for named parameter idiom
  Type & set__uuid(
    const uint32_t & _arg)
  {
    this->uuid = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__object_type(
    const uint32_t & _arg)
  {
    this->object_type = _arg;
    return *this;
  }
  Type & set__object_pose_m_quat(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->object_pose_m_quat = _arg;
    return *this;
  }
  Type & set__base_frame_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->base_frame_id = _arg;
    return *this;
  }
  Type & set__object_velocity_mps_radps(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->object_velocity_mps_radps = _arg;
    return *this;
  }
  Type & set__box_dimensions_m(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->box_dimensions_m = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__metadata(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->metadata = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tracked_object_msgs::msg::TrackedObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const tracked_object_msgs::msg::TrackedObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tracked_object_msgs::msg::TrackedObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tracked_object_msgs::msg::TrackedObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tracked_object_msgs::msg::TrackedObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tracked_object_msgs::msg::TrackedObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tracked_object_msgs::msg::TrackedObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tracked_object_msgs::msg::TrackedObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tracked_object_msgs::msg::TrackedObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tracked_object_msgs::msg::TrackedObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tracked_object_msgs__msg__TrackedObject
    std::shared_ptr<tracked_object_msgs::msg::TrackedObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tracked_object_msgs__msg__TrackedObject
    std::shared_ptr<tracked_object_msgs::msg::TrackedObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackedObject_ & other) const
  {
    if (this->uuid != other.uuid) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->object_type != other.object_type) {
      return false;
    }
    if (this->object_pose_m_quat != other.object_pose_m_quat) {
      return false;
    }
    if (this->base_frame_id != other.base_frame_id) {
      return false;
    }
    if (this->object_velocity_mps_radps != other.object_velocity_mps_radps) {
      return false;
    }
    if (this->box_dimensions_m != other.box_dimensions_m) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->metadata != other.metadata) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackedObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackedObject_

// alias to use template instance with default allocator
using TrackedObject =
  tracked_object_msgs::msg::TrackedObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tracked_object_msgs

#endif  // TRACKED_OBJECT_MSGS__MSG__DETAIL__TRACKED_OBJECT__STRUCT_HPP_
