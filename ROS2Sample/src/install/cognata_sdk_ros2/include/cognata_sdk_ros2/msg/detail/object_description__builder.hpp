// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cognata_sdk_ros2:msg/ObjectDescription.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__OBJECT_DESCRIPTION__BUILDER_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__OBJECT_DESCRIPTION__BUILDER_HPP_

#include "cognata_sdk_ros2/msg/detail/object_description__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cognata_sdk_ros2
{

namespace msg
{

namespace builder
{

class Init_ObjectDescription_sensor_ids
{
public:
  explicit Init_ObjectDescription_sensor_ids(::cognata_sdk_ros2::msg::ObjectDescription & msg)
  : msg_(msg)
  {}
  ::cognata_sdk_ros2::msg::ObjectDescription sensor_ids(::cognata_sdk_ros2::msg::ObjectDescription::_sensor_ids_type arg)
  {
    msg_.sensor_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::ObjectDescription msg_;
};

class Init_ObjectDescription_bounding_box
{
public:
  explicit Init_ObjectDescription_bounding_box(::cognata_sdk_ros2::msg::ObjectDescription & msg)
  : msg_(msg)
  {}
  Init_ObjectDescription_sensor_ids bounding_box(::cognata_sdk_ros2::msg::ObjectDescription::_bounding_box_type arg)
  {
    msg_.bounding_box = std::move(arg);
    return Init_ObjectDescription_sensor_ids(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::ObjectDescription msg_;
};

class Init_ObjectDescription_motion
{
public:
  explicit Init_ObjectDescription_motion(::cognata_sdk_ros2::msg::ObjectDescription & msg)
  : msg_(msg)
  {}
  Init_ObjectDescription_bounding_box motion(::cognata_sdk_ros2::msg::ObjectDescription::_motion_type arg)
  {
    msg_.motion = std::move(arg);
    return Init_ObjectDescription_bounding_box(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::ObjectDescription msg_;
};

class Init_ObjectDescription_roi_subtype
{
public:
  explicit Init_ObjectDescription_roi_subtype(::cognata_sdk_ros2::msg::ObjectDescription & msg)
  : msg_(msg)
  {}
  Init_ObjectDescription_motion roi_subtype(::cognata_sdk_ros2::msg::ObjectDescription::_roi_subtype_type arg)
  {
    msg_.roi_subtype = std::move(arg);
    return Init_ObjectDescription_motion(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::ObjectDescription msg_;
};

class Init_ObjectDescription_roi_type
{
public:
  explicit Init_ObjectDescription_roi_type(::cognata_sdk_ros2::msg::ObjectDescription & msg)
  : msg_(msg)
  {}
  Init_ObjectDescription_roi_subtype roi_type(::cognata_sdk_ros2::msg::ObjectDescription::_roi_type_type arg)
  {
    msg_.roi_type = std::move(arg);
    return Init_ObjectDescription_roi_subtype(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::ObjectDescription msg_;
};

class Init_ObjectDescription_object_id
{
public:
  explicit Init_ObjectDescription_object_id(::cognata_sdk_ros2::msg::ObjectDescription & msg)
  : msg_(msg)
  {}
  Init_ObjectDescription_roi_type object_id(::cognata_sdk_ros2::msg::ObjectDescription::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_ObjectDescription_roi_type(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::ObjectDescription msg_;
};

class Init_ObjectDescription_header
{
public:
  Init_ObjectDescription_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectDescription_object_id header(::cognata_sdk_ros2::msg::ObjectDescription::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectDescription_object_id(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::ObjectDescription msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cognata_sdk_ros2::msg::ObjectDescription>()
{
  return cognata_sdk_ros2::msg::builder::Init_ObjectDescription_header();
}

}  // namespace cognata_sdk_ros2

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__OBJECT_DESCRIPTION__BUILDER_HPP_
