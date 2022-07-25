// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from cognata_sdk_ros2:msg/VehicleMsg.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "cognata_sdk_ros2/msg/detail/vehicle_msg__struct.h"
#include "cognata_sdk_ros2/msg/detail/vehicle_msg__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "cognata_sdk_ros2/msg/detail/wheel_msg__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool cognata_sdk_ros2__msg__object_description__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cognata_sdk_ros2__msg__object_description__convert_to_py(void * raw_ros_message);
bool cognata_sdk_ros2__msg__wheel_msg__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cognata_sdk_ros2__msg__wheel_msg__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool cognata_sdk_ros2__msg__vehicle_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("cognata_sdk_ros2.msg._vehicle_msg.VehicleMsg", full_classname_dest, 44) == 0);
  }
  cognata_sdk_ros2__msg__VehicleMsg * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // description
    PyObject * field = PyObject_GetAttrString(_pymsg, "description");
    if (!field) {
      return false;
    }
    if (!cognata_sdk_ros2__msg__object_description__convert_from_py(field, &ros_message->description)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // vehicle_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->vehicle_type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // vehicle_role
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_role");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->vehicle_role, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // navigation_segment
    PyObject * field = PyObject_GetAttrString(_pymsg, "navigation_segment");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->navigation_segment, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // lane_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->lane_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // lanes_from_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanes_from_left");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->lanes_from_left, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // head_light_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "head_light_state");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->head_light_state = (Py_True == field);
    Py_DECREF(field);
  }
  {  // brake_light_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_light_state");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->brake_light_state = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reverse_light_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "reverse_light_state");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reverse_light_state = (Py_True == field);
    Py_DECREF(field);
  }
  {  // signal_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "signal_state");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->signal_state, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // signal_light
    PyObject * field = PyObject_GetAttrString(_pymsg, "signal_light");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->signal_light, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // wheels
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheels");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'wheels'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!cognata_sdk_ros2__msg__WheelMsg__Sequence__init(&(ros_message->wheels), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create cognata_sdk_ros2__msg__WheelMsg__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    cognata_sdk_ros2__msg__WheelMsg * dest = ros_message->wheels.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!cognata_sdk_ros2__msg__wheel_msg__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cognata_sdk_ros2__msg__vehicle_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cognata_sdk_ros2.msg._vehicle_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cognata_sdk_ros2__msg__VehicleMsg * ros_message = (cognata_sdk_ros2__msg__VehicleMsg *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // description
    PyObject * field = NULL;
    field = cognata_sdk_ros2__msg__object_description__convert_to_py(&ros_message->description);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "description", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->vehicle_type.data,
      strlen(ros_message->vehicle_type.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_role
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->vehicle_role.data,
      strlen(ros_message->vehicle_role.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_role", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // navigation_segment
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->navigation_segment.data,
      strlen(ros_message->navigation_segment.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "navigation_segment", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->lane_id.data,
      strlen(ros_message->lane_id.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanes_from_left
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->lanes_from_left.data,
      strlen(ros_message->lanes_from_left.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanes_from_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // head_light_state
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->head_light_state ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "head_light_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_light_state
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->brake_light_state ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_light_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reverse_light_state
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reverse_light_state ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reverse_light_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signal_state
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->signal_state.data,
      strlen(ros_message->signal_state.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "signal_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signal_light
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->signal_light.data,
      strlen(ros_message->signal_light.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "signal_light", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheels
    PyObject * field = NULL;
    size_t size = ros_message->wheels.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    cognata_sdk_ros2__msg__WheelMsg * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->wheels.data[i]);
      PyObject * pyitem = cognata_sdk_ros2__msg__wheel_msg__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheels", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
