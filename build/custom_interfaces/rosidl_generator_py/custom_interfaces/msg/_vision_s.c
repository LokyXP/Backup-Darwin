// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_interfaces:msg/Vision.idl
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
#include "custom_interfaces/msg/detail/vision__struct.h"
#include "custom_interfaces/msg/detail/vision__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_interfaces__msg__vision__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("custom_interfaces.msg._vision.Vision", full_classname_dest, 36) == 0);
  }
  custom_interfaces__msg__Vision * ros_message = _ros_message;
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
    assert(PyBool_Check(field));
    ros_message->left = (Py_True == field);
    Py_DECREF(field);
  }
  {  // center
    PyObject * field = PyObject_GetAttrString(_pymsg, "center");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->center = (Py_True == field);
    Py_DECREF(field);
  }
  {  // right
    PyObject * field = PyObject_GetAttrString(_pymsg, "right");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->right = (Py_True == field);
    Py_DECREF(field);
  }
  {  // center_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_right");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->center_right = (Py_True == field);
    Py_DECREF(field);
  }
  {  // far
    PyObject * field = PyObject_GetAttrString(_pymsg, "far");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->far = (Py_True == field);
    Py_DECREF(field);
  }
  {  // med
    PyObject * field = PyObject_GetAttrString(_pymsg, "med");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->med = (Py_True == field);
    Py_DECREF(field);
  }
  {  // close
    PyObject * field = PyObject_GetAttrString(_pymsg, "close");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->close = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_interfaces__msg__vision__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Vision */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_interfaces.msg._vision");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Vision");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_interfaces__msg__Vision * ros_message = (custom_interfaces__msg__Vision *)raw_ros_message;
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
    field = PyBool_FromLong(ros_message->left ? 1 : 0);
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
    field = PyBool_FromLong(ros_message->center ? 1 : 0);
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
    field = PyBool_FromLong(ros_message->right ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center_right
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->center_right ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // far
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->far ? 1 : 0);
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
    field = PyBool_FromLong(ros_message->med ? 1 : 0);
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
    field = PyBool_FromLong(ros_message->close ? 1 : 0);
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
