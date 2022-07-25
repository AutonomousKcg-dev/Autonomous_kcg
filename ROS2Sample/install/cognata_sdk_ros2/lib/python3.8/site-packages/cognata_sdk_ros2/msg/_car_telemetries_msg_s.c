// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from cognata_sdk_ros2:msg/CarTelemetriesMsg.idl
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
#include "cognata_sdk_ros2/msg/detail/car_telemetries_msg__struct.h"
#include "cognata_sdk_ros2/msg/detail/car_telemetries_msg__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "cognata_sdk_ros2/msg/detail/wheel_telemetries__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__twist__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__twist__convert_to_py(void * raw_ros_message);
bool cognata_sdk_ros2__msg__wheel_telemetries__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cognata_sdk_ros2__msg__wheel_telemetries__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool cognata_sdk_ros2__msg__car_telemetries_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("cognata_sdk_ros2.msg._car_telemetries_msg.CarTelemetriesMsg", full_classname_dest, 59) == 0);
  }
  cognata_sdk_ros2__msg__CarTelemetriesMsg * ros_message = _ros_message;
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
  {  // turn_light
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_light");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->turn_light, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acceleration = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gas
    PyObject * field = PyObject_GetAttrString(_pymsg, "gas");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gas = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // center_of_mass
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_of_mass");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__twist__convert_from_py(field, &ros_message->center_of_mass)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // engine_rpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_rpm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->engine_rpm = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // engine_load
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_load");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->engine_load = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // engine_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->engine_torque = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // engine_power
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_power");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->engine_power = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_gear
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_gear");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_gear = (int32_t)PyLong_AsLong(field);
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
    if (!cognata_sdk_ros2__msg__WheelTelemetries__Sequence__init(&(ros_message->wheels), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create cognata_sdk_ros2__msg__WheelTelemetries__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    cognata_sdk_ros2__msg__WheelTelemetries * dest = ros_message->wheels.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!cognata_sdk_ros2__msg__wheel_telemetries__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * cognata_sdk_ros2__msg__car_telemetries_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CarTelemetriesMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cognata_sdk_ros2.msg._car_telemetries_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CarTelemetriesMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cognata_sdk_ros2__msg__CarTelemetriesMsg * ros_message = (cognata_sdk_ros2__msg__CarTelemetriesMsg *)raw_ros_message;
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
  {  // turn_light
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->turn_light.data,
      strlen(ros_message->turn_light.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_light", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gas
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gas);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gas", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center_of_mass
    PyObject * field = NULL;
    field = geometry_msgs__msg__twist__convert_to_py(&ros_message->center_of_mass);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_of_mass", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_rpm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->engine_rpm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_rpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_load
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->engine_load);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_load", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_torque
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->engine_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_power
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->engine_power);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_gear
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->current_gear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_gear", field);
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
    cognata_sdk_ros2__msg__WheelTelemetries * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->wheels.data[i]);
      PyObject * pyitem = cognata_sdk_ros2__msg__wheel_telemetries__convert_to_py(item);
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
