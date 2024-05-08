// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from tinker_arm_msgs:srv/URControlService.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "tinker_arm_msgs/srv/detail/ur_control_service__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace tinker_arm_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _URControlService_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _URControlService_Request_type_support_ids_t;

static const _URControlService_Request_type_support_ids_t _URControlService_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _URControlService_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _URControlService_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _URControlService_Request_type_support_symbol_names_t _URControlService_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tinker_arm_msgs, srv, URControlService_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tinker_arm_msgs, srv, URControlService_Request)),
  }
};

typedef struct _URControlService_Request_type_support_data_t
{
  void * data[2];
} _URControlService_Request_type_support_data_t;

static _URControlService_Request_type_support_data_t _URControlService_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _URControlService_Request_message_typesupport_map = {
  2,
  "tinker_arm_msgs",
  &_URControlService_Request_message_typesupport_ids.typesupport_identifier[0],
  &_URControlService_Request_message_typesupport_symbol_names.symbol_name[0],
  &_URControlService_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t URControlService_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_URControlService_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace tinker_arm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tinker_arm_msgs::srv::URControlService_Request>()
{
  return &::tinker_arm_msgs::srv::rosidl_typesupport_cpp::URControlService_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tinker_arm_msgs, srv, URControlService_Request)() {
  return get_message_type_support_handle<tinker_arm_msgs::srv::URControlService_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tinker_arm_msgs/srv/detail/ur_control_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tinker_arm_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _URControlService_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _URControlService_Response_type_support_ids_t;

static const _URControlService_Response_type_support_ids_t _URControlService_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _URControlService_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _URControlService_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _URControlService_Response_type_support_symbol_names_t _URControlService_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tinker_arm_msgs, srv, URControlService_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tinker_arm_msgs, srv, URControlService_Response)),
  }
};

typedef struct _URControlService_Response_type_support_data_t
{
  void * data[2];
} _URControlService_Response_type_support_data_t;

static _URControlService_Response_type_support_data_t _URControlService_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _URControlService_Response_message_typesupport_map = {
  2,
  "tinker_arm_msgs",
  &_URControlService_Response_message_typesupport_ids.typesupport_identifier[0],
  &_URControlService_Response_message_typesupport_symbol_names.symbol_name[0],
  &_URControlService_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t URControlService_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_URControlService_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace tinker_arm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tinker_arm_msgs::srv::URControlService_Response>()
{
  return &::tinker_arm_msgs::srv::rosidl_typesupport_cpp::URControlService_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tinker_arm_msgs, srv, URControlService_Response)() {
  return get_message_type_support_handle<tinker_arm_msgs::srv::URControlService_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tinker_arm_msgs/srv/detail/ur_control_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tinker_arm_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _URControlService_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _URControlService_type_support_ids_t;

static const _URControlService_type_support_ids_t _URControlService_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _URControlService_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _URControlService_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _URControlService_type_support_symbol_names_t _URControlService_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tinker_arm_msgs, srv, URControlService)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tinker_arm_msgs, srv, URControlService)),
  }
};

typedef struct _URControlService_type_support_data_t
{
  void * data[2];
} _URControlService_type_support_data_t;

static _URControlService_type_support_data_t _URControlService_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _URControlService_service_typesupport_map = {
  2,
  "tinker_arm_msgs",
  &_URControlService_service_typesupport_ids.typesupport_identifier[0],
  &_URControlService_service_typesupport_symbol_names.symbol_name[0],
  &_URControlService_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t URControlService_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_URControlService_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace tinker_arm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<tinker_arm_msgs::srv::URControlService>()
{
  return &::tinker_arm_msgs::srv::rosidl_typesupport_cpp::URControlService_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
