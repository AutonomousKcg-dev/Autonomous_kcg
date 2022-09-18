// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tracked_object_msgs:msg/TrackedObjectArray.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_OBJECT_MSGS__MSG__DETAIL__TRACKED_OBJECT_ARRAY__BUILDER_HPP_
#define TRACKED_OBJECT_MSGS__MSG__DETAIL__TRACKED_OBJECT_ARRAY__BUILDER_HPP_

#include "tracked_object_msgs/msg/detail/tracked_object_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tracked_object_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedObjectArray_tracked_objects
{
public:
  explicit Init_TrackedObjectArray_tracked_objects(::tracked_object_msgs::msg::TrackedObjectArray & msg)
  : msg_(msg)
  {}
  ::tracked_object_msgs::msg::TrackedObjectArray tracked_objects(::tracked_object_msgs::msg::TrackedObjectArray::_tracked_objects_type arg)
  {
    msg_.tracked_objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tracked_object_msgs::msg::TrackedObjectArray msg_;
};

class Init_TrackedObjectArray_header
{
public:
  Init_TrackedObjectArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedObjectArray_tracked_objects header(::tracked_object_msgs::msg::TrackedObjectArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrackedObjectArray_tracked_objects(msg_);
  }

private:
  ::tracked_object_msgs::msg::TrackedObjectArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tracked_object_msgs::msg::TrackedObjectArray>()
{
  return tracked_object_msgs::msg::builder::Init_TrackedObjectArray_header();
}

}  // namespace tracked_object_msgs

#endif  // TRACKED_OBJECT_MSGS__MSG__DETAIL__TRACKED_OBJECT_ARRAY__BUILDER_HPP_
