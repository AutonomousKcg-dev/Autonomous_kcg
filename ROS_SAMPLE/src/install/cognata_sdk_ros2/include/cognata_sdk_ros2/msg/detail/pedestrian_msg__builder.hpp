// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cognata_sdk_ros2:msg/PedestrianMsg.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__PEDESTRIAN_MSG__BUILDER_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__PEDESTRIAN_MSG__BUILDER_HPP_

#include "cognata_sdk_ros2/msg/detail/pedestrian_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cognata_sdk_ros2
{

namespace msg
{

namespace builder
{

class Init_PedestrianMsg_pedestrian_velocity
{
public:
  explicit Init_PedestrianMsg_pedestrian_velocity(::cognata_sdk_ros2::msg::PedestrianMsg & msg)
  : msg_(msg)
  {}
  ::cognata_sdk_ros2::msg::PedestrianMsg pedestrian_velocity(::cognata_sdk_ros2::msg::PedestrianMsg::_pedestrian_velocity_type arg)
  {
    msg_.pedestrian_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::PedestrianMsg msg_;
};

class Init_PedestrianMsg_description
{
public:
  explicit Init_PedestrianMsg_description(::cognata_sdk_ros2::msg::PedestrianMsg & msg)
  : msg_(msg)
  {}
  Init_PedestrianMsg_pedestrian_velocity description(::cognata_sdk_ros2::msg::PedestrianMsg::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_PedestrianMsg_pedestrian_velocity(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::PedestrianMsg msg_;
};

class Init_PedestrianMsg_header
{
public:
  Init_PedestrianMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PedestrianMsg_description header(::cognata_sdk_ros2::msg::PedestrianMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PedestrianMsg_description(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::PedestrianMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cognata_sdk_ros2::msg::PedestrianMsg>()
{
  return cognata_sdk_ros2::msg::builder::Init_PedestrianMsg_header();
}

}  // namespace cognata_sdk_ros2

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__PEDESTRIAN_MSG__BUILDER_HPP_
