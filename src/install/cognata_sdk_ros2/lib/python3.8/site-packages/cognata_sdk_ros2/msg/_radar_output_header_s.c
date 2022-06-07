// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from cognata_sdk_ros2:msg/RadarOutputHeader.idl
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
#include "cognata_sdk_ros2/msg/detail/radar_output_header__struct.h"
#include "cognata_sdk_ros2/msg/detail/radar_output_header__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "cognata_sdk_ros2/msg/detail/radar_output_target__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__twist__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__twist__convert_to_py(void * raw_ros_message);
bool cognata_sdk_ros2__msg__radar_output_target__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cognata_sdk_ros2__msg__radar_output_target__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool cognata_sdk_ros2__msg__radar_output_header__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("cognata_sdk_ros2.msg._radar_output_header.RadarOutputHeader", full_classname_dest, 59) == 0);
  }
  cognata_sdk_ros2__msg__RadarOutputHeader * ros_message = _ros_message;
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
  {  // radar_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->radar_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // radar_placement
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar_placement");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__twist__convert_from_py(field, &ros_message->radar_placement)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // h_fov
    PyObject * field = PyObject_GetAttrString(_pymsg, "h_fov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->h_fov = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // v_fov
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_fov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v_fov = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // targets
    PyObject * field = PyObject_GetAttrString(_pymsg, "targets");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'targets'");
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
    if (!cognata_sdk_ros2__msg__RadarOutputTarget__Sequence__init(&(ros_message->targets), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create cognata_sdk_ros2__msg__RadarOutputTarget__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    cognata_sdk_ros2__msg__RadarOutputTarget * dest = ros_message->targets.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!cognata_sdk_ros2__msg__radar_output_target__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * cognata_sdk_ros2__msg__radar_output_header__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RadarOutputHeader */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cognata_sdk_ros2.msg._radar_output_header");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RadarOutputHeader");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cognata_sdk_ros2__msg__RadarOutputHeader * ros_message = (cognata_sdk_ros2__msg__RadarOutputHeader *)raw_ros_message;
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
  {  // radar_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->radar_id.data,
      strlen(ros_message->radar_id.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radar_placement
    PyObject * field = NULL;
    field = geometry_msgs__msg__twist__convert_to_py(&ros_message->radar_placement);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar_placement", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // h_fov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->h_fov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "h_fov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v_fov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v_fov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_fov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // targets
    PyObject * field = NULL;
    size_t size = ros_message->targets.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    cognata_sdk_ros2__msg__RadarOutputTarget * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->targets.data[i]);
      PyObject * pyitem = cognata_sdk_ros2__msg__radar_output_target__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "targets", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
