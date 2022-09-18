// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_
#define AUTOWARE_AUTO_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_

#include "autoware_auto_msgs/msg/detail/trajectory_point__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autoware_auto_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajectoryPoint_rear_wheel_angle_rad
{
public:
  explicit Init_TrajectoryPoint_rear_wheel_angle_rad(::autoware_auto_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  ::autoware_auto_msgs::msg::TrajectoryPoint rear_wheel_angle_rad(::autoware_auto_msgs::msg::TrajectoryPoint::_rear_wheel_angle_rad_type arg)
  {
    msg_.rear_wheel_angle_rad = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_front_wheel_angle_rad
{
public:
  explicit Init_TrajectoryPoint_front_wheel_angle_rad(::autoware_auto_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_rear_wheel_angle_rad front_wheel_angle_rad(::autoware_auto_msgs::msg::TrajectoryPoint::_front_wheel_angle_rad_type arg)
  {
    msg_.front_wheel_angle_rad = std::move(arg);
    return Init_TrajectoryPoint_rear_wheel_angle_rad(msg_);
  }

private:
  ::autoware_auto_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_heading_rate_rps
{
public:
  explicit Init_TrajectoryPoint_heading_rate_rps(::autoware_auto_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_front_wheel_angle_rad heading_rate_rps(::autoware_auto_msgs::msg::TrajectoryPoint::_heading_rate_rps_type arg)
  {
    msg_.heading_rate_rps = std::move(arg);
    return Init_TrajectoryPoint_front_wheel_angle_rad(msg_);
  }

private:
  ::autoware_auto_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_acceleration_mps2
{
public:
  explicit Init_TrajectoryPoint_acceleration_mps2(::autoware_auto_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_heading_rate_rps acceleration_mps2(::autoware_auto_msgs::msg::TrajectoryPoint::_acceleration_mps2_type arg)
  {
    msg_.acceleration_mps2 = std::move(arg);
    return Init_TrajectoryPoint_heading_rate_rps(msg_);
  }

private:
  ::autoware_auto_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_lateral_velocity_mps
{
public:
  explicit Init_TrajectoryPoint_lateral_velocity_mps(::autoware_auto_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_acceleration_mps2 lateral_velocity_mps(::autoware_auto_msgs::msg::TrajectoryPoint::_lateral_velocity_mps_type arg)
  {
    msg_.lateral_velocity_mps = std::move(arg);
    return Init_TrajectoryPoint_acceleration_mps2(msg_);
  }

private:
  ::autoware_auto_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_longitudinal_velocity_mps
{
public:
  explicit Init_TrajectoryPoint_longitudinal_velocity_mps(::autoware_auto_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_lateral_velocity_mps longitudinal_velocity_mps(::autoware_auto_msgs::msg::TrajectoryPoint::_longitudinal_velocity_mps_type arg)
  {
    msg_.longitudinal_velocity_mps = std::move(arg);
    return Init_TrajectoryPoint_lateral_velocity_mps(msg_);
  }

private:
  ::autoware_auto_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_heading
{
public:
  explicit Init_TrajectoryPoint_heading(::autoware_auto_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_longitudinal_velocity_mps heading(::autoware_auto_msgs::msg::TrajectoryPoint::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_TrajectoryPoint_longitudinal_velocity_mps(msg_);
  }

private:
  ::autoware_auto_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_y
{
public:
  explicit Init_TrajectoryPoint_y(::autoware_auto_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_heading y(::autoware_auto_msgs::msg::TrajectoryPoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_TrajectoryPoint_heading(msg_);
  }

private:
  ::autoware_auto_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_x
{
public:
  explicit Init_TrajectoryPoint_x(::autoware_auto_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_y x(::autoware_auto_msgs::msg::TrajectoryPoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TrajectoryPoint_y(msg_);
  }

private:
  ::autoware_auto_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_time_from_start
{
public:
  Init_TrajectoryPoint_time_from_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryPoint_x time_from_start(::autoware_auto_msgs::msg::TrajectoryPoint::_time_from_start_type arg)
  {
    msg_.time_from_start = std::move(arg);
    return Init_TrajectoryPoint_x(msg_);
  }

private:
  ::autoware_auto_msgs::msg::TrajectoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_msgs::msg::TrajectoryPoint>()
{
  return autoware_auto_msgs::msg::builder::Init_TrajectoryPoint_time_from_start();
}

}  // namespace autoware_auto_msgs

#endif  // AUTOWARE_AUTO_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_
