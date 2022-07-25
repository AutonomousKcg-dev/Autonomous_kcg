// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from cognata_sdk_ros2:msg/TrafficLightMsg.idl
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
#include "cognata_sdk_ros2/msg/detail/traffic_light_msg__struct.h"
#include "cognata_sdk_ros2/msg/detail/traffic_light_msg__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool cognata_sdk_ros2__msg__object_description__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cognata_sdk_ros2__msg__object_description__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool cognata_sdk_ros2__msg__traffic_light_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("cognata_sdk_ros2.msg._traffic_light_msg.TrafficLightMsg", full_classname_dest, 55) == 0);
  }
  cognata_sdk_ros2__msg__TrafficLightMsg * ros_message = _ros_message;
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
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // bulb_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "bulb_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->bulb_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // functioning_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "functioning_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->functioning_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // behaviour
    PyObject * field = PyObject_GetAttrString(_pymsg, "behaviour");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->behaviour, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // traffic_signal_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "traffic_signal_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->traffic_signal_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // azimuth_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "azimuth_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->azimuth_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // facing
    PyObject * field = PyObject_GetAttrString(_pymsg, "facing");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->facing = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cognata_sdk_ros2__msg__traffic_light_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrafficLightMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cognata_sdk_ros2.msg._traffic_light_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrafficLightMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cognata_sdk_ros2__msg__TrafficLightMsg * ros_message = (cognata_sdk_ros2__msg__TrafficLightMsg *)raw_ros_message;
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
  {  // status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->status.data,
      strlen(ros_message->status.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bulb_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->bulb_status.data,
      strlen(ros_message->bulb_status.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bulb_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // functioning_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->functioning_status.data,
      strlen(ros_message->functioning_status.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "functioning_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // behaviour
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->behaviour.data,
      strlen(ros_message->behaviour.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "behaviour", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // traffic_signal_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->traffic_signal_status.data,
      strlen(ros_message->traffic_signal_status.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "traffic_signal_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // azimuth_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->azimuth_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "azimuth_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // facing
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->facing);
    {
      int rc = PyObject_SetAttrString(_pymessage, "facing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
