// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_interfaces:msg/VisionRobot.idl
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
#include "custom_interfaces/msg/detail/vision_robot__struct.h"
#include "custom_interfaces/msg/detail/vision_robot__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_interfaces__msg__vision_robot__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("custom_interfaces.msg._vision_robot.VisionRobot", full_classname_dest, 47) == 0);
  }
  custom_interfaces__msg__VisionRobot * ros_message = _ros_message;
  {  // detected
    PyObject * field = PyObject_GetAttrString(_pymsg, "detected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->detected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // left
    PyObject * field = PyObject_GetAttrString(_pymsg, "left");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // center
    PyObject * field = PyObject_GetAttrString(_pymsg, "center");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->center = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // right
    PyObject * field = PyObject_GetAttrString(_pymsg, "right");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // far
    PyObject * field = PyObject_GetAttrString(_pymsg, "far");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->far = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // med
    PyObject * field = PyObject_GetAttrString(_pymsg, "med");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->med = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // close
    PyObject * field = PyObject_GetAttrString(_pymsg, "close");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->close = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_interfaces__msg__vision_robot__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VisionRobot */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_interfaces.msg._vision_robot");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VisionRobot");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_interfaces__msg__VisionRobot * ros_message = (custom_interfaces__msg__VisionRobot *)raw_ros_message;
  {  // detected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->detected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "detected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->center);
    {
      int rc = PyObject_SetAttrString(_pymessage, "center", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // far
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->far);
    {
      int rc = PyObject_SetAttrString(_pymessage, "far", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // med
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->med);
    {
      int rc = PyObject_SetAttrString(_pymessage, "med", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // close
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->close);
    {
      int rc = PyObject_SetAttrString(_pymessage, "close", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
