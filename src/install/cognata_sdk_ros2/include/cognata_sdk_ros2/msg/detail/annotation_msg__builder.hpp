// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cognata_sdk_ros2:msg/AnnotationMsg.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__ANNOTATION_MSG__BUILDER_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__ANNOTATION_MSG__BUILDER_HPP_

#include "cognata_sdk_ros2/msg/detail/annotation_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cognata_sdk_ros2
{

namespace msg
{

namespace builder
{

class Init_AnnotationMsg_local_transform
{
public:
  explicit Init_AnnotationMsg_local_transform(::cognata_sdk_ros2::msg::AnnotationMsg & msg)
  : msg_(msg)
  {}
  ::cognata_sdk_ros2::msg::AnnotationMsg local_transform(::cognata_sdk_ros2::msg::AnnotationMsg::_local_transform_type arg)
  {
    msg_.local_transform = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::AnnotationMsg msg_;
};

class Init_AnnotationMsg_description
{
public:
  explicit Init_AnnotationMsg_description(::cognata_sdk_ros2::msg::AnnotationMsg & msg)
  : msg_(msg)
  {}
  Init_AnnotationMsg_local_transform description(::cognata_sdk_ros2::msg::AnnotationMsg::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_AnnotationMsg_local_transform(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::AnnotationMsg msg_;
};

class Init_AnnotationMsg_header
{
public:
  Init_AnnotationMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AnnotationMsg_description header(::cognata_sdk_ros2::msg::AnnotationMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AnnotationMsg_description(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::AnnotationMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cognata_sdk_ros2::msg::AnnotationMsg>()
{
  return cognata_sdk_ros2::msg::builder::Init_AnnotationMsg_header();
}

}  // namespace cognata_sdk_ros2

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__ANNOTATION_MSG__BUILDER_HPP_
