// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_msgs:msg/PointClusters.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MSGS__MSG__DETAIL__POINT_CLUSTERS__BUILDER_HPP_
#define AUTOWARE_AUTO_MSGS__MSG__DETAIL__POINT_CLUSTERS__BUILDER_HPP_

#include "autoware_auto_msgs/msg/detail/point_clusters__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autoware_auto_msgs
{

namespace msg
{

namespace builder
{

class Init_PointClusters_clusters
{
public:
  Init_PointClusters_clusters()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autoware_auto_msgs::msg::PointClusters clusters(::autoware_auto_msgs::msg::PointClusters::_clusters_type arg)
  {
    msg_.clusters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_msgs::msg::PointClusters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_msgs::msg::PointClusters>()
{
  return autoware_auto_msgs::msg::builder::Init_PointClusters_clusters();
}

}  // namespace autoware_auto_msgs

#endif  // AUTOWARE_AUTO_MSGS__MSG__DETAIL__POINT_CLUSTERS__BUILDER_HPP_
