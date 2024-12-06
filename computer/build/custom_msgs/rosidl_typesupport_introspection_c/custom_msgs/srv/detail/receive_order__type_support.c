// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:srv/ReceiveOrder.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/srv/detail/receive_order__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/srv/detail/receive_order__functions.h"
#include "custom_msgs/srv/detail/receive_order__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void custom_msgs__srv__ReceiveOrder_Request__rosidl_typesupport_introspection_c__ReceiveOrder_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__srv__ReceiveOrder_Request__init(message_memory);
}

void custom_msgs__srv__ReceiveOrder_Request__rosidl_typesupport_introspection_c__ReceiveOrder_Request_fini_function(void * message_memory)
{
  custom_msgs__srv__ReceiveOrder_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember custom_msgs__srv__ReceiveOrder_Request__rosidl_typesupport_introspection_c__ReceiveOrder_Request_message_member_array[1] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__srv__ReceiveOrder_Request, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_msgs__srv__ReceiveOrder_Request__rosidl_typesupport_introspection_c__ReceiveOrder_Request_message_members = {
  "custom_msgs__srv",  // message namespace
  "ReceiveOrder_Request",  // message name
  1,  // number of fields
  sizeof(custom_msgs__srv__ReceiveOrder_Request),
  custom_msgs__srv__ReceiveOrder_Request__rosidl_typesupport_introspection_c__ReceiveOrder_Request_message_member_array,  // message members
  custom_msgs__srv__ReceiveOrder_Request__rosidl_typesupport_introspection_c__ReceiveOrder_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_msgs__srv__ReceiveOrder_Request__rosidl_typesupport_introspection_c__ReceiveOrder_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_msgs__srv__ReceiveOrder_Request__rosidl_typesupport_introspection_c__ReceiveOrder_Request_message_type_support_handle = {
  0,
  &custom_msgs__srv__ReceiveOrder_Request__rosidl_typesupport_introspection_c__ReceiveOrder_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, srv, ReceiveOrder_Request)() {
  if (!custom_msgs__srv__ReceiveOrder_Request__rosidl_typesupport_introspection_c__ReceiveOrder_Request_message_type_support_handle.typesupport_identifier) {
    custom_msgs__srv__ReceiveOrder_Request__rosidl_typesupport_introspection_c__ReceiveOrder_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_msgs__srv__ReceiveOrder_Request__rosidl_typesupport_introspection_c__ReceiveOrder_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "custom_msgs/srv/detail/receive_order__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_msgs/srv/detail/receive_order__functions.h"
// already included above
// #include "custom_msgs/srv/detail/receive_order__struct.h"


// Include directives for member types
// Member `details`
#include "custom_msgs/msg/order_detail.h"
// Member `details`
#include "custom_msgs/msg/detail/order_detail__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__ReceiveOrder_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__srv__ReceiveOrder_Response__init(message_memory);
}

void custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__ReceiveOrder_Response_fini_function(void * message_memory)
{
  custom_msgs__srv__ReceiveOrder_Response__fini(message_memory);
}

size_t custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__size_function__ReceiveOrder_Response__details(
  const void * untyped_member)
{
  const custom_msgs__msg__OrderDetail__Sequence * member =
    (const custom_msgs__msg__OrderDetail__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__get_const_function__ReceiveOrder_Response__details(
  const void * untyped_member, size_t index)
{
  const custom_msgs__msg__OrderDetail__Sequence * member =
    (const custom_msgs__msg__OrderDetail__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__get_function__ReceiveOrder_Response__details(
  void * untyped_member, size_t index)
{
  custom_msgs__msg__OrderDetail__Sequence * member =
    (custom_msgs__msg__OrderDetail__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__fetch_function__ReceiveOrder_Response__details(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const custom_msgs__msg__OrderDetail * item =
    ((const custom_msgs__msg__OrderDetail *)
    custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__get_const_function__ReceiveOrder_Response__details(untyped_member, index));
  custom_msgs__msg__OrderDetail * value =
    (custom_msgs__msg__OrderDetail *)(untyped_value);
  *value = *item;
}

void custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__assign_function__ReceiveOrder_Response__details(
  void * untyped_member, size_t index, const void * untyped_value)
{
  custom_msgs__msg__OrderDetail * item =
    ((custom_msgs__msg__OrderDetail *)
    custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__get_function__ReceiveOrder_Response__details(untyped_member, index));
  const custom_msgs__msg__OrderDetail * value =
    (const custom_msgs__msg__OrderDetail *)(untyped_value);
  *item = *value;
}

bool custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__resize_function__ReceiveOrder_Response__details(
  void * untyped_member, size_t size)
{
  custom_msgs__msg__OrderDetail__Sequence * member =
    (custom_msgs__msg__OrderDetail__Sequence *)(untyped_member);
  custom_msgs__msg__OrderDetail__Sequence__fini(member);
  return custom_msgs__msg__OrderDetail__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__ReceiveOrder_Response_message_member_array[1] = {
  {
    "details",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__srv__ReceiveOrder_Response, details),  // bytes offset in struct
    NULL,  // default value
    custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__size_function__ReceiveOrder_Response__details,  // size() function pointer
    custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__get_const_function__ReceiveOrder_Response__details,  // get_const(index) function pointer
    custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__get_function__ReceiveOrder_Response__details,  // get(index) function pointer
    custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__fetch_function__ReceiveOrder_Response__details,  // fetch(index, &value) function pointer
    custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__assign_function__ReceiveOrder_Response__details,  // assign(index, value) function pointer
    custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__resize_function__ReceiveOrder_Response__details  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__ReceiveOrder_Response_message_members = {
  "custom_msgs__srv",  // message namespace
  "ReceiveOrder_Response",  // message name
  1,  // number of fields
  sizeof(custom_msgs__srv__ReceiveOrder_Response),
  custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__ReceiveOrder_Response_message_member_array,  // message members
  custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__ReceiveOrder_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__ReceiveOrder_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__ReceiveOrder_Response_message_type_support_handle = {
  0,
  &custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__ReceiveOrder_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, srv, ReceiveOrder_Response)() {
  custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__ReceiveOrder_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, OrderDetail)();
  if (!custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__ReceiveOrder_Response_message_type_support_handle.typesupport_identifier) {
    custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__ReceiveOrder_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_msgs__srv__ReceiveOrder_Response__rosidl_typesupport_introspection_c__ReceiveOrder_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "custom_msgs/srv/detail/receive_order__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers custom_msgs__srv__detail__receive_order__rosidl_typesupport_introspection_c__ReceiveOrder_service_members = {
  "custom_msgs__srv",  // service namespace
  "ReceiveOrder",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // custom_msgs__srv__detail__receive_order__rosidl_typesupport_introspection_c__ReceiveOrder_Request_message_type_support_handle,
  NULL  // response message
  // custom_msgs__srv__detail__receive_order__rosidl_typesupport_introspection_c__ReceiveOrder_Response_message_type_support_handle
};

static rosidl_service_type_support_t custom_msgs__srv__detail__receive_order__rosidl_typesupport_introspection_c__ReceiveOrder_service_type_support_handle = {
  0,
  &custom_msgs__srv__detail__receive_order__rosidl_typesupport_introspection_c__ReceiveOrder_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, srv, ReceiveOrder_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, srv, ReceiveOrder_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, srv, ReceiveOrder)() {
  if (!custom_msgs__srv__detail__receive_order__rosidl_typesupport_introspection_c__ReceiveOrder_service_type_support_handle.typesupport_identifier) {
    custom_msgs__srv__detail__receive_order__rosidl_typesupport_introspection_c__ReceiveOrder_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)custom_msgs__srv__detail__receive_order__rosidl_typesupport_introspection_c__ReceiveOrder_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, srv, ReceiveOrder_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, srv, ReceiveOrder_Response)()->data;
  }

  return &custom_msgs__srv__detail__receive_order__rosidl_typesupport_introspection_c__ReceiveOrder_service_type_support_handle;
}
