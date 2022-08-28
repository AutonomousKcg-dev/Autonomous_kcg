// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tracked_object_msgs:msg/ObjectTypes.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tracked_object_msgs/msg/detail/object_types__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tracked_object_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ObjectTypes_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tracked_object_msgs::msg::ObjectTypes(_init);
}

void ObjectTypes_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tracked_object_msgs::msg::ObjectTypes *>(message_memory);
  typed_message->~ObjectTypes();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ObjectTypes_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tracked_object_msgs::msg::ObjectTypes, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ObjectTypes_message_members = {
  "tracked_object_msgs::msg",  // message namespace
  "ObjectTypes",  // message name
  1,  // number of fields
  sizeof(tracked_object_msgs::msg::ObjectTypes),
  ObjectTypes_message_member_array,  // message members
  ObjectTypes_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectTypes_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ObjectTypes_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ObjectTypes_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tracked_object_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tracked_object_msgs::msg::ObjectTypes>()
{
  return &::tracked_object_msgs::msg::rosidl_typesupport_introspection_cpp::ObjectTypes_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tracked_object_msgs, msg, ObjectTypes)() {
  return &::tracked_object_msgs::msg::rosidl_typesupport_introspection_cpp::ObjectTypes_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
