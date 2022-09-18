// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_msgs:msg/PointClusters.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MSGS__MSG__DETAIL__POINT_CLUSTERS__STRUCT_HPP_
#define AUTOWARE_AUTO_MSGS__MSG__DETAIL__POINT_CLUSTERS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'clusters'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_msgs__msg__PointClusters __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_msgs__msg__PointClusters __declspec(deprecated)
#endif

namespace autoware_auto_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointClusters_
{
  using Type = PointClusters_<ContainerAllocator>;

  explicit PointClusters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PointClusters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _clusters_type =
    std::vector<sensor_msgs::msg::PointCloud2_<ContainerAllocator>, typename ContainerAllocator::template rebind<sensor_msgs::msg::PointCloud2_<ContainerAllocator>>::other>;
  _clusters_type clusters;

  // setters for named parameter idiom
  Type & set__clusters(
    const std::vector<sensor_msgs::msg::PointCloud2_<ContainerAllocator>, typename ContainerAllocator::template rebind<sensor_msgs::msg::PointCloud2_<ContainerAllocator>>::other> & _arg)
  {
    this->clusters = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_msgs::msg::PointClusters_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_msgs::msg::PointClusters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_msgs::msg::PointClusters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_msgs::msg::PointClusters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_msgs::msg::PointClusters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_msgs::msg::PointClusters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_msgs::msg::PointClusters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_msgs::msg::PointClusters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_msgs::msg::PointClusters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_msgs::msg::PointClusters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_msgs__msg__PointClusters
    std::shared_ptr<autoware_auto_msgs::msg::PointClusters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_msgs__msg__PointClusters
    std::shared_ptr<autoware_auto_msgs::msg::PointClusters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointClusters_ & other) const
  {
    if (this->clusters != other.clusters) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointClusters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointClusters_

// alias to use template instance with default allocator
using PointClusters =
  autoware_auto_msgs::msg::PointClusters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_msgs

#endif  // AUTOWARE_AUTO_MSGS__MSG__DETAIL__POINT_CLUSTERS__STRUCT_HPP_