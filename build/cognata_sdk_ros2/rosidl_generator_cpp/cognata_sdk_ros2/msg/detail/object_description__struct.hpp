// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cognata_sdk_ros2:msg/ObjectDescription.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__OBJECT_DESCRIPTION__STRUCT_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__OBJECT_DESCRIPTION__STRUCT_HPP_

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
// Member 'motion'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'bounding_box'
#include "cognata_sdk_ros2/msg/detail/bounding_box_msg__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cognata_sdk_ros2__msg__ObjectDescription __attribute__((deprecated))
#else
# define DEPRECATED__cognata_sdk_ros2__msg__ObjectDescription __declspec(deprecated)
#endif

namespace cognata_sdk_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectDescription_
{
  using Type = ObjectDescription_<ContainerAllocator>;

  explicit ObjectDescription_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    motion(_init),
    bounding_box(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = "";
      this->roi_type = "";
      this->roi_subtype = "";
    }
  }

  explicit ObjectDescription_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    object_id(_alloc),
    roi_type(_alloc),
    roi_subtype(_alloc),
    motion(_alloc, _init),
    bounding_box(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = "";
      this->roi_type = "";
      this->roi_subtype = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _object_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _object_id_type object_id;
  using _roi_type_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _roi_type_type roi_type;
  using _roi_subtype_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _roi_subtype_type roi_subtype;
  using _motion_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _motion_type motion;
  using _bounding_box_type =
    cognata_sdk_ros2::msg::BoundingBoxMsg_<ContainerAllocator>;
  _bounding_box_type bounding_box;
  using _sensor_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _sensor_ids_type sensor_ids;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__object_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->object_id = _arg;
    return *this;
  }
  Type & set__roi_type(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->roi_type = _arg;
    return *this;
  }
  Type & set__roi_subtype(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->roi_subtype = _arg;
    return *this;
  }
  Type & set__motion(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->motion = _arg;
    return *this;
  }
  Type & set__bounding_box(
    const cognata_sdk_ros2::msg::BoundingBoxMsg_<ContainerAllocator> & _arg)
  {
    this->bounding_box = _arg;
    return *this;
  }
  Type & set__sensor_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->sensor_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cognata_sdk_ros2::msg::ObjectDescription_<ContainerAllocator> *;
  using ConstRawPtr =
    const cognata_sdk_ros2::msg::ObjectDescription_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cognata_sdk_ros2::msg::ObjectDescription_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cognata_sdk_ros2::msg::ObjectDescription_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cognata_sdk_ros2::msg::ObjectDescription_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cognata_sdk_ros2::msg::ObjectDescription_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cognata_sdk_ros2::msg::ObjectDescription_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cognata_sdk_ros2::msg::ObjectDescription_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cognata_sdk_ros2::msg::ObjectDescription_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cognata_sdk_ros2::msg::ObjectDescription_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cognata_sdk_ros2__msg__ObjectDescription
    std::shared_ptr<cognata_sdk_ros2::msg::ObjectDescription_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cognata_sdk_ros2__msg__ObjectDescription
    std::shared_ptr<cognata_sdk_ros2::msg::ObjectDescription_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectDescription_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->object_id != other.object_id) {
      return false;
    }
    if (this->roi_type != other.roi_type) {
      return false;
    }
    if (this->roi_subtype != other.roi_subtype) {
      return false;
    }
    if (this->motion != other.motion) {
      return false;
    }
    if (this->bounding_box != other.bounding_box) {
      return false;
    }
    if (this->sensor_ids != other.sensor_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectDescription_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectDescription_

// alias to use template instance with default allocator
using ObjectDescription =
  cognata_sdk_ros2::msg::ObjectDescription_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cognata_sdk_ros2

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__OBJECT_DESCRIPTION__STRUCT_HPP_
