// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cognata_sdk_ros2:msg/BoundingBoxMsg.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__BOUNDING_BOX_MSG__BUILDER_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__BOUNDING_BOX_MSG__BUILDER_HPP_

#include "cognata_sdk_ros2/msg/detail/bounding_box_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cognata_sdk_ros2
{

namespace msg
{

namespace builder
{

class Init_BoundingBoxMsg_length
{
public:
  explicit Init_BoundingBoxMsg_length(::cognata_sdk_ros2::msg::BoundingBoxMsg & msg)
  : msg_(msg)
  {}
  ::cognata_sdk_ros2::msg::BoundingBoxMsg length(::cognata_sdk_ros2::msg::BoundingBoxMsg::_length_type arg)
  {
    msg_.length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::BoundingBoxMsg msg_;
};

class Init_BoundingBoxMsg_width
{
public:
  explicit Init_BoundingBoxMsg_width(::cognata_sdk_ros2::msg::BoundingBoxMsg & msg)
  : msg_(msg)
  {}
  Init_BoundingBoxMsg_length width(::cognata_sdk_ros2::msg::BoundingBoxMsg::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_BoundingBoxMsg_length(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::BoundingBoxMsg msg_;
};

class Init_BoundingBoxMsg_height
{
public:
  explicit Init_BoundingBoxMsg_height(::cognata_sdk_ros2::msg::BoundingBoxMsg & msg)
  : msg_(msg)
  {}
  Init_BoundingBoxMsg_width height(::cognata_sdk_ros2::msg::BoundingBoxMsg::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_BoundingBoxMsg_width(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::BoundingBoxMsg msg_;
};

class Init_BoundingBoxMsg_transform
{
public:
  Init_BoundingBoxMsg_transform()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingBoxMsg_height transform(::cognata_sdk_ros2::msg::BoundingBoxMsg::_transform_type arg)
  {
    msg_.transform = std::move(arg);
    return Init_BoundingBoxMsg_height(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::BoundingBoxMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cognata_sdk_ros2::msg::BoundingBoxMsg>()
{
  return cognata_sdk_ros2::msg::builder::Init_BoundingBoxMsg_transform();
}

}  // namespace cognata_sdk_ros2

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__BOUNDING_BOX_MSG__BUILDER_HPP_
