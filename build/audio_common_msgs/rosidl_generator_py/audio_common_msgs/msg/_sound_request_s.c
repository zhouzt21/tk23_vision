// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from audio_common_msgs:msg/SoundRequest.idl
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
#include "audio_common_msgs/msg/detail/sound_request__struct.h"
#include "audio_common_msgs/msg/detail/sound_request__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool audio_common_msgs__msg__sound_request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("audio_common_msgs.msg._sound_request.SoundRequest", full_classname_dest, 49) == 0);
  }
  audio_common_msgs__msg__SoundRequest * ros_message = _ros_message;
  {  // sound
    PyObject * field = PyObject_GetAttrString(_pymsg, "sound");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sound = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // command
    PyObject * field = PyObject_GetAttrString(_pymsg, "command");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->command = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // volume
    PyObject * field = PyObject_GetAttrString(_pymsg, "volume");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->volume = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // arg
    PyObject * field = PyObject_GetAttrString(_pymsg, "arg");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->arg, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // arg2
    PyObject * field = PyObject_GetAttrString(_pymsg, "arg2");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->arg2, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * audio_common_msgs__msg__sound_request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SoundRequest */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("audio_common_msgs.msg._sound_request");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SoundRequest");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  audio_common_msgs__msg__SoundRequest * ros_message = (audio_common_msgs__msg__SoundRequest *)raw_ros_message;
  {  // sound
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sound);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sound", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // command
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->command);
    {
      int rc = PyObject_SetAttrString(_pymessage, "command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // volume
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->volume);
    {
      int rc = PyObject_SetAttrString(_pymessage, "volume", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arg
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->arg.data,
      strlen(ros_message->arg.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "arg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arg2
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->arg2.data,
      strlen(ros_message->arg2.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "arg2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
