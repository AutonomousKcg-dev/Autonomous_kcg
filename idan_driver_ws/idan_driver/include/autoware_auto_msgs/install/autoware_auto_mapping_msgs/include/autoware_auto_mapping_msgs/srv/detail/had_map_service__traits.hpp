// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_mapping_msgs:srv/HADMapService.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MAPPING_MSGS__SRV__DETAIL__HAD_MAP_SERVICE__TRAITS_HPP_
#define AUTOWARE_AUTO_MAPPING_MSGS__SRV__DETAIL__HAD_MAP_SERVICE__TRAITS_HPP_

#include "autoware_auto_mapping_msgs/srv/detail/had_map_service__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_mapping_msgs::srv::HADMapService_Request>()
{
  return "autoware_auto_mapping_msgs::srv::HADMapService_Request";
}

template<>
inline const char * name<autoware_auto_mapping_msgs::srv::HADMapService_Request>()
{
  return "autoware_auto_mapping_msgs/srv/HADMapService_Request";
}

template<>
struct has_fixed_size<autoware_auto_mapping_msgs::srv::HADMapService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_mapping_msgs::srv::HADMapService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_auto_mapping_msgs::srv::HADMapService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'map'
#include "autoware_auto_mapping_msgs/msg/detail/had_map_bin__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_mapping_msgs::srv::HADMapService_Response>()
{
  return "autoware_auto_mapping_msgs::srv::HADMapService_Response";
}

template<>
inline const char * name<autoware_auto_mapping_msgs::srv::HADMapService_Response>()
{
  return "autoware_auto_mapping_msgs/srv/HADMapService_Response";
}

template<>
struct has_fixed_size<autoware_auto_mapping_msgs::srv::HADMapService_Response>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_mapping_msgs::msg::HADMapBin>::value> {};

template<>
struct has_bounded_size<autoware_auto_mapping_msgs::srv::HADMapService_Response>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_mapping_msgs::msg::HADMapBin>::value> {};

template<>
struct is_message<autoware_auto_mapping_msgs::srv::HADMapService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_mapping_msgs::srv::HADMapService>()
{
  return "autoware_auto_mapping_msgs::srv::HADMapService";
}

template<>
inline const char * name<autoware_auto_mapping_msgs::srv::HADMapService>()
{
  return "autoware_auto_mapping_msgs/srv/HADMapService";
}

template<>
struct has_fixed_size<autoware_auto_mapping_msgs::srv::HADMapService>
  : std::integral_constant<
    bool,
    has_fixed_size<autoware_auto_mapping_msgs::srv::HADMapService_Request>::value &&
    has_fixed_size<autoware_auto_mapping_msgs::srv::HADMapService_Response>::value
  >
{
};

template<>
struct has_bounded_size<autoware_auto_mapping_msgs::srv::HADMapService>
  : std::integral_constant<
    bool,
    has_bounded_size<autoware_auto_mapping_msgs::srv::HADMapService_Request>::value &&
    has_bounded_size<autoware_auto_mapping_msgs::srv::HADMapService_Response>::value
  >
{
};

template<>
struct is_service<autoware_auto_mapping_msgs::srv::HADMapService>
  : std::true_type
{
};

template<>
struct is_service_request<autoware_auto_mapping_msgs::srv::HADMapService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autoware_auto_mapping_msgs::srv::HADMapService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_MAPPING_MSGS__SRV__DETAIL__HAD_MAP_SERVICE__TRAITS_HPP_
