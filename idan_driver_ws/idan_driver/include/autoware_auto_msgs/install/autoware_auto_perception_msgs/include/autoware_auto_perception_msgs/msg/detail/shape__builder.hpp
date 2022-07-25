// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/Shape.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__SHAPE__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__SHAPE__BUILDER_HPP_

#include "autoware_auto_perception_msgs/msg/detail/shape__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_Shape_height
{
public:
  explicit Init_Shape_height(::autoware_auto_perception_msgs::msg::Shape & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::Shape height(::autoware_auto_perception_msgs::msg::Shape::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::Shape msg_;
};

class Init_Shape_polygon
{
public:
  Init_Shape_polygon()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Shape_height polygon(::autoware_auto_perception_msgs::msg::Shape::_polygon_type arg)
  {
    msg_.polygon = std::move(arg);
    return Init_Shape_height(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::Shape msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::Shape>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_Shape_polygon();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__SHAPE__BUILDER_HPP_
