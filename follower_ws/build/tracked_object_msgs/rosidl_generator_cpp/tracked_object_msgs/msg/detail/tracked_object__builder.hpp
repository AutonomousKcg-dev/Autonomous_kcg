// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tracked_object_msgs:msg/TrackedObject.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_OBJECT_MSGS__MSG__DETAIL__TRACKED_OBJECT__BUILDER_HPP_
#define TRACKED_OBJECT_MSGS__MSG__DETAIL__TRACKED_OBJECT__BUILDER_HPP_

#include "tracked_object_msgs/msg/detail/tracked_object__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tracked_object_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedObject_metadata
{
public:
  explicit Init_TrackedObject_metadata(::tracked_object_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  ::tracked_object_msgs::msg::TrackedObject metadata(::tracked_object_msgs::msg::TrackedObject::_metadata_type arg)
  {
    msg_.metadata = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tracked_object_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_confidence
{
public:
  explicit Init_TrackedObject_confidence(::tracked_object_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  Init_TrackedObject_metadata confidence(::tracked_object_msgs::msg::TrackedObject::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_TrackedObject_metadata(msg_);
  }

private:
  ::tracked_object_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_box_dimensions_m
{
public:
  explicit Init_TrackedObject_box_dimensions_m(::tracked_object_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  Init_TrackedObject_confidence box_dimensions_m(::tracked_object_msgs::msg::TrackedObject::_box_dimensions_m_type arg)
  {
    msg_.box_dimensions_m = std::move(arg);
    return Init_TrackedObject_confidence(msg_);
  }

private:
  ::tracked_object_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_object_velocity_mps_radps
{
public:
  explicit Init_TrackedObject_object_velocity_mps_radps(::tracked_object_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  Init_TrackedObject_box_dimensions_m object_velocity_mps_radps(::tracked_object_msgs::msg::TrackedObject::_object_velocity_mps_radps_type arg)
  {
    msg_.object_velocity_mps_radps = std::move(arg);
    return Init_TrackedObject_box_dimensions_m(msg_);
  }

private:
  ::tracked_object_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_base_frame_id
{
public:
  explicit Init_TrackedObject_base_frame_id(::tracked_object_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  Init_TrackedObject_object_velocity_mps_radps base_frame_id(::tracked_object_msgs::msg::TrackedObject::_base_frame_id_type arg)
  {
    msg_.base_frame_id = std::move(arg);
    return Init_TrackedObject_object_velocity_mps_radps(msg_);
  }

private:
  ::tracked_object_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_object_pose_m_quat
{
public:
  explicit Init_TrackedObject_object_pose_m_quat(::tracked_object_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  Init_TrackedObject_base_frame_id object_pose_m_quat(::tracked_object_msgs::msg::TrackedObject::_object_pose_m_quat_type arg)
  {
    msg_.object_pose_m_quat = std::move(arg);
    return Init_TrackedObject_base_frame_id(msg_);
  }

private:
  ::tracked_object_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_object_type
{
public:
  explicit Init_TrackedObject_object_type(::tracked_object_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  Init_TrackedObject_object_pose_m_quat object_type(::tracked_object_msgs::msg::TrackedObject::_object_type_type arg)
  {
    msg_.object_type = std::move(arg);
    return Init_TrackedObject_object_pose_m_quat(msg_);
  }

private:
  ::tracked_object_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_stamp
{
public:
  explicit Init_TrackedObject_stamp(::tracked_object_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  Init_TrackedObject_object_type stamp(::tracked_object_msgs::msg::TrackedObject::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_TrackedObject_object_type(msg_);
  }

private:
  ::tracked_object_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_uuid
{
public:
  Init_TrackedObject_uuid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedObject_stamp uuid(::tracked_object_msgs::msg::TrackedObject::_uuid_type arg)
  {
    msg_.uuid = std::move(arg);
    return Init_TrackedObject_stamp(msg_);
  }

private:
  ::tracked_object_msgs::msg::TrackedObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tracked_object_msgs::msg::TrackedObject>()
{
  return tracked_object_msgs::msg::builder::Init_TrackedObject_uuid();
}

}  // namespace tracked_object_msgs

#endif  // TRACKED_OBJECT_MSGS__MSG__DETAIL__TRACKED_OBJECT__BUILDER_HPP_
