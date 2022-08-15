// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from cognata_sdk_ros2:msg/RadarOutputTarget.idl
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
#include "cognata_sdk_ros2/msg/detail/radar_output_target__struct.h"
#include "cognata_sdk_ros2/msg/detail/radar_output_target__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool cognata_sdk_ros2__msg__radar_output_target__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("cognata_sdk_ros2.msg._radar_output_target.RadarOutputTarget", full_classname_dest, 59) == 0);
  }
  cognata_sdk_ros2__msg__RadarOutputTarget * ros_message = _ros_message;
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
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // time_stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_stamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_stamp = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // range
    PyObject * field = PyObject_GetAttrString(_pymsg, "range");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // azimuth
    PyObject * field = PyObject_GetAttrString(_pymsg, "azimuth");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->azimuth = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // elevation
    PyObject * field = PyObject_GetAttrString(_pymsg, "elevation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->elevation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // range_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "range_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // amplitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "amplitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->amplitude = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_aggregate
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_aggregate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->is_aggregate = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tracking_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "tracking_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tracking_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // age
    PyObject * field = PyObject_GetAttrString(_pymsg, "age");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->age = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // last_seen
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_seen");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->last_seen = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // is_stationary
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_stationary");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_stationary = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_ghost
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_ghost");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_ghost = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cognata_sdk_ros2__msg__radar_output_target__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RadarOutputTarget */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cognata_sdk_ros2.msg._radar_output_target");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RadarOutputTarget");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cognata_sdk_ros2__msg__RadarOutputTarget * ros_message = (cognata_sdk_ros2__msg__RadarOutputTarget *)raw_ros_message;
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
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_stamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->time_stamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // azimuth
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->azimuth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "azimuth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elevation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->elevation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "elevation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->range_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // amplitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->amplitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "amplitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_aggregate
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->is_aggregate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_aggregate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tracking_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->tracking_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tracking_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // age
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_seen
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->last_seen);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_seen", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_stationary
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_stationary ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_stationary", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_ghost
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_ghost ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_ghost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
