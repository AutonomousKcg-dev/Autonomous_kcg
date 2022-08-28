// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tracked_lane_msgs:msg/Lane.idl
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
#include "tracked_lane_msgs/msg/detail/lane__struct.h"
#include "tracked_lane_msgs/msg/detail/lane__functions.h"

bool tracked_lane_msgs__msg__boundary__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tracked_lane_msgs__msg__boundary__convert_to_py(void * raw_ros_message);
bool tracked_lane_msgs__msg__boundary__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tracked_lane_msgs__msg__boundary__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tracked_lane_msgs__msg__lane__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[33];
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
    assert(strncmp("tracked_lane_msgs.msg._lane.Lane", full_classname_dest, 32) == 0);
  }
  tracked_lane_msgs__msg__Lane * ros_message = _ros_message;
  {  // left_boundary
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_boundary");
    if (!field) {
      return false;
    }
    if (!tracked_lane_msgs__msg__boundary__convert_from_py(field, &ros_message->left_boundary)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // right_boundary
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_boundary");
    if (!field) {
      return false;
    }
    if (!tracked_lane_msgs__msg__boundary__convert_from_py(field, &ros_message->right_boundary)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tracked_lane_msgs__msg__lane__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Lane */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tracked_lane_msgs.msg._lane");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Lane");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tracked_lane_msgs__msg__Lane * ros_message = (tracked_lane_msgs__msg__Lane *)raw_ros_message;
  {  // left_boundary
    PyObject * field = NULL;
    field = tracked_lane_msgs__msg__boundary__convert_to_py(&ros_message->left_boundary);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_boundary", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_boundary
    PyObject * field = NULL;
    field = tracked_lane_msgs__msg__boundary__convert_to_py(&ros_message->right_boundary);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_boundary", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
