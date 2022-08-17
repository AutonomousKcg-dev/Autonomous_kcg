// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from additional_msgs:msg/CanPacket.idl
// generated code does not contain a copyright notice

#ifndef ADDITIONAL_MSGS__MSG__DETAIL__CAN_PACKET__STRUCT_HPP_
#define ADDITIONAL_MSGS__MSG__DETAIL__CAN_PACKET__STRUCT_HPP_

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
# define DEPRECATED__additional_msgs__msg__CanPacket __attribute__((deprecated))
#else
# define DEPRECATED__additional_msgs__msg__CanPacket __declspec(deprecated)
#endif

namespace additional_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CanPacket_
{
  using Type = CanPacket_<ContainerAllocator>;

  explicit CanPacket_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->count = 0ul;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->count = 0ul;
      this->id = 0ul;
      this->len = 0;
      std::fill<typename std::array<uint8_t, 8>::iterator, uint8_t>(this->dat.begin(), this->dat.end(), 0);
      this->flag = 0;
      this->time = 0ul;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->len = 0;
      std::fill<typename std::array<uint8_t, 8>::iterator, uint8_t>(this->dat.begin(), this->dat.end(), 0);
      this->flag = 0;
      this->time = 0ul;
    }
  }

  explicit CanPacket_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    dat(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->count = 0ul;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->count = 0ul;
      this->id = 0ul;
      this->len = 0;
      std::fill<typename std::array<uint8_t, 8>::iterator, uint8_t>(this->dat.begin(), this->dat.end(), 0);
      this->flag = 0;
      this->time = 0ul;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->len = 0;
      std::fill<typename std::array<uint8_t, 8>::iterator, uint8_t>(this->dat.begin(), this->dat.end(), 0);
      this->flag = 0;
      this->time = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _count_type =
    uint32_t;
  _count_type count;
  using _id_type =
    uint32_t;
  _id_type id;
  using _len_type =
    uint8_t;
  _len_type len;
  using _dat_type =
    std::array<uint8_t, 8>;
  _dat_type dat;
  using _flag_type =
    uint16_t;
  _flag_type flag;
  using _time_type =
    uint32_t;
  _time_type time;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__count(
    const uint32_t & _arg)
  {
    this->count = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__len(
    const uint8_t & _arg)
  {
    this->len = _arg;
    return *this;
  }
  Type & set__dat(
    const std::array<uint8_t, 8> & _arg)
  {
    this->dat = _arg;
    return *this;
  }
  Type & set__flag(
    const uint16_t & _arg)
  {
    this->flag = _arg;
    return *this;
  }
  Type & set__time(
    const uint32_t & _arg)
  {
    this->time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    additional_msgs::msg::CanPacket_<ContainerAllocator> *;
  using ConstRawPtr =
    const additional_msgs::msg::CanPacket_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<additional_msgs::msg::CanPacket_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<additional_msgs::msg::CanPacket_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      additional_msgs::msg::CanPacket_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<additional_msgs::msg::CanPacket_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      additional_msgs::msg::CanPacket_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<additional_msgs::msg::CanPacket_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<additional_msgs::msg::CanPacket_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<additional_msgs::msg::CanPacket_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__additional_msgs__msg__CanPacket
    std::shared_ptr<additional_msgs::msg::CanPacket_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__additional_msgs__msg__CanPacket
    std::shared_ptr<additional_msgs::msg::CanPacket_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CanPacket_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->len != other.len) {
      return false;
    }
    if (this->dat != other.dat) {
      return false;
    }
    if (this->flag != other.flag) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    return true;
  }
  bool operator!=(const CanPacket_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CanPacket_

// alias to use template instance with default allocator
using CanPacket =
  additional_msgs::msg::CanPacket_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace additional_msgs

#endif  // ADDITIONAL_MSGS__MSG__DETAIL__CAN_PACKET__STRUCT_HPP_
