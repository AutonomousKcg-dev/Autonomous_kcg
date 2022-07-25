// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/ObjectClassification.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__BUILDER_HPP_

#include "autoware_auto_perception_msgs/msg/detail/object_classification__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectClassification_probability
{
public:
  explicit Init_ObjectClassification_probability(::autoware_auto_perception_msgs::msg::ObjectClassification & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::ObjectClassification probability(::autoware_auto_perception_msgs::msg::ObjectClassification::_probability_type arg)
  {
    msg_.probability = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::ObjectClassification msg_;
};

class Init_ObjectClassification_classification
{
public:
  Init_ObjectClassification_classification()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectClassification_probability classification(::autoware_auto_perception_msgs::msg::ObjectClassification::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return Init_ObjectClassification_probability(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::ObjectClassification msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::ObjectClassification>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_ObjectClassification_classification();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__BUILDER_HPP_
