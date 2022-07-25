// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_auto_system_msgs:msg/Float32MultiArrayDiagnostic.idl
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
#include "autoware_auto_system_msgs/msg/detail/float32_multi_array_diagnostic__struct.h"
#include "autoware_auto_system_msgs/msg/detail/float32_multi_array_diagnostic__functions.h"

bool autoware_auto_system_msgs__msg__diagnostic_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_auto_system_msgs__msg__diagnostic_header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float32_multi_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float32_multi_array__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autoware_auto_system_msgs__msg__float32_multi_array_diagnostic__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[90];
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
    assert(strncmp("autoware_auto_system_msgs.msg._float32_multi_array_diagnostic.Float32MultiArrayDiagnostic", full_classname_dest, 89) == 0);
  }
  autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic * ros_message = _ros_message;
  {  // diag_header
    PyObject * field = PyObject_GetAttrString(_pymsg, "diag_header");
    if (!field) {
      return false;
    }
    if (!autoware_auto_system_msgs__msg__diagnostic_header__convert_from_py(field, &ros_message->diag_header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // diag_array
    PyObject * field = PyObject_GetAttrString(_pymsg, "diag_array");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32_multi_array__convert_from_py(field, &ros_message->diag_array)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_auto_system_msgs__msg__float32_multi_array_diagnostic__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Float32MultiArrayDiagnostic */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_auto_system_msgs.msg._float32_multi_array_diagnostic");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Float32MultiArrayDiagnostic");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic * ros_message = (autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic *)raw_ros_message;
  {  // diag_header
    PyObject * field = NULL;
    field = autoware_auto_system_msgs__msg__diagnostic_header__convert_to_py(&ros_message->diag_header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "diag_header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diag_array
    PyObject * field = NULL;
    field = std_msgs__msg__float32_multi_array__convert_to_py(&ros_message->diag_array);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "diag_array", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
