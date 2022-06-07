// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from cognata_sdk_ros2:msg/ROIAndDOGTOutput.idl
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
#include "cognata_sdk_ros2/msg/detail/roi_and_dogt_output__struct.h"
#include "cognata_sdk_ros2/msg/detail/roi_and_dogt_output__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "cognata_sdk_ros2/msg/detail/annotation_msg__functions.h"
#include "cognata_sdk_ros2/msg/detail/object_description__functions.h"
#include "cognata_sdk_ros2/msg/detail/pedestrian_msg__functions.h"
#include "cognata_sdk_ros2/msg/detail/traffic_light_msg__functions.h"
#include "cognata_sdk_ros2/msg/detail/vehicle_msg__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool cognata_sdk_ros2__msg__object_description__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cognata_sdk_ros2__msg__object_description__convert_to_py(void * raw_ros_message);
bool cognata_sdk_ros2__msg__annotation_msg__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cognata_sdk_ros2__msg__annotation_msg__convert_to_py(void * raw_ros_message);
bool cognata_sdk_ros2__msg__pedestrian_msg__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cognata_sdk_ros2__msg__pedestrian_msg__convert_to_py(void * raw_ros_message);
bool cognata_sdk_ros2__msg__vehicle_msg__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cognata_sdk_ros2__msg__vehicle_msg__convert_to_py(void * raw_ros_message);
bool cognata_sdk_ros2__msg__traffic_light_msg__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cognata_sdk_ros2__msg__traffic_light_msg__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool cognata_sdk_ros2__msg__roi_and_dogt_output__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("cognata_sdk_ros2.msg._roi_and_dogt_output.ROIAndDOGTOutput", full_classname_dest, 58) == 0);
  }
  cognata_sdk_ros2__msg__ROIAndDOGTOutput * ros_message = _ros_message;
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
  {  // other_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "other_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'other_list'");
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
    if (!cognata_sdk_ros2__msg__ObjectDescription__Sequence__init(&(ros_message->other_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create cognata_sdk_ros2__msg__ObjectDescription__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    cognata_sdk_ros2__msg__ObjectDescription * dest = ros_message->other_list.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!cognata_sdk_ros2__msg__object_description__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // annotation_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "annotation_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'annotation_list'");
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
    if (!cognata_sdk_ros2__msg__AnnotationMsg__Sequence__init(&(ros_message->annotation_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create cognata_sdk_ros2__msg__AnnotationMsg__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    cognata_sdk_ros2__msg__AnnotationMsg * dest = ros_message->annotation_list.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!cognata_sdk_ros2__msg__annotation_msg__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // pedestrian_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "pedestrian_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'pedestrian_list'");
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
    if (!cognata_sdk_ros2__msg__PedestrianMsg__Sequence__init(&(ros_message->pedestrian_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create cognata_sdk_ros2__msg__PedestrianMsg__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    cognata_sdk_ros2__msg__PedestrianMsg * dest = ros_message->pedestrian_list.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!cognata_sdk_ros2__msg__pedestrian_msg__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // vehicle_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'vehicle_list'");
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
    if (!cognata_sdk_ros2__msg__VehicleMsg__Sequence__init(&(ros_message->vehicle_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create cognata_sdk_ros2__msg__VehicleMsg__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    cognata_sdk_ros2__msg__VehicleMsg * dest = ros_message->vehicle_list.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!cognata_sdk_ros2__msg__vehicle_msg__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // traffic_light_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "traffic_light_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'traffic_light_list'");
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
    if (!cognata_sdk_ros2__msg__TrafficLightMsg__Sequence__init(&(ros_message->traffic_light_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create cognata_sdk_ros2__msg__TrafficLightMsg__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    cognata_sdk_ros2__msg__TrafficLightMsg * dest = ros_message->traffic_light_list.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!cognata_sdk_ros2__msg__traffic_light_msg__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * cognata_sdk_ros2__msg__roi_and_dogt_output__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ROIAndDOGTOutput */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cognata_sdk_ros2.msg._roi_and_dogt_output");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ROIAndDOGTOutput");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cognata_sdk_ros2__msg__ROIAndDOGTOutput * ros_message = (cognata_sdk_ros2__msg__ROIAndDOGTOutput *)raw_ros_message;
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
  {  // other_list
    PyObject * field = NULL;
    size_t size = ros_message->other_list.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    cognata_sdk_ros2__msg__ObjectDescription * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->other_list.data[i]);
      PyObject * pyitem = cognata_sdk_ros2__msg__object_description__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "other_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // annotation_list
    PyObject * field = NULL;
    size_t size = ros_message->annotation_list.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    cognata_sdk_ros2__msg__AnnotationMsg * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->annotation_list.data[i]);
      PyObject * pyitem = cognata_sdk_ros2__msg__annotation_msg__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "annotation_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pedestrian_list
    PyObject * field = NULL;
    size_t size = ros_message->pedestrian_list.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    cognata_sdk_ros2__msg__PedestrianMsg * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->pedestrian_list.data[i]);
      PyObject * pyitem = cognata_sdk_ros2__msg__pedestrian_msg__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "pedestrian_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_list
    PyObject * field = NULL;
    size_t size = ros_message->vehicle_list.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    cognata_sdk_ros2__msg__VehicleMsg * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->vehicle_list.data[i]);
      PyObject * pyitem = cognata_sdk_ros2__msg__vehicle_msg__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // traffic_light_list
    PyObject * field = NULL;
    size_t size = ros_message->traffic_light_list.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    cognata_sdk_ros2__msg__TrafficLightMsg * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->traffic_light_list.data[i]);
      PyObject * pyitem = cognata_sdk_ros2__msg__traffic_light_msg__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "traffic_light_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
