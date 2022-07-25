// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tracked_lane_msgs:msg/LaneResults.idl
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
#include "tracked_lane_msgs/msg/detail/lane_results__struct.h"
#include "tracked_lane_msgs/msg/detail/lane_results__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

// Nested array functions includes
#include "tracked_lane_msgs/msg/detail/lane__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool tracked_lane_msgs__msg__lane__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tracked_lane_msgs__msg__lane__convert_to_py(void * raw_ros_message);
bool tracked_lane_msgs__msg__lane__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tracked_lane_msgs__msg__lane__convert_to_py(void * raw_ros_message);
bool tracked_lane_msgs__msg__lane__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tracked_lane_msgs__msg__lane__convert_to_py(void * raw_ros_message);
bool tracked_lane_msgs__msg__lane__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tracked_lane_msgs__msg__lane__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tracked_lane_msgs__msg__lane_results__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("tracked_lane_msgs.msg._lane_results.LaneResults", full_classname_dest, 47) == 0);
  }
  tracked_lane_msgs__msg__LaneResults * ros_message = _ros_message;
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
  {  // adjacent_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "adjacent_left");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'adjacent_left'");
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
    if (!tracked_lane_msgs__msg__Lane__Sequence__init(&(ros_message->adjacent_left), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create tracked_lane_msgs__msg__Lane__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    tracked_lane_msgs__msg__Lane * dest = ros_message->adjacent_left.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!tracked_lane_msgs__msg__lane__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // num_adjacent_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_adjacent_left");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_adjacent_left = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // adjacent_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "adjacent_right");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'adjacent_right'");
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
    if (!tracked_lane_msgs__msg__Lane__Sequence__init(&(ros_message->adjacent_right), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create tracked_lane_msgs__msg__Lane__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    tracked_lane_msgs__msg__Lane * dest = ros_message->adjacent_right.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!tracked_lane_msgs__msg__lane__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // num_adjacent_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_adjacent_right");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_adjacent_right = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ego_lane
    PyObject * field = PyObject_GetAttrString(_pymsg, "ego_lane");
    if (!field) {
      return false;
    }
    if (!tracked_lane_msgs__msg__lane__convert_from_py(field, &ros_message->ego_lane)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // road_boundary
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_boundary");
    if (!field) {
      return false;
    }
    if (!tracked_lane_msgs__msg__lane__convert_from_py(field, &ros_message->road_boundary)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // total_number_of_lanes
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_number_of_lanes");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->total_number_of_lanes = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // algo_description
    PyObject * field = PyObject_GetAttrString(_pymsg, "algo_description");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->algo_description, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tracked_lane_msgs__msg__lane_results__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LaneResults */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tracked_lane_msgs.msg._lane_results");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LaneResults");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tracked_lane_msgs__msg__LaneResults * ros_message = (tracked_lane_msgs__msg__LaneResults *)raw_ros_message;
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
  {  // adjacent_left
    PyObject * field = NULL;
    size_t size = ros_message->adjacent_left.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    tracked_lane_msgs__msg__Lane * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->adjacent_left.data[i]);
      PyObject * pyitem = tracked_lane_msgs__msg__lane__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "adjacent_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_adjacent_left
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_adjacent_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_adjacent_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // adjacent_right
    PyObject * field = NULL;
    size_t size = ros_message->adjacent_right.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    tracked_lane_msgs__msg__Lane * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->adjacent_right.data[i]);
      PyObject * pyitem = tracked_lane_msgs__msg__lane__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "adjacent_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_adjacent_right
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_adjacent_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_adjacent_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ego_lane
    PyObject * field = NULL;
    field = tracked_lane_msgs__msg__lane__convert_to_py(&ros_message->ego_lane);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ego_lane", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_boundary
    PyObject * field = NULL;
    field = tracked_lane_msgs__msg__lane__convert_to_py(&ros_message->road_boundary);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "road_boundary", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_number_of_lanes
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->total_number_of_lanes);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_number_of_lanes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // algo_description
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->algo_description.data,
      strlen(ros_message->algo_description.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "algo_description", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
