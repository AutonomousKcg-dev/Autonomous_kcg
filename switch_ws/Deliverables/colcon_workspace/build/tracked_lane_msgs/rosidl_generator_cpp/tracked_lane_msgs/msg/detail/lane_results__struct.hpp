// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tracked_lane_msgs:msg/LaneResults.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_LANE_MSGS__MSG__DETAIL__LANE_RESULTS__STRUCT_HPP_
#define TRACKED_LANE_MSGS__MSG__DETAIL__LANE_RESULTS__STRUCT_HPP_

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
// Member 'adjacent_left'
// Member 'adjacent_right'
// Member 'ego_lane'
// Member 'road_boundary'
#include "tracked_lane_msgs/msg/detail/lane__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tracked_lane_msgs__msg__LaneResults __attribute__((deprecated))
#else
# define DEPRECATED__tracked_lane_msgs__msg__LaneResults __declspec(deprecated)
#endif

namespace tracked_lane_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneResults_
{
  using Type = LaneResults_<ContainerAllocator>;

  explicit LaneResults_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    ego_lane(_init),
    road_boundary(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_adjacent_left = 0ul;
      this->num_adjacent_right = 0ul;
      this->total_number_of_lanes = 0l;
      this->algo_description = "";
    }
  }

  explicit LaneResults_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ego_lane(_alloc, _init),
    road_boundary(_alloc, _init),
    algo_description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_adjacent_left = 0ul;
      this->num_adjacent_right = 0ul;
      this->total_number_of_lanes = 0l;
      this->algo_description = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _adjacent_left_type =
    std::vector<tracked_lane_msgs::msg::Lane_<ContainerAllocator>, typename ContainerAllocator::template rebind<tracked_lane_msgs::msg::Lane_<ContainerAllocator>>::other>;
  _adjacent_left_type adjacent_left;
  using _num_adjacent_left_type =
    uint32_t;
  _num_adjacent_left_type num_adjacent_left;
  using _adjacent_right_type =
    std::vector<tracked_lane_msgs::msg::Lane_<ContainerAllocator>, typename ContainerAllocator::template rebind<tracked_lane_msgs::msg::Lane_<ContainerAllocator>>::other>;
  _adjacent_right_type adjacent_right;
  using _num_adjacent_right_type =
    uint32_t;
  _num_adjacent_right_type num_adjacent_right;
  using _ego_lane_type =
    tracked_lane_msgs::msg::Lane_<ContainerAllocator>;
  _ego_lane_type ego_lane;
  using _road_boundary_type =
    tracked_lane_msgs::msg::Lane_<ContainerAllocator>;
  _road_boundary_type road_boundary;
  using _total_number_of_lanes_type =
    int32_t;
  _total_number_of_lanes_type total_number_of_lanes;
  using _algo_description_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _algo_description_type algo_description;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__adjacent_left(
    const std::vector<tracked_lane_msgs::msg::Lane_<ContainerAllocator>, typename ContainerAllocator::template rebind<tracked_lane_msgs::msg::Lane_<ContainerAllocator>>::other> & _arg)
  {
    this->adjacent_left = _arg;
    return *this;
  }
  Type & set__num_adjacent_left(
    const uint32_t & _arg)
  {
    this->num_adjacent_left = _arg;
    return *this;
  }
  Type & set__adjacent_right(
    const std::vector<tracked_lane_msgs::msg::Lane_<ContainerAllocator>, typename ContainerAllocator::template rebind<tracked_lane_msgs::msg::Lane_<ContainerAllocator>>::other> & _arg)
  {
    this->adjacent_right = _arg;
    return *this;
  }
  Type & set__num_adjacent_right(
    const uint32_t & _arg)
  {
    this->num_adjacent_right = _arg;
    return *this;
  }
  Type & set__ego_lane(
    const tracked_lane_msgs::msg::Lane_<ContainerAllocator> & _arg)
  {
    this->ego_lane = _arg;
    return *this;
  }
  Type & set__road_boundary(
    const tracked_lane_msgs::msg::Lane_<ContainerAllocator> & _arg)
  {
    this->road_boundary = _arg;
    return *this;
  }
  Type & set__total_number_of_lanes(
    const int32_t & _arg)
  {
    this->total_number_of_lanes = _arg;
    return *this;
  }
  Type & set__algo_description(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->algo_description = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tracked_lane_msgs::msg::LaneResults_<ContainerAllocator> *;
  using ConstRawPtr =
    const tracked_lane_msgs::msg::LaneResults_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tracked_lane_msgs::msg::LaneResults_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tracked_lane_msgs::msg::LaneResults_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tracked_lane_msgs::msg::LaneResults_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tracked_lane_msgs::msg::LaneResults_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tracked_lane_msgs::msg::LaneResults_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tracked_lane_msgs::msg::LaneResults_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tracked_lane_msgs::msg::LaneResults_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tracked_lane_msgs::msg::LaneResults_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tracked_lane_msgs__msg__LaneResults
    std::shared_ptr<tracked_lane_msgs::msg::LaneResults_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tracked_lane_msgs__msg__LaneResults
    std::shared_ptr<tracked_lane_msgs::msg::LaneResults_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneResults_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->adjacent_left != other.adjacent_left) {
      return false;
    }
    if (this->num_adjacent_left != other.num_adjacent_left) {
      return false;
    }
    if (this->adjacent_right != other.adjacent_right) {
      return false;
    }
    if (this->num_adjacent_right != other.num_adjacent_right) {
      return false;
    }
    if (this->ego_lane != other.ego_lane) {
      return false;
    }
    if (this->road_boundary != other.road_boundary) {
      return false;
    }
    if (this->total_number_of_lanes != other.total_number_of_lanes) {
      return false;
    }
    if (this->algo_description != other.algo_description) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneResults_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneResults_

// alias to use template instance with default allocator
using LaneResults =
  tracked_lane_msgs::msg::LaneResults_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tracked_lane_msgs

#endif  // TRACKED_LANE_MSGS__MSG__DETAIL__LANE_RESULTS__STRUCT_HPP_
