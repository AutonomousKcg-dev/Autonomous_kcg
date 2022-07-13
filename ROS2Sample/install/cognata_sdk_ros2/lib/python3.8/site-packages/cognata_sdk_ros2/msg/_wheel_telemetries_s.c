// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from cognata_sdk_ros2:msg/WheelTelemetries.idl
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
#include "cognata_sdk_ros2/msg/detail/wheel_telemetries__struct.h"
#include "cognata_sdk_ros2/msg/detail/wheel_telemetries__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool cognata_sdk_ros2__msg__wheel_telemetries__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("cognata_sdk_ros2.msg._wheel_telemetries.WheelTelemetries", full_classname_dest, 56) == 0);
  }
  cognata_sdk_ros2__msg__WheelTelemetries * ros_message = _ros_message;
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
  {  // angular_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angular_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steer_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steer_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // drive_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "drive_torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->drive_torque = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_torque = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // reaction_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "reaction_torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->reaction_torque = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tire_force
    PyObject * field = PyObject_GetAttrString(_pymsg, "tire_force");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->tire_force)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // tire_slip
    PyObject * field = PyObject_GetAttrString(_pymsg, "tire_slip");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->tire_slip)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // can_slip
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_slip");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_slip = (Py_True == field);
    Py_DECREF(field);
  }
  {  // combined_tire_slip
    PyObject * field = PyObject_GetAttrString(_pymsg, "combined_tire_slip");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->combined_tire_slip = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // suspension_compression
    PyObject * field = PyObject_GetAttrString(_pymsg, "suspension_compression");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->suspension_compression = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // down_force
    PyObject * field = PyObject_GetAttrString(_pymsg, "down_force");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->down_force = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // contact_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "contact_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->contact_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // contact_depth
    PyObject * field = PyObject_GetAttrString(_pymsg, "contact_depth");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->contact_depth = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // contact_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "contact_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->contact_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_grounded
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_grounded");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_grounded = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wheel_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_velocity");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->wheel_velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cognata_sdk_ros2__msg__wheel_telemetries__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WheelTelemetries */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cognata_sdk_ros2.msg._wheel_telemetries");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WheelTelemetries");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cognata_sdk_ros2__msg__WheelTelemetries * ros_message = (cognata_sdk_ros2__msg__WheelTelemetries *)raw_ros_message;
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
  {  // angular_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angular_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steer_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drive_torque
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->drive_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drive_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_torque
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reaction_torque
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->reaction_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reaction_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tire_force
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->tire_force);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tire_force", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tire_slip
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->tire_slip);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tire_slip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_slip
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_slip ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_slip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // combined_tire_slip
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->combined_tire_slip);
    {
      int rc = PyObject_SetAttrString(_pymessage, "combined_tire_slip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // suspension_compression
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->suspension_compression);
    {
      int rc = PyObject_SetAttrString(_pymessage, "suspension_compression", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // down_force
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->down_force);
    {
      int rc = PyObject_SetAttrString(_pymessage, "down_force", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // contact_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->contact_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "contact_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // contact_depth
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->contact_depth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "contact_depth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // contact_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->contact_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "contact_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_grounded
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_grounded ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_grounded", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_velocity
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->wheel_velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
