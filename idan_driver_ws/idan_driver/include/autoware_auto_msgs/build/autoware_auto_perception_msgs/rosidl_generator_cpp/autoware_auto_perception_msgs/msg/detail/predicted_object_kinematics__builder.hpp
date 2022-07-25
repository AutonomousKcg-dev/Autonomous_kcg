// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/PredictedObjectKinematics.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT_KINEMATICS__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT_KINEMATICS__BUILDER_HPP_

#include "autoware_auto_perception_msgs/msg/detail/predicted_object_kinematics__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_PredictedObjectKinematics_predicted_paths
{
public:
  explicit Init_PredictedObjectKinematics_predicted_paths(::autoware_auto_perception_msgs::msg::PredictedObjectKinematics & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::PredictedObjectKinematics predicted_paths(::autoware_auto_perception_msgs::msg::PredictedObjectKinematics::_predicted_paths_type arg)
  {
    msg_.predicted_paths = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::PredictedObjectKinematics msg_;
};

class Init_PredictedObjectKinematics_initial_acceleration
{
public:
  explicit Init_PredictedObjectKinematics_initial_acceleration(::autoware_auto_perception_msgs::msg::PredictedObjectKinematics & msg)
  : msg_(msg)
  {}
  Init_PredictedObjectKinematics_predicted_paths initial_acceleration(::autoware_auto_perception_msgs::msg::PredictedObjectKinematics::_initial_acceleration_type arg)
  {
    msg_.initial_acceleration = std::move(arg);
    return Init_PredictedObjectKinematics_predicted_paths(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::PredictedObjectKinematics msg_;
};

class Init_PredictedObjectKinematics_initial_twist
{
public:
  explicit Init_PredictedObjectKinematics_initial_twist(::autoware_auto_perception_msgs::msg::PredictedObjectKinematics & msg)
  : msg_(msg)
  {}
  Init_PredictedObjectKinematics_initial_acceleration initial_twist(::autoware_auto_perception_msgs::msg::PredictedObjectKinematics::_initial_twist_type arg)
  {
    msg_.initial_twist = std::move(arg);
    return Init_PredictedObjectKinematics_initial_acceleration(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::PredictedObjectKinematics msg_;
};

class Init_PredictedObjectKinematics_initial_pose
{
public:
  Init_PredictedObjectKinematics_initial_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PredictedObjectKinematics_initial_twist initial_pose(::autoware_auto_perception_msgs::msg::PredictedObjectKinematics::_initial_pose_type arg)
  {
    msg_.initial_pose = std::move(arg);
    return Init_PredictedObjectKinematics_initial_twist(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::PredictedObjectKinematics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::PredictedObjectKinematics>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_PredictedObjectKinematics_initial_pose();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT_KINEMATICS__BUILDER_HPP_
