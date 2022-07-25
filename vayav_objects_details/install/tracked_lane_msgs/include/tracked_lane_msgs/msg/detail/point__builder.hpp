// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tracked_lane_msgs:msg/Point.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_LANE_MSGS__MSG__DETAIL__POINT__BUILDER_HPP_
#define TRACKED_LANE_MSGS__MSG__DETAIL__POINT__BUILDER_HPP_

#include "tracked_lane_msgs/msg/detail/point__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tracked_lane_msgs
{

namespace msg
{

namespace builder
{

class Init_Point_valid
{
public:
  explicit Init_Point_valid(::tracked_lane_msgs::msg::Point & msg)
  : msg_(msg)
  {}
  ::tracked_lane_msgs::msg::Point valid(::tracked_lane_msgs::msg::Point::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tracked_lane_msgs::msg::Point msg_;
};

class Init_Point_confidence
{
public:
  explicit Init_Point_confidence(::tracked_lane_msgs::msg::Point & msg)
  : msg_(msg)
  {}
  Init_Point_valid confidence(::tracked_lane_msgs::msg::Point::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_Point_valid(msg_);
  }

private:
  ::tracked_lane_msgs::msg::Point msg_;
};

class Init_Point_z
{
public:
  explicit Init_Point_z(::tracked_lane_msgs::msg::Point & msg)
  : msg_(msg)
  {}
  Init_Point_confidence z(::tracked_lane_msgs::msg::Point::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Point_confidence(msg_);
  }

private:
  ::tracked_lane_msgs::msg::Point msg_;
};

class Init_Point_y
{
public:
  explicit Init_Point_y(::tracked_lane_msgs::msg::Point & msg)
  : msg_(msg)
  {}
  Init_Point_z y(::tracked_lane_msgs::msg::Point::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Point_z(msg_);
  }

private:
  ::tracked_lane_msgs::msg::Point msg_;
};

class Init_Point_x
{
public:
  explicit Init_Point_x(::tracked_lane_msgs::msg::Point & msg)
  : msg_(msg)
  {}
  Init_Point_y x(::tracked_lane_msgs::msg::Point::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Point_y(msg_);
  }

private:
  ::tracked_lane_msgs::msg::Point msg_;
};

class Init_Point_v
{
public:
  explicit Init_Point_v(::tracked_lane_msgs::msg::Point & msg)
  : msg_(msg)
  {}
  Init_Point_x v(::tracked_lane_msgs::msg::Point::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_Point_x(msg_);
  }

private:
  ::tracked_lane_msgs::msg::Point msg_;
};

class Init_Point_u
{
public:
  Init_Point_u()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Point_v u(::tracked_lane_msgs::msg::Point::_u_type arg)
  {
    msg_.u = std::move(arg);
    return Init_Point_v(msg_);
  }

private:
  ::tracked_lane_msgs::msg::Point msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tracked_lane_msgs::msg::Point>()
{
  return tracked_lane_msgs::msg::builder::Init_Point_u();
}

}  // namespace tracked_lane_msgs

#endif  // TRACKED_LANE_MSGS__MSG__DETAIL__POINT__BUILDER_HPP_
