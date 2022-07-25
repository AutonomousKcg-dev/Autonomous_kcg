// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cognata_sdk_ros2:msg/ROIAndDOGTOutput.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cognata_sdk_ros2/msg/detail/roi_and_dogt_output__rosidl_typesupport_introspection_c.h"
#include "cognata_sdk_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cognata_sdk_ros2/msg/detail/roi_and_dogt_output__functions.h"
#include "cognata_sdk_ros2/msg/detail/roi_and_dogt_output__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `other_list`
#include "cognata_sdk_ros2/msg/object_description.h"
// Member `other_list`
#include "cognata_sdk_ros2/msg/detail/object_description__rosidl_typesupport_introspection_c.h"
// Member `annotation_list`
#include "cognata_sdk_ros2/msg/annotation_msg.h"
// Member `annotation_list`
#include "cognata_sdk_ros2/msg/detail/annotation_msg__rosidl_typesupport_introspection_c.h"
// Member `pedestrian_list`
#include "cognata_sdk_ros2/msg/pedestrian_msg.h"
// Member `pedestrian_list`
#include "cognata_sdk_ros2/msg/detail/pedestrian_msg__rosidl_typesupport_introspection_c.h"
// Member `vehicle_list`
#include "cognata_sdk_ros2/msg/vehicle_msg.h"
// Member `vehicle_list`
#include "cognata_sdk_ros2/msg/detail/vehicle_msg__rosidl_typesupport_introspection_c.h"
// Member `traffic_light_list`
#include "cognata_sdk_ros2/msg/traffic_light_msg.h"
// Member `traffic_light_list`
#include "cognata_sdk_ros2/msg/detail/traffic_light_msg__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ROIAndDOGTOutput__rosidl_typesupport_introspection_c__ROIAndDOGTOutput_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cognata_sdk_ros2__msg__ROIAndDOGTOutput__init(message_memory);
}

void ROIAndDOGTOutput__rosidl_typesupport_introspection_c__ROIAndDOGTOutput_fini_function(void * message_memory)
{
  cognata_sdk_ros2__msg__ROIAndDOGTOutput__fini(message_memory);
}

size_t ROIAndDOGTOutput__rosidl_typesupport_introspection_c__size_function__ObjectDescription__other_list(
  const void * untyped_member)
{
  const cognata_sdk_ros2__msg__ObjectDescription__Sequence * member =
    (const cognata_sdk_ros2__msg__ObjectDescription__Sequence *)(untyped_member);
  return member->size;
}

const void * ROIAndDOGTOutput__rosidl_typesupport_introspection_c__get_const_function__ObjectDescription__other_list(
  const void * untyped_member, size_t index)
{
  const cognata_sdk_ros2__msg__ObjectDescription__Sequence * member =
    (const cognata_sdk_ros2__msg__ObjectDescription__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ROIAndDOGTOutput__rosidl_typesupport_introspection_c__get_function__ObjectDescription__other_list(
  void * untyped_member, size_t index)
{
  cognata_sdk_ros2__msg__ObjectDescription__Sequence * member =
    (cognata_sdk_ros2__msg__ObjectDescription__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ROIAndDOGTOutput__rosidl_typesupport_introspection_c__resize_function__ObjectDescription__other_list(
  void * untyped_member, size_t size)
{
  cognata_sdk_ros2__msg__ObjectDescription__Sequence * member =
    (cognata_sdk_ros2__msg__ObjectDescription__Sequence *)(untyped_member);
  cognata_sdk_ros2__msg__ObjectDescription__Sequence__fini(member);
  return cognata_sdk_ros2__msg__ObjectDescription__Sequence__init(member, size);
}

size_t ROIAndDOGTOutput__rosidl_typesupport_introspection_c__size_function__AnnotationMsg__annotation_list(
  const void * untyped_member)
{
  const cognata_sdk_ros2__msg__AnnotationMsg__Sequence * member =
    (const cognata_sdk_ros2__msg__AnnotationMsg__Sequence *)(untyped_member);
  return member->size;
}

const void * ROIAndDOGTOutput__rosidl_typesupport_introspection_c__get_const_function__AnnotationMsg__annotation_list(
  const void * untyped_member, size_t index)
{
  const cognata_sdk_ros2__msg__AnnotationMsg__Sequence * member =
    (const cognata_sdk_ros2__msg__AnnotationMsg__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ROIAndDOGTOutput__rosidl_typesupport_introspection_c__get_function__AnnotationMsg__annotation_list(
  void * untyped_member, size_t index)
{
  cognata_sdk_ros2__msg__AnnotationMsg__Sequence * member =
    (cognata_sdk_ros2__msg__AnnotationMsg__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ROIAndDOGTOutput__rosidl_typesupport_introspection_c__resize_function__AnnotationMsg__annotation_list(
  void * untyped_member, size_t size)
{
  cognata_sdk_ros2__msg__AnnotationMsg__Sequence * member =
    (cognata_sdk_ros2__msg__AnnotationMsg__Sequence *)(untyped_member);
  cognata_sdk_ros2__msg__AnnotationMsg__Sequence__fini(member);
  return cognata_sdk_ros2__msg__AnnotationMsg__Sequence__init(member, size);
}

size_t ROIAndDOGTOutput__rosidl_typesupport_introspection_c__size_function__PedestrianMsg__pedestrian_list(
  const void * untyped_member)
{
  const cognata_sdk_ros2__msg__PedestrianMsg__Sequence * member =
    (const cognata_sdk_ros2__msg__PedestrianMsg__Sequence *)(untyped_member);
  return member->size;
}

const void * ROIAndDOGTOutput__rosidl_typesupport_introspection_c__get_const_function__PedestrianMsg__pedestrian_list(
  const void * untyped_member, size_t index)
{
  const cognata_sdk_ros2__msg__PedestrianMsg__Sequence * member =
    (const cognata_sdk_ros2__msg__PedestrianMsg__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ROIAndDOGTOutput__rosidl_typesupport_introspection_c__get_function__PedestrianMsg__pedestrian_list(
  void * untyped_member, size_t index)
{
  cognata_sdk_ros2__msg__PedestrianMsg__Sequence * member =
    (cognata_sdk_ros2__msg__PedestrianMsg__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ROIAndDOGTOutput__rosidl_typesupport_introspection_c__resize_function__PedestrianMsg__pedestrian_list(
  void * untyped_member, size_t size)
{
  cognata_sdk_ros2__msg__PedestrianMsg__Sequence * member =
    (cognata_sdk_ros2__msg__PedestrianMsg__Sequence *)(untyped_member);
  cognata_sdk_ros2__msg__PedestrianMsg__Sequence__fini(member);
  return cognata_sdk_ros2__msg__PedestrianMsg__Sequence__init(member, size);
}

size_t ROIAndDOGTOutput__rosidl_typesupport_introspection_c__size_function__VehicleMsg__vehicle_list(
  const void * untyped_member)
{
  const cognata_sdk_ros2__msg__VehicleMsg__Sequence * member =
    (const cognata_sdk_ros2__msg__VehicleMsg__Sequence *)(untyped_member);
  return member->size;
}

const void * ROIAndDOGTOutput__rosidl_typesupport_introspection_c__get_const_function__VehicleMsg__vehicle_list(
  const void * untyped_member, size_t index)
{
  const cognata_sdk_ros2__msg__VehicleMsg__Sequence * member =
    (const cognata_sdk_ros2__msg__VehicleMsg__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ROIAndDOGTOutput__rosidl_typesupport_introspection_c__get_function__VehicleMsg__vehicle_list(
  void * untyped_member, size_t index)
{
  cognata_sdk_ros2__msg__VehicleMsg__Sequence * member =
    (cognata_sdk_ros2__msg__VehicleMsg__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ROIAndDOGTOutput__rosidl_typesupport_introspection_c__resize_function__VehicleMsg__vehicle_list(
  void * untyped_member, size_t size)
{
  cognata_sdk_ros2__msg__VehicleMsg__Sequence * member =
    (cognata_sdk_ros2__msg__VehicleMsg__Sequence *)(untyped_member);
  cognata_sdk_ros2__msg__VehicleMsg__Sequence__fini(member);
  return cognata_sdk_ros2__msg__VehicleMsg__Sequence__init(member, size);
}

size_t ROIAndDOGTOutput__rosidl_typesupport_introspection_c__size_function__TrafficLightMsg__traffic_light_list(
  const void * untyped_member)
{
  const cognata_sdk_ros2__msg__TrafficLightMsg__Sequence * member =
    (const cognata_sdk_ros2__msg__TrafficLightMsg__Sequence *)(untyped_member);
  return member->size;
}

const void * ROIAndDOGTOutput__rosidl_typesupport_introspection_c__get_const_function__TrafficLightMsg__traffic_light_list(
  const void * untyped_member, size_t index)
{
  const cognata_sdk_ros2__msg__TrafficLightMsg__Sequence * member =
    (const cognata_sdk_ros2__msg__TrafficLightMsg__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ROIAndDOGTOutput__rosidl_typesupport_introspection_c__get_function__TrafficLightMsg__traffic_light_list(
  void * untyped_member, size_t index)
{
  cognata_sdk_ros2__msg__TrafficLightMsg__Sequence * member =
    (cognata_sdk_ros2__msg__TrafficLightMsg__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ROIAndDOGTOutput__rosidl_typesupport_introspection_c__resize_function__TrafficLightMsg__traffic_light_list(
  void * untyped_member, size_t size)
{
  cognata_sdk_ros2__msg__TrafficLightMsg__Sequence * member =
    (cognata_sdk_ros2__msg__TrafficLightMsg__Sequence *)(untyped_member);
  cognata_sdk_ros2__msg__TrafficLightMsg__Sequence__fini(member);
  return cognata_sdk_ros2__msg__TrafficLightMsg__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ROIAndDOGTOutput__rosidl_typesupport_introspection_c__ROIAndDOGTOutput_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__ROIAndDOGTOutput, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "other_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__ROIAndDOGTOutput, other_list),  // bytes offset in struct
    NULL,  // default value
    ROIAndDOGTOutput__rosidl_typesupport_introspection_c__size_function__ObjectDescription__other_list,  // size() function pointer
    ROIAndDOGTOutput__rosidl_typesupport_introspection_c__get_const_function__ObjectDescription__other_list,  // get_const(index) function pointer
    ROIAndDOGTOutput__rosidl_typesupport_introspection_c__get_function__ObjectDescription__other_list,  // get(index) function pointer
    ROIAndDOGTOutput__rosidl_typesupport_introspection_c__resize_function__ObjectDescription__other_list  // resize(index) function pointer
  },
  {
    "annotation_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__ROIAndDOGTOutput, annotation_list),  // bytes offset in struct
    NULL,  // default value
    ROIAndDOGTOutput__rosidl_typesupport_introspection_c__size_function__AnnotationMsg__annotation_list,  // size() function pointer
    ROIAndDOGTOutput__rosidl_typesupport_introspection_c__get_const_function__AnnotationMsg__annotation_list,  // get_const(index) function pointer
    ROIAndDOGTOutput__rosidl_typesupport_introspection_c__get_function__AnnotationMsg__annotation_list,  // get(index) function pointer
    ROIAndDOGTOutput__rosidl_typesupport_introspection_c__resize_function__AnnotationMsg__annotation_list  // resize(index) function pointer
  },
  {
    "pedestrian_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__ROIAndDOGTOutput, pedestrian_list),  // bytes offset in struct
    NULL,  // default value
    ROIAndDOGTOutput__rosidl_typesupport_introspection_c__size_function__PedestrianMsg__pedestrian_list,  // size() function pointer
    ROIAndDOGTOutput__rosidl_typesupport_introspection_c__get_const_function__PedestrianMsg__pedestrian_list,  // get_const(index) function pointer
    ROIAndDOGTOutput__rosidl_typesupport_introspection_c__get_function__PedestrianMsg__pedestrian_list,  // get(index) function pointer
    ROIAndDOGTOutput__rosidl_typesupport_introspection_c__resize_function__PedestrianMsg__pedestrian_list  // resize(index) function pointer
  },
  {
    "vehicle_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__ROIAndDOGTOutput, vehicle_list),  // bytes offset in struct
    NULL,  // default value
    ROIAndDOGTOutput__rosidl_typesupport_introspection_c__size_function__VehicleMsg__vehicle_list,  // size() function pointer
    ROIAndDOGTOutput__rosidl_typesupport_introspection_c__get_const_function__VehicleMsg__vehicle_list,  // get_const(index) function pointer
    ROIAndDOGTOutput__rosidl_typesupport_introspection_c__get_function__VehicleMsg__vehicle_list,  // get(index) function pointer
    ROIAndDOGTOutput__rosidl_typesupport_introspection_c__resize_function__VehicleMsg__vehicle_list  // resize(index) function pointer
  },
  {
    "traffic_light_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cognata_sdk_ros2__msg__ROIAndDOGTOutput, traffic_light_list),  // bytes offset in struct
    NULL,  // default value
    ROIAndDOGTOutput__rosidl_typesupport_introspection_c__size_function__TrafficLightMsg__traffic_light_list,  // size() function pointer
    ROIAndDOGTOutput__rosidl_typesupport_introspection_c__get_const_function__TrafficLightMsg__traffic_light_list,  // get_const(index) function pointer
    ROIAndDOGTOutput__rosidl_typesupport_introspection_c__get_function__TrafficLightMsg__traffic_light_list,  // get(index) function pointer
    ROIAndDOGTOutput__rosidl_typesupport_introspection_c__resize_function__TrafficLightMsg__traffic_light_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ROIAndDOGTOutput__rosidl_typesupport_introspection_c__ROIAndDOGTOutput_message_members = {
  "cognata_sdk_ros2__msg",  // message namespace
  "ROIAndDOGTOutput",  // message name
  6,  // number of fields
  sizeof(cognata_sdk_ros2__msg__ROIAndDOGTOutput),
  ROIAndDOGTOutput__rosidl_typesupport_introspection_c__ROIAndDOGTOutput_message_member_array,  // message members
  ROIAndDOGTOutput__rosidl_typesupport_introspection_c__ROIAndDOGTOutput_init_function,  // function to initialize message memory (memory has to be allocated)
  ROIAndDOGTOutput__rosidl_typesupport_introspection_c__ROIAndDOGTOutput_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ROIAndDOGTOutput__rosidl_typesupport_introspection_c__ROIAndDOGTOutput_message_type_support_handle = {
  0,
  &ROIAndDOGTOutput__rosidl_typesupport_introspection_c__ROIAndDOGTOutput_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cognata_sdk_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cognata_sdk_ros2, msg, ROIAndDOGTOutput)() {
  ROIAndDOGTOutput__rosidl_typesupport_introspection_c__ROIAndDOGTOutput_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ROIAndDOGTOutput__rosidl_typesupport_introspection_c__ROIAndDOGTOutput_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cognata_sdk_ros2, msg, ObjectDescription)();
  ROIAndDOGTOutput__rosidl_typesupport_introspection_c__ROIAndDOGTOutput_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cognata_sdk_ros2, msg, AnnotationMsg)();
  ROIAndDOGTOutput__rosidl_typesupport_introspection_c__ROIAndDOGTOutput_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cognata_sdk_ros2, msg, PedestrianMsg)();
  ROIAndDOGTOutput__rosidl_typesupport_introspection_c__ROIAndDOGTOutput_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cognata_sdk_ros2, msg, VehicleMsg)();
  ROIAndDOGTOutput__rosidl_typesupport_introspection_c__ROIAndDOGTOutput_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cognata_sdk_ros2, msg, TrafficLightMsg)();
  if (!ROIAndDOGTOutput__rosidl_typesupport_introspection_c__ROIAndDOGTOutput_message_type_support_handle.typesupport_identifier) {
    ROIAndDOGTOutput__rosidl_typesupport_introspection_c__ROIAndDOGTOutput_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ROIAndDOGTOutput__rosidl_typesupport_introspection_c__ROIAndDOGTOutput_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
