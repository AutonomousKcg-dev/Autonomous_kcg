// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cognata_sdk_ros2:msg/ROIAndDOGTOutput.idl
// generated code does not contain a copyright notice

#ifndef COGNATA_SDK_ROS2__MSG__DETAIL__ROI_AND_DOGT_OUTPUT__BUILDER_HPP_
#define COGNATA_SDK_ROS2__MSG__DETAIL__ROI_AND_DOGT_OUTPUT__BUILDER_HPP_

#include "cognata_sdk_ros2/msg/detail/roi_and_dogt_output__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cognata_sdk_ros2
{

namespace msg
{

namespace builder
{

class Init_ROIAndDOGTOutput_traffic_light_list
{
public:
  explicit Init_ROIAndDOGTOutput_traffic_light_list(::cognata_sdk_ros2::msg::ROIAndDOGTOutput & msg)
  : msg_(msg)
  {}
  ::cognata_sdk_ros2::msg::ROIAndDOGTOutput traffic_light_list(::cognata_sdk_ros2::msg::ROIAndDOGTOutput::_traffic_light_list_type arg)
  {
    msg_.traffic_light_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::ROIAndDOGTOutput msg_;
};

class Init_ROIAndDOGTOutput_vehicle_list
{
public:
  explicit Init_ROIAndDOGTOutput_vehicle_list(::cognata_sdk_ros2::msg::ROIAndDOGTOutput & msg)
  : msg_(msg)
  {}
  Init_ROIAndDOGTOutput_traffic_light_list vehicle_list(::cognata_sdk_ros2::msg::ROIAndDOGTOutput::_vehicle_list_type arg)
  {
    msg_.vehicle_list = std::move(arg);
    return Init_ROIAndDOGTOutput_traffic_light_list(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::ROIAndDOGTOutput msg_;
};

class Init_ROIAndDOGTOutput_pedestrian_list
{
public:
  explicit Init_ROIAndDOGTOutput_pedestrian_list(::cognata_sdk_ros2::msg::ROIAndDOGTOutput & msg)
  : msg_(msg)
  {}
  Init_ROIAndDOGTOutput_vehicle_list pedestrian_list(::cognata_sdk_ros2::msg::ROIAndDOGTOutput::_pedestrian_list_type arg)
  {
    msg_.pedestrian_list = std::move(arg);
    return Init_ROIAndDOGTOutput_vehicle_list(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::ROIAndDOGTOutput msg_;
};

class Init_ROIAndDOGTOutput_annotation_list
{
public:
  explicit Init_ROIAndDOGTOutput_annotation_list(::cognata_sdk_ros2::msg::ROIAndDOGTOutput & msg)
  : msg_(msg)
  {}
  Init_ROIAndDOGTOutput_pedestrian_list annotation_list(::cognata_sdk_ros2::msg::ROIAndDOGTOutput::_annotation_list_type arg)
  {
    msg_.annotation_list = std::move(arg);
    return Init_ROIAndDOGTOutput_pedestrian_list(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::ROIAndDOGTOutput msg_;
};

class Init_ROIAndDOGTOutput_other_list
{
public:
  explicit Init_ROIAndDOGTOutput_other_list(::cognata_sdk_ros2::msg::ROIAndDOGTOutput & msg)
  : msg_(msg)
  {}
  Init_ROIAndDOGTOutput_annotation_list other_list(::cognata_sdk_ros2::msg::ROIAndDOGTOutput::_other_list_type arg)
  {
    msg_.other_list = std::move(arg);
    return Init_ROIAndDOGTOutput_annotation_list(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::ROIAndDOGTOutput msg_;
};

class Init_ROIAndDOGTOutput_header
{
public:
  Init_ROIAndDOGTOutput_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ROIAndDOGTOutput_other_list header(::cognata_sdk_ros2::msg::ROIAndDOGTOutput::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ROIAndDOGTOutput_other_list(msg_);
  }

private:
  ::cognata_sdk_ros2::msg::ROIAndDOGTOutput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cognata_sdk_ros2::msg::ROIAndDOGTOutput>()
{
  return cognata_sdk_ros2::msg::builder::Init_ROIAndDOGTOutput_header();
}

}  // namespace cognata_sdk_ros2

#endif  // COGNATA_SDK_ROS2__MSG__DETAIL__ROI_AND_DOGT_OUTPUT__BUILDER_HPP_
