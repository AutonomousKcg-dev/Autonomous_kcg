// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cognata_sdk_ros2:msg/ROIAndDOGTOutput.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cognata_sdk_ros2/msg/detail/roi_and_dogt_output__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cognata_sdk_ros2
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ROIAndDOGTOutput_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cognata_sdk_ros2::msg::ROIAndDOGTOutput(_init);
}

void ROIAndDOGTOutput_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cognata_sdk_ros2::msg::ROIAndDOGTOutput *>(message_memory);
  typed_message->~ROIAndDOGTOutput();
}

size_t size_function__ROIAndDOGTOutput__other_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<cognata_sdk_ros2::msg::ObjectDescription> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ROIAndDOGTOutput__other_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<cognata_sdk_ros2::msg::ObjectDescription> *>(untyped_member);
  return &member[index];
}

void * get_function__ROIAndDOGTOutput__other_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<cognata_sdk_ros2::msg::ObjectDescription> *>(untyped_member);
  return &member[index];
}

void resize_function__ROIAndDOGTOutput__other_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<cognata_sdk_ros2::msg::ObjectDescription> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ROIAndDOGTOutput__annotation_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<cognata_sdk_ros2::msg::AnnotationMsg> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ROIAndDOGTOutput__annotation_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<cognata_sdk_ros2::msg::AnnotationMsg> *>(untyped_member);
  return &member[index];
}

void * get_function__ROIAndDOGTOutput__annotation_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<cognata_sdk_ros2::msg::AnnotationMsg> *>(untyped_member);
  return &member[index];
}

void resize_function__ROIAndDOGTOutput__annotation_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<cognata_sdk_ros2::msg::AnnotationMsg> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ROIAndDOGTOutput__pedestrian_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<cognata_sdk_ros2::msg::PedestrianMsg> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ROIAndDOGTOutput__pedestrian_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<cognata_sdk_ros2::msg::PedestrianMsg> *>(untyped_member);
  return &member[index];
}

void * get_function__ROIAndDOGTOutput__pedestrian_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<cognata_sdk_ros2::msg::PedestrianMsg> *>(untyped_member);
  return &member[index];
}

void resize_function__ROIAndDOGTOutput__pedestrian_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<cognata_sdk_ros2::msg::PedestrianMsg> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ROIAndDOGTOutput__vehicle_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<cognata_sdk_ros2::msg::VehicleMsg> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ROIAndDOGTOutput__vehicle_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<cognata_sdk_ros2::msg::VehicleMsg> *>(untyped_member);
  return &member[index];
}

void * get_function__ROIAndDOGTOutput__vehicle_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<cognata_sdk_ros2::msg::VehicleMsg> *>(untyped_member);
  return &member[index];
}

void resize_function__ROIAndDOGTOutput__vehicle_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<cognata_sdk_ros2::msg::VehicleMsg> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ROIAndDOGTOutput__traffic_light_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<cognata_sdk_ros2::msg::TrafficLightMsg> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ROIAndDOGTOutput__traffic_light_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<cognata_sdk_ros2::msg::TrafficLightMsg> *>(untyped_member);
  return &member[index];
}

void * get_function__ROIAndDOGTOutput__traffic_light_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<cognata_sdk_ros2::msg::TrafficLightMsg> *>(untyped_member);
  return &member[index];
}

void resize_function__ROIAndDOGTOutput__traffic_light_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<cognata_sdk_ros2::msg::TrafficLightMsg> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ROIAndDOGTOutput_message_member_array[6] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2::msg::ROIAndDOGTOutput, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "other_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cognata_sdk_ros2::msg::ObjectDescription>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2::msg::ROIAndDOGTOutput, other_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__ROIAndDOGTOutput__other_list,  // size() function pointer
    get_const_function__ROIAndDOGTOutput__other_list,  // get_const(index) function pointer
    get_function__ROIAndDOGTOutput__other_list,  // get(index) function pointer
    resize_function__ROIAndDOGTOutput__other_list  // resize(index) function pointer
  },
  {
    "annotation_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cognata_sdk_ros2::msg::AnnotationMsg>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2::msg::ROIAndDOGTOutput, annotation_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__ROIAndDOGTOutput__annotation_list,  // size() function pointer
    get_const_function__ROIAndDOGTOutput__annotation_list,  // get_const(index) function pointer
    get_function__ROIAndDOGTOutput__annotation_list,  // get(index) function pointer
    resize_function__ROIAndDOGTOutput__annotation_list  // resize(index) function pointer
  },
  {
    "pedestrian_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cognata_sdk_ros2::msg::PedestrianMsg>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2::msg::ROIAndDOGTOutput, pedestrian_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__ROIAndDOGTOutput__pedestrian_list,  // size() function pointer
    get_const_function__ROIAndDOGTOutput__pedestrian_list,  // get_const(index) function pointer
    get_function__ROIAndDOGTOutput__pedestrian_list,  // get(index) function pointer
    resize_function__ROIAndDOGTOutput__pedestrian_list  // resize(index) function pointer
  },
  {
    "vehicle_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cognata_sdk_ros2::msg::VehicleMsg>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2::msg::ROIAndDOGTOutput, vehicle_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__ROIAndDOGTOutput__vehicle_list,  // size() function pointer
    get_const_function__ROIAndDOGTOutput__vehicle_list,  // get_const(index) function pointer
    get_function__ROIAndDOGTOutput__vehicle_list,  // get(index) function pointer
    resize_function__ROIAndDOGTOutput__vehicle_list  // resize(index) function pointer
  },
  {
    "traffic_light_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cognata_sdk_ros2::msg::TrafficLightMsg>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2::msg::ROIAndDOGTOutput, traffic_light_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__ROIAndDOGTOutput__traffic_light_list,  // size() function pointer
    get_const_function__ROIAndDOGTOutput__traffic_light_list,  // get_const(index) function pointer
    get_function__ROIAndDOGTOutput__traffic_light_list,  // get(index) function pointer
    resize_function__ROIAndDOGTOutput__traffic_light_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ROIAndDOGTOutput_message_members = {
  "cognata_sdk_ros2::msg",  // message namespace
  "ROIAndDOGTOutput",  // message name
  6,  // number of fields
  sizeof(cognata_sdk_ros2::msg::ROIAndDOGTOutput),
  ROIAndDOGTOutput_message_member_array,  // message members
  ROIAndDOGTOutput_init_function,  // function to initialize message memory (memory has to be allocated)
  ROIAndDOGTOutput_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ROIAndDOGTOutput_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ROIAndDOGTOutput_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cognata_sdk_ros2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cognata_sdk_ros2::msg::ROIAndDOGTOutput>()
{
  return &::cognata_sdk_ros2::msg::rosidl_typesupport_introspection_cpp::ROIAndDOGTOutput_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cognata_sdk_ros2, msg, ROIAndDOGTOutput)() {
  return &::cognata_sdk_ros2::msg::rosidl_typesupport_introspection_cpp::ROIAndDOGTOutput_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
