// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:action/Cook.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__ACTION__DETAIL__COOK__STRUCT_HPP_
#define CUSTOM_MSGS__ACTION__DETAIL__COOK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_msgs__action__Cook_Goal __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__action__Cook_Goal __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Cook_Goal_
{
  using Type = Cook_Goal_<ContainerAllocator>;

  explicit Cook_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->menu_name = "";
    }
  }

  explicit Cook_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : menu_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->menu_name = "";
    }
  }

  // field types and members
  using _menu_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _menu_name_type menu_name;

  // setters for named parameter idiom
  Type & set__menu_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->menu_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::action::Cook_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::action::Cook_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::action::Cook_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::action::Cook_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::action::Cook_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::action::Cook_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::action::Cook_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::action::Cook_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::action::Cook_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::action::Cook_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__action__Cook_Goal
    std::shared_ptr<custom_msgs::action::Cook_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__action__Cook_Goal
    std::shared_ptr<custom_msgs::action::Cook_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Cook_Goal_ & other) const
  {
    if (this->menu_name != other.menu_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const Cook_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Cook_Goal_

// alias to use template instance with default allocator
using Cook_Goal =
  custom_msgs::action::Cook_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace custom_msgs


#ifndef _WIN32
# define DEPRECATED__custom_msgs__action__Cook_Result __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__action__Cook_Result __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Cook_Result_
{
  using Type = Cook_Result_<ContainerAllocator>;

  explicit Cook_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cook_result = "";
    }
  }

  explicit Cook_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cook_result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cook_result = "";
    }
  }

  // field types and members
  using _cook_result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cook_result_type cook_result;

  // setters for named parameter idiom
  Type & set__cook_result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cook_result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::action::Cook_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::action::Cook_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::action::Cook_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::action::Cook_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::action::Cook_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::action::Cook_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::action::Cook_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::action::Cook_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::action::Cook_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::action::Cook_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__action__Cook_Result
    std::shared_ptr<custom_msgs::action::Cook_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__action__Cook_Result
    std::shared_ptr<custom_msgs::action::Cook_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Cook_Result_ & other) const
  {
    if (this->cook_result != other.cook_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Cook_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Cook_Result_

// alias to use template instance with default allocator
using Cook_Result =
  custom_msgs::action::Cook_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace custom_msgs


#ifndef _WIN32
# define DEPRECATED__custom_msgs__action__Cook_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__action__Cook_Feedback __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Cook_Feedback_
{
  using Type = Cook_Feedback_<ContainerAllocator>;

  explicit Cook_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cook_status = "";
    }
  }

  explicit Cook_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cook_status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cook_status = "";
    }
  }

  // field types and members
  using _cook_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cook_status_type cook_status;

  // setters for named parameter idiom
  Type & set__cook_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cook_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::action::Cook_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::action::Cook_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::action::Cook_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::action::Cook_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::action::Cook_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::action::Cook_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::action::Cook_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::action::Cook_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::action::Cook_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::action::Cook_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__action__Cook_Feedback
    std::shared_ptr<custom_msgs::action::Cook_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__action__Cook_Feedback
    std::shared_ptr<custom_msgs::action::Cook_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Cook_Feedback_ & other) const
  {
    if (this->cook_status != other.cook_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const Cook_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Cook_Feedback_

// alias to use template instance with default allocator
using Cook_Feedback =
  custom_msgs::action::Cook_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace custom_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "custom_msgs/action/detail/cook__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs__action__Cook_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__action__Cook_SendGoal_Request __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Cook_SendGoal_Request_
{
  using Type = Cook_SendGoal_Request_<ContainerAllocator>;

  explicit Cook_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Cook_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    custom_msgs::action::Cook_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const custom_msgs::action::Cook_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::action::Cook_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::action::Cook_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::action::Cook_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::action::Cook_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::action::Cook_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::action::Cook_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::action::Cook_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::action::Cook_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::action::Cook_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::action::Cook_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__action__Cook_SendGoal_Request
    std::shared_ptr<custom_msgs::action::Cook_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__action__Cook_SendGoal_Request
    std::shared_ptr<custom_msgs::action::Cook_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Cook_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Cook_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Cook_SendGoal_Request_

// alias to use template instance with default allocator
using Cook_SendGoal_Request =
  custom_msgs::action::Cook_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace custom_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs__action__Cook_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__action__Cook_SendGoal_Response __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Cook_SendGoal_Response_
{
  using Type = Cook_SendGoal_Response_<ContainerAllocator>;

  explicit Cook_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Cook_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::action::Cook_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::action::Cook_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::action::Cook_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::action::Cook_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::action::Cook_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::action::Cook_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::action::Cook_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::action::Cook_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::action::Cook_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::action::Cook_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__action__Cook_SendGoal_Response
    std::shared_ptr<custom_msgs::action::Cook_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__action__Cook_SendGoal_Response
    std::shared_ptr<custom_msgs::action::Cook_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Cook_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Cook_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Cook_SendGoal_Response_

// alias to use template instance with default allocator
using Cook_SendGoal_Response =
  custom_msgs::action::Cook_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace custom_msgs

namespace custom_msgs
{

namespace action
{

struct Cook_SendGoal
{
  using Request = custom_msgs::action::Cook_SendGoal_Request;
  using Response = custom_msgs::action::Cook_SendGoal_Response;
};

}  // namespace action

}  // namespace custom_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs__action__Cook_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__action__Cook_GetResult_Request __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Cook_GetResult_Request_
{
  using Type = Cook_GetResult_Request_<ContainerAllocator>;

  explicit Cook_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Cook_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::action::Cook_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::action::Cook_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::action::Cook_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::action::Cook_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::action::Cook_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::action::Cook_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::action::Cook_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::action::Cook_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::action::Cook_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::action::Cook_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__action__Cook_GetResult_Request
    std::shared_ptr<custom_msgs::action::Cook_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__action__Cook_GetResult_Request
    std::shared_ptr<custom_msgs::action::Cook_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Cook_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Cook_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Cook_GetResult_Request_

// alias to use template instance with default allocator
using Cook_GetResult_Request =
  custom_msgs::action::Cook_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace custom_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "custom_msgs/action/detail/cook__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs__action__Cook_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__action__Cook_GetResult_Response __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Cook_GetResult_Response_
{
  using Type = Cook_GetResult_Response_<ContainerAllocator>;

  explicit Cook_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Cook_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    custom_msgs::action::Cook_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const custom_msgs::action::Cook_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::action::Cook_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::action::Cook_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::action::Cook_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::action::Cook_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::action::Cook_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::action::Cook_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::action::Cook_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::action::Cook_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::action::Cook_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::action::Cook_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__action__Cook_GetResult_Response
    std::shared_ptr<custom_msgs::action::Cook_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__action__Cook_GetResult_Response
    std::shared_ptr<custom_msgs::action::Cook_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Cook_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Cook_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Cook_GetResult_Response_

// alias to use template instance with default allocator
using Cook_GetResult_Response =
  custom_msgs::action::Cook_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace custom_msgs

namespace custom_msgs
{

namespace action
{

struct Cook_GetResult
{
  using Request = custom_msgs::action::Cook_GetResult_Request;
  using Response = custom_msgs::action::Cook_GetResult_Response;
};

}  // namespace action

}  // namespace custom_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "custom_msgs/action/detail/cook__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs__action__Cook_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__action__Cook_FeedbackMessage __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Cook_FeedbackMessage_
{
  using Type = Cook_FeedbackMessage_<ContainerAllocator>;

  explicit Cook_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Cook_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    custom_msgs::action::Cook_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const custom_msgs::action::Cook_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::action::Cook_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::action::Cook_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::action::Cook_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::action::Cook_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::action::Cook_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::action::Cook_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::action::Cook_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::action::Cook_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::action::Cook_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::action::Cook_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__action__Cook_FeedbackMessage
    std::shared_ptr<custom_msgs::action::Cook_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__action__Cook_FeedbackMessage
    std::shared_ptr<custom_msgs::action::Cook_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Cook_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Cook_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Cook_FeedbackMessage_

// alias to use template instance with default allocator
using Cook_FeedbackMessage =
  custom_msgs::action::Cook_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace custom_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace custom_msgs
{

namespace action
{

struct Cook
{
  /// The goal message defined in the action definition.
  using Goal = custom_msgs::action::Cook_Goal;
  /// The result message defined in the action definition.
  using Result = custom_msgs::action::Cook_Result;
  /// The feedback message defined in the action definition.
  using Feedback = custom_msgs::action::Cook_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = custom_msgs::action::Cook_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = custom_msgs::action::Cook_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = custom_msgs::action::Cook_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Cook Cook;

}  // namespace action

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__ACTION__DETAIL__COOK__STRUCT_HPP_
