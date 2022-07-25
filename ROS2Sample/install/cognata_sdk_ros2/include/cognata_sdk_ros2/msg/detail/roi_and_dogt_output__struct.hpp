// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cognata_sdk_ros2:msg/ROIAndDOGTOutput.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__ROI_AND_DOGT_OUTPUT__STRUCT_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__ROI_AND_DOGT_OUTPUT__STRUCT_HPP_

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
// Member 'other_list'
#include "cognata_sdk_ros2/msg/detail/object_description__struct.hpp"
// Member 'annotation_list'
#include "cognata_sdk_ros2/msg/detail/annotation_msg__struct.hpp"
// Member 'pedestrian_list'
#include "cognata_sdk_ros2/msg/detail/pedestrian_msg__struct.hpp"
// Member 'vehicle_list'
#include "cognata_sdk_ros2/msg/detail/vehicle_msg__struct.hpp"
// Member 'traffic_light_list'
#include "cognata_sdk_ros2/msg/detail/traffic_light_msg__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cognata_sdk_ros2__msg__ROIAndDOGTOutput __attribute__((deprecated))
#else
# define DEPRECATED__cognata_sdk_ros2__msg__ROIAndDOGTOutput __declspec(deprecated)
#endif

namespace cognata_sdk_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ROIAndDOGTOutput_
{
  using Type = ROIAndDOGTOutput_<ContainerAllocator>;

  explicit ROIAndDOGTOutput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ROIAndDOGTOutput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _other_list_type =
    std::vector<cognata_sdk_ros2::msg::ObjectDescription_<ContainerAllocator>, typename ContainerAllocator::template rebind<cognata_sdk_ros2::msg::ObjectDescription_<ContainerAllocator>>::other>;
  _other_list_type other_list;
  using _annotation_list_type =
    std::vector<cognata_sdk_ros2::msg::AnnotationMsg_<ContainerAllocator>, typename ContainerAllocator::template rebind<cognata_sdk_ros2::msg::AnnotationMsg_<ContainerAllocator>>::other>;
  _annotation_list_type annotation_list;
  using _pedestrian_list_type =
    std::vector<cognata_sdk_ros2::msg::PedestrianMsg_<ContainerAllocator>, typename ContainerAllocator::template rebind<cognata_sdk_ros2::msg::PedestrianMsg_<ContainerAllocator>>::other>;
  _pedestrian_list_type pedestrian_list;
  using _vehicle_list_type =
    std::vector<cognata_sdk_ros2::msg::VehicleMsg_<ContainerAllocator>, typename ContainerAllocator::template rebind<cognata_sdk_ros2::msg::VehicleMsg_<ContainerAllocator>>::other>;
  _vehicle_list_type vehicle_list;
  using _traffic_light_list_type =
    std::vector<cognata_sdk_ros2::msg::TrafficLightMsg_<ContainerAllocator>, typename ContainerAllocator::template rebind<cognata_sdk_ros2::msg::TrafficLightMsg_<ContainerAllocator>>::other>;
  _traffic_light_list_type traffic_light_list;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__other_list(
    const std::vector<cognata_sdk_ros2::msg::ObjectDescription_<ContainerAllocator>, typename ContainerAllocator::template rebind<cognata_sdk_ros2::msg::ObjectDescription_<ContainerAllocator>>::other> & _arg)
  {
    this->other_list = _arg;
    return *this;
  }
  Type & set__annotation_list(
    const std::vector<cognata_sdk_ros2::msg::AnnotationMsg_<ContainerAllocator>, typename ContainerAllocator::template rebind<cognata_sdk_ros2::msg::AnnotationMsg_<ContainerAllocator>>::other> & _arg)
  {
    this->annotation_list = _arg;
    return *this;
  }
  Type & set__pedestrian_list(
    const std::vector<cognata_sdk_ros2::msg::PedestrianMsg_<ContainerAllocator>, typename ContainerAllocator::template rebind<cognata_sdk_ros2::msg::PedestrianMsg_<ContainerAllocator>>::other> & _arg)
  {
    this->pedestrian_list = _arg;
    return *this;
  }
  Type & set__vehicle_list(
    const std::vector<cognata_sdk_ros2::msg::VehicleMsg_<ContainerAllocator>, typename ContainerAllocator::template rebind<cognata_sdk_ros2::msg::VehicleMsg_<ContainerAllocator>>::other> & _arg)
  {
    this->vehicle_list = _arg;
    return *this;
  }
  Type & set__traffic_light_list(
    const std::vector<cognata_sdk_ros2::msg::TrafficLightMsg_<ContainerAllocator>, typename ContainerAllocator::template rebind<cognata_sdk_ros2::msg::TrafficLightMsg_<ContainerAllocator>>::other> & _arg)
  {
    this->traffic_light_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cognata_sdk_ros2::msg::ROIAndDOGTOutput_<ContainerAllocator> *;
  using ConstRawPtr =
    const cognata_sdk_ros2::msg::ROIAndDOGTOutput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cognata_sdk_ros2::msg::ROIAndDOGTOutput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cognata_sdk_ros2::msg::ROIAndDOGTOutput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cognata_sdk_ros2::msg::ROIAndDOGTOutput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cognata_sdk_ros2::msg::ROIAndDOGTOutput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cognata_sdk_ros2::msg::ROIAndDOGTOutput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cognata_sdk_ros2::msg::ROIAndDOGTOutput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cognata_sdk_ros2::msg::ROIAndDOGTOutput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cognata_sdk_ros2::msg::ROIAndDOGTOutput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cognata_sdk_ros2__msg__ROIAndDOGTOutput
    std::shared_ptr<cognata_sdk_ros2::msg::ROIAndDOGTOutput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cognata_sdk_ros2__msg__ROIAndDOGTOutput
    std::shared_ptr<cognata_sdk_ros2::msg::ROIAndDOGTOutput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ROIAndDOGTOutput_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->other_list != other.other_list) {
      return false;
    }
    if (this->annotation_list != other.annotation_list) {
      return false;
    }
    if (this->pedestrian_list != other.pedestrian_list) {
      return false;
    }
    if (this->vehicle_list != other.vehicle_list) {
      return false;
    }
    if (this->traffic_light_list != other.traffic_light_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const ROIAndDOGTOutput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ROIAndDOGTOutput_

// alias to use template instance with default allocator
using ROIAndDOGTOutput =
  cognata_sdk_ros2::msg::ROIAndDOGTOutput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cognata_sdk_ros2

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__ROI_AND_DOGT_OUTPUT__STRUCT_HPP_
