// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tracked_object_msgs:msg/ObjectTypes.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_OBJECT_MSGS__MSG__DETAIL__OBJECT_TYPES__STRUCT_HPP_
#define TRACKED_OBJECT_MSGS__MSG__DETAIL__OBJECT_TYPES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tracked_object_msgs__msg__ObjectTypes __attribute__((deprecated))
#else
# define DEPRECATED__tracked_object_msgs__msg__ObjectTypes __declspec(deprecated)
#endif

namespace tracked_object_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectTypes_
{
  using Type = ObjectTypes_<ContainerAllocator>;

  explicit ObjectTypes_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ObjectTypes_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations
  static constexpr uint32_t UNKNOWN =
    0u;
  static constexpr uint32_t ANIMAL =
    10000u;
  static constexpr uint32_t HUMAN =
    11000u;
  static constexpr uint32_t STANDING =
    11100u;
  static constexpr uint32_t PRONE =
    11200u;
  static constexpr uint32_t CROUCHING =
    11300u;
  static constexpr uint32_t VEHICLE =
    20000u;
  static constexpr uint32_t AGRICULTURE =
    21000u;
  static constexpr uint32_t TRACTOR =
    21100u;
  static constexpr uint32_t CASE_MAGNUM_390 =
    21110u;
  static constexpr uint32_t SPRAYER =
    21200u;
  static constexpr uint32_t COMBINE =
    21300u;
  static constexpr uint32_t PLANTER =
    21400u;
  static constexpr uint32_t CONSTRUCTION =
    22000u;
  static constexpr uint32_t DOZER =
    22100u;
  static constexpr uint32_t EXCAVATOR =
    22200u;
  static constexpr uint32_t GRADER =
    22300u;
  static constexpr uint32_t SCRAPER =
    22400u;
  static constexpr uint32_t CRANE =
    22500u;
  static constexpr uint32_t COMPACTOR =
    22600u;
  static constexpr uint32_t FRONT_LOADER =
    22700u;
  static constexpr uint32_t BACKHOE =
    22800u;
  static constexpr uint32_t VEHICLE_ON_ROAD =
    23000u;
  static constexpr uint32_t CAR =
    23100u;
  static constexpr uint32_t BICYCLE =
    23200u;
  static constexpr uint32_t UTILITY =
    24000u;
  static constexpr uint32_t DUMPTRUCK =
    24100u;
  static constexpr uint32_t PICKUP =
    24200u;
  static constexpr uint32_t FORKLIFT =
    24300u;
  static constexpr uint32_t ENVIRONMENT =
    30000u;
  static constexpr uint32_t NATURAL_FEATURES =
    31000u;
  static constexpr uint32_t ROCK =
    31100u;
  static constexpr uint32_t TREE =
    31200u;
  static constexpr uint32_t WATER =
    31300u;
  static constexpr uint32_t URBAN_FEATURES =
    32000u;
  static constexpr uint32_t WALL =
    32100u;
  static constexpr uint32_t SIDEWALK =
    32200u;
  static constexpr uint32_t POLE =
    32300u;
  static constexpr uint32_t FENCE =
    32400u;
  static constexpr uint32_t JERSEY_BARRIER =
    32500u;
  static constexpr uint32_t CONE =
    32600u;
  static constexpr uint32_t RURAL_FEATURES =
    33000u;
  static constexpr uint32_t PUMP =
    33100u;
  static constexpr uint32_t PIPE =
    33200u;
  static constexpr uint32_t NEG_OBS =
    40000u;
  static constexpr uint32_t POTHOLE =
    41000u;
  static constexpr uint32_t CLIFF =
    42000u;
  static constexpr uint32_t POST_HOLE =
    43000u;
  static constexpr uint32_t SINKHOLE =
    44000u;
  static constexpr uint32_t PIT_HOLE =
    45000u;
  static constexpr uint32_t DITCH =
    46000u;
  static constexpr uint32_t MISC =
    50000u;
  static constexpr uint32_t ISO18497_OBJECT =
    51000u;

  // pointer types
  using RawPtr =
    tracked_object_msgs::msg::ObjectTypes_<ContainerAllocator> *;
  using ConstRawPtr =
    const tracked_object_msgs::msg::ObjectTypes_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tracked_object_msgs::msg::ObjectTypes_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tracked_object_msgs::msg::ObjectTypes_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tracked_object_msgs::msg::ObjectTypes_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tracked_object_msgs::msg::ObjectTypes_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tracked_object_msgs::msg::ObjectTypes_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tracked_object_msgs::msg::ObjectTypes_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tracked_object_msgs::msg::ObjectTypes_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tracked_object_msgs::msg::ObjectTypes_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tracked_object_msgs__msg__ObjectTypes
    std::shared_ptr<tracked_object_msgs::msg::ObjectTypes_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tracked_object_msgs__msg__ObjectTypes
    std::shared_ptr<tracked_object_msgs::msg::ObjectTypes_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectTypes_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectTypes_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectTypes_

// alias to use template instance with default allocator
using ObjectTypes =
  tracked_object_msgs::msg::ObjectTypes_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::UNKNOWN;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::ANIMAL;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::HUMAN;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::STANDING;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::PRONE;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::CROUCHING;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::VEHICLE;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::AGRICULTURE;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::TRACTOR;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::CASE_MAGNUM_390;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::SPRAYER;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::COMBINE;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::PLANTER;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::CONSTRUCTION;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::DOZER;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::EXCAVATOR;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::GRADER;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::SCRAPER;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::CRANE;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::COMPACTOR;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::FRONT_LOADER;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::BACKHOE;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::VEHICLE_ON_ROAD;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::CAR;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::BICYCLE;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::UTILITY;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::DUMPTRUCK;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::PICKUP;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::FORKLIFT;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::ENVIRONMENT;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::NATURAL_FEATURES;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::ROCK;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::TREE;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::WATER;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::URBAN_FEATURES;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::WALL;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::SIDEWALK;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::POLE;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::FENCE;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::JERSEY_BARRIER;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::CONE;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::RURAL_FEATURES;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::PUMP;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::PIPE;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::NEG_OBS;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::POTHOLE;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::CLIFF;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::POST_HOLE;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::SINKHOLE;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::PIT_HOLE;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::DITCH;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::MISC;
template<typename ContainerAllocator>
constexpr uint32_t ObjectTypes_<ContainerAllocator>::ISO18497_OBJECT;

}  // namespace msg

}  // namespace tracked_object_msgs

#endif  // TRACKED_OBJECT_MSGS__MSG__DETAIL__OBJECT_TYPES__STRUCT_HPP_
