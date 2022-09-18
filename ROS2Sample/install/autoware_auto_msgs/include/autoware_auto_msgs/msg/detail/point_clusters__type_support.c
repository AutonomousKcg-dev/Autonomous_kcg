// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_msgs:msg/PointClusters.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_msgs/msg/detail/point_clusters__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_msgs/msg/detail/point_clusters__functions.h"
#include "autoware_auto_msgs/msg/detail/point_clusters__struct.h"


// Include directives for member types
// Member `clusters`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `clusters`
#include "sensor_msgs/msg/detail/point_cloud2__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PointClusters__rosidl_typesupport_introspection_c__PointClusters_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_msgs__msg__PointClusters__init(message_memory);
}

void PointClusters__rosidl_typesupport_introspection_c__PointClusters_fini_function(void * message_memory)
{
  autoware_auto_msgs__msg__PointClusters__fini(message_memory);
}

size_t PointClusters__rosidl_typesupport_introspection_c__size_function__PointCloud2__clusters(
  const void * untyped_member)
{
  const sensor_msgs__msg__PointCloud2__Sequence * member =
    (const sensor_msgs__msg__PointCloud2__Sequence *)(untyped_member);
  return member->size;
}

const void * PointClusters__rosidl_typesupport_introspection_c__get_const_function__PointCloud2__clusters(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__PointCloud2__Sequence * member =
    (const sensor_msgs__msg__PointCloud2__Sequence *)(untyped_member);
  return &member->data[index];
}

void * PointClusters__rosidl_typesupport_introspection_c__get_function__PointCloud2__clusters(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__PointCloud2__Sequence * member =
    (sensor_msgs__msg__PointCloud2__Sequence *)(untyped_member);
  return &member->data[index];
}

bool PointClusters__rosidl_typesupport_introspection_c__resize_function__PointCloud2__clusters(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__PointCloud2__Sequence * member =
    (sensor_msgs__msg__PointCloud2__Sequence *)(untyped_member);
  sensor_msgs__msg__PointCloud2__Sequence__fini(member);
  return sensor_msgs__msg__PointCloud2__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember PointClusters__rosidl_typesupport_introspection_c__PointClusters_message_member_array[1] = {
  {
    "clusters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_msgs__msg__PointClusters, clusters),  // bytes offset in struct
    NULL,  // default value
    PointClusters__rosidl_typesupport_introspection_c__size_function__PointCloud2__clusters,  // size() function pointer
    PointClusters__rosidl_typesupport_introspection_c__get_const_function__PointCloud2__clusters,  // get_const(index) function pointer
    PointClusters__rosidl_typesupport_introspection_c__get_function__PointCloud2__clusters,  // get(index) function pointer
    PointClusters__rosidl_typesupport_introspection_c__resize_function__PointCloud2__clusters  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PointClusters__rosidl_typesupport_introspection_c__PointClusters_message_members = {
  "autoware_auto_msgs__msg",  // message namespace
  "PointClusters",  // message name
  1,  // number of fields
  sizeof(autoware_auto_msgs__msg__PointClusters),
  PointClusters__rosidl_typesupport_introspection_c__PointClusters_message_member_array,  // message members
  PointClusters__rosidl_typesupport_introspection_c__PointClusters_init_function,  // function to initialize message memory (memory has to be allocated)
  PointClusters__rosidl_typesupport_introspection_c__PointClusters_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PointClusters__rosidl_typesupport_introspection_c__PointClusters_message_type_support_handle = {
  0,
  &PointClusters__rosidl_typesupport_introspection_c__PointClusters_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_msgs, msg, PointClusters)() {
  PointClusters__rosidl_typesupport_introspection_c__PointClusters_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  if (!PointClusters__rosidl_typesupport_introspection_c__PointClusters_message_type_support_handle.typesupport_identifier) {
    PointClusters__rosidl_typesupport_introspection_c__PointClusters_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PointClusters__rosidl_typesupport_introspection_c__PointClusters_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
