// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/TrackedObjectKinematics.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT_KINEMATICS__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT_KINEMATICS__BUILDER_HPP_

#include "autoware_auto_perception_msgs/msg/detail/tracked_object_kinematics__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedObjectKinematics_is_stationary
{
public:
  explicit Init_TrackedObjectKinematics_is_stationary(::autoware_auto_perception_msgs::msg::TrackedObjectKinematics & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::TrackedObjectKinematics is_stationary(::autoware_auto_perception_msgs::msg::TrackedObjectKinematics::_is_stationary_type arg)
  {
    msg_.is_stationary = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrackedObjectKinematics msg_;
};

class Init_TrackedObjectKinematics_acceleration
{
public:
  explicit Init_TrackedObjectKinematics_acceleration(::autoware_auto_perception_msgs::msg::TrackedObjectKinematics & msg)
  : msg_(msg)
  {}
  Init_TrackedObjectKinematics_is_stationary acceleration(::autoware_auto_perception_msgs::msg::TrackedObjectKinematics::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_TrackedObjectKinematics_is_stationary(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrackedObjectKinematics msg_;
};

class Init_TrackedObjectKinematics_twist
{
public:
  explicit Init_TrackedObjectKinematics_twist(::autoware_auto_perception_msgs::msg::TrackedObjectKinematics & msg)
  : msg_(msg)
  {}
  Init_TrackedObjectKinematics_acceleration twist(::autoware_auto_perception_msgs::msg::TrackedObjectKinematics::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_TrackedObjectKinematics_acceleration(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrackedObjectKinematics msg_;
};

class Init_TrackedObjectKinematics_orientation_availability
{
public:
  explicit Init_TrackedObjectKinematics_orientation_availability(::autoware_auto_perception_msgs::msg::TrackedObjectKinematics & msg)
  : msg_(msg)
  {}
  Init_TrackedObjectKinematics_twist orientation_availability(::autoware_auto_perception_msgs::msg::TrackedObjectKinematics::_orientation_availability_type arg)
  {
    msg_.orientation_availability = std::move(arg);
    return Init_TrackedObjectKinematics_twist(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrackedObjectKinematics msg_;
};

class Init_TrackedObjectKinematics_orientation
{
public:
  explicit Init_TrackedObjectKinematics_orientation(::autoware_auto_perception_msgs::msg::TrackedObjectKinematics & msg)
  : msg_(msg)
  {}
  Init_TrackedObjectKinematics_orientation_availability orientation(::autoware_auto_perception_msgs::msg::TrackedObjectKinematics::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_TrackedObjectKinematics_orientation_availability(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrackedObjectKinematics msg_;
};

class Init_TrackedObjectKinematics_position_covariance
{
public:
  explicit Init_TrackedObjectKinematics_position_covariance(::autoware_auto_perception_msgs::msg::TrackedObjectKinematics & msg)
  : msg_(msg)
  {}
  Init_TrackedObjectKinematics_orientation position_covariance(::autoware_auto_perception_msgs::msg::TrackedObjectKinematics::_position_covariance_type arg)
  {
    msg_.position_covariance = std::move(arg);
    return Init_TrackedObjectKinematics_orientation(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrackedObjectKinematics msg_;
};

class Init_TrackedObjectKinematics_centroid_position
{
public:
  Init_TrackedObjectKinematics_centroid_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedObjectKinematics_position_covariance centroid_position(::autoware_auto_perception_msgs::msg::TrackedObjectKinematics::_centroid_position_type arg)
  {
    msg_.centroid_position = std::move(arg);
    return Init_TrackedObjectKinematics_position_covariance(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrackedObjectKinematics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::TrackedObjectKinematics>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_TrackedObjectKinematics_centroid_position();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT_KINEMATICS__BUILDER_HPP_
