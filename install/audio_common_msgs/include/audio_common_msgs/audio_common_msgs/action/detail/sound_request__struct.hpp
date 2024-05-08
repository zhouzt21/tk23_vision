// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from audio_common_msgs:action/SoundRequest.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__ACTION__DETAIL__SOUND_REQUEST__STRUCT_HPP_
#define AUDIO_COMMON_MSGS__ACTION__DETAIL__SOUND_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'sound_request'
#include "audio_common_msgs/msg/detail/sound_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__audio_common_msgs__action__SoundRequest_Goal __attribute__((deprecated))
#else
# define DEPRECATED__audio_common_msgs__action__SoundRequest_Goal __declspec(deprecated)
#endif

namespace audio_common_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SoundRequest_Goal_
{
  using Type = SoundRequest_Goal_<ContainerAllocator>;

  explicit SoundRequest_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sound_request(_init)
  {
    (void)_init;
  }

  explicit SoundRequest_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sound_request(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _sound_request_type =
    audio_common_msgs::msg::SoundRequest_<ContainerAllocator>;
  _sound_request_type sound_request;

  // setters for named parameter idiom
  Type & set__sound_request(
    const audio_common_msgs::msg::SoundRequest_<ContainerAllocator> & _arg)
  {
    this->sound_request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audio_common_msgs::action::SoundRequest_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const audio_common_msgs::action::SoundRequest_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audio_common_msgs::action::SoundRequest_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audio_common_msgs::action::SoundRequest_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audio_common_msgs::action::SoundRequest_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audio_common_msgs::action::SoundRequest_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audio_common_msgs::action::SoundRequest_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audio_common_msgs::action::SoundRequest_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audio_common_msgs::action::SoundRequest_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audio_common_msgs::action::SoundRequest_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audio_common_msgs__action__SoundRequest_Goal
    std::shared_ptr<audio_common_msgs::action::SoundRequest_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audio_common_msgs__action__SoundRequest_Goal
    std::shared_ptr<audio_common_msgs::action::SoundRequest_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SoundRequest_Goal_ & other) const
  {
    if (this->sound_request != other.sound_request) {
      return false;
    }
    return true;
  }
  bool operator!=(const SoundRequest_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SoundRequest_Goal_

// alias to use template instance with default allocator
using SoundRequest_Goal =
  audio_common_msgs::action::SoundRequest_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace audio_common_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__audio_common_msgs__action__SoundRequest_Result __attribute__((deprecated))
#else
# define DEPRECATED__audio_common_msgs__action__SoundRequest_Result __declspec(deprecated)
#endif

namespace audio_common_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SoundRequest_Result_
{
  using Type = SoundRequest_Result_<ContainerAllocator>;

  explicit SoundRequest_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->playing = false;
    }
  }

  explicit SoundRequest_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->playing = false;
    }
  }

  // field types and members
  using _playing_type =
    bool;
  _playing_type playing;
  using _stamp_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__playing(
    const bool & _arg)
  {
    this->playing = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audio_common_msgs::action::SoundRequest_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const audio_common_msgs::action::SoundRequest_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audio_common_msgs::action::SoundRequest_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audio_common_msgs::action::SoundRequest_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audio_common_msgs::action::SoundRequest_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audio_common_msgs::action::SoundRequest_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audio_common_msgs::action::SoundRequest_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audio_common_msgs::action::SoundRequest_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audio_common_msgs::action::SoundRequest_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audio_common_msgs::action::SoundRequest_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audio_common_msgs__action__SoundRequest_Result
    std::shared_ptr<audio_common_msgs::action::SoundRequest_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audio_common_msgs__action__SoundRequest_Result
    std::shared_ptr<audio_common_msgs::action::SoundRequest_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SoundRequest_Result_ & other) const
  {
    if (this->playing != other.playing) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const SoundRequest_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SoundRequest_Result_

// alias to use template instance with default allocator
using SoundRequest_Result =
  audio_common_msgs::action::SoundRequest_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace audio_common_msgs


// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__audio_common_msgs__action__SoundRequest_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__audio_common_msgs__action__SoundRequest_Feedback __declspec(deprecated)
#endif

namespace audio_common_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SoundRequest_Feedback_
{
  using Type = SoundRequest_Feedback_<ContainerAllocator>;

  explicit SoundRequest_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->playing = false;
    }
  }

  explicit SoundRequest_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->playing = false;
    }
  }

  // field types and members
  using _playing_type =
    bool;
  _playing_type playing;
  using _stamp_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__playing(
    const bool & _arg)
  {
    this->playing = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audio_common_msgs::action::SoundRequest_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const audio_common_msgs::action::SoundRequest_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audio_common_msgs::action::SoundRequest_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audio_common_msgs::action::SoundRequest_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audio_common_msgs::action::SoundRequest_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audio_common_msgs::action::SoundRequest_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audio_common_msgs::action::SoundRequest_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audio_common_msgs::action::SoundRequest_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audio_common_msgs::action::SoundRequest_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audio_common_msgs::action::SoundRequest_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audio_common_msgs__action__SoundRequest_Feedback
    std::shared_ptr<audio_common_msgs::action::SoundRequest_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audio_common_msgs__action__SoundRequest_Feedback
    std::shared_ptr<audio_common_msgs::action::SoundRequest_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SoundRequest_Feedback_ & other) const
  {
    if (this->playing != other.playing) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const SoundRequest_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SoundRequest_Feedback_

// alias to use template instance with default allocator
using SoundRequest_Feedback =
  audio_common_msgs::action::SoundRequest_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace audio_common_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "audio_common_msgs/action/detail/sound_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__audio_common_msgs__action__SoundRequest_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__audio_common_msgs__action__SoundRequest_SendGoal_Request __declspec(deprecated)
#endif

namespace audio_common_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SoundRequest_SendGoal_Request_
{
  using Type = SoundRequest_SendGoal_Request_<ContainerAllocator>;

  explicit SoundRequest_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit SoundRequest_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    audio_common_msgs::action::SoundRequest_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const audio_common_msgs::action::SoundRequest_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audio_common_msgs::action::SoundRequest_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const audio_common_msgs::action::SoundRequest_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audio_common_msgs::action::SoundRequest_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audio_common_msgs::action::SoundRequest_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audio_common_msgs::action::SoundRequest_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audio_common_msgs::action::SoundRequest_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audio_common_msgs::action::SoundRequest_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audio_common_msgs::action::SoundRequest_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audio_common_msgs::action::SoundRequest_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audio_common_msgs::action::SoundRequest_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audio_common_msgs__action__SoundRequest_SendGoal_Request
    std::shared_ptr<audio_common_msgs::action::SoundRequest_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audio_common_msgs__action__SoundRequest_SendGoal_Request
    std::shared_ptr<audio_common_msgs::action::SoundRequest_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SoundRequest_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const SoundRequest_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SoundRequest_SendGoal_Request_

// alias to use template instance with default allocator
using SoundRequest_SendGoal_Request =
  audio_common_msgs::action::SoundRequest_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace audio_common_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__audio_common_msgs__action__SoundRequest_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__audio_common_msgs__action__SoundRequest_SendGoal_Response __declspec(deprecated)
#endif

namespace audio_common_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SoundRequest_SendGoal_Response_
{
  using Type = SoundRequest_SendGoal_Response_<ContainerAllocator>;

  explicit SoundRequest_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit SoundRequest_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    audio_common_msgs::action::SoundRequest_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const audio_common_msgs::action::SoundRequest_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audio_common_msgs::action::SoundRequest_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audio_common_msgs::action::SoundRequest_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audio_common_msgs::action::SoundRequest_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audio_common_msgs::action::SoundRequest_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audio_common_msgs::action::SoundRequest_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audio_common_msgs::action::SoundRequest_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audio_common_msgs::action::SoundRequest_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audio_common_msgs::action::SoundRequest_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audio_common_msgs__action__SoundRequest_SendGoal_Response
    std::shared_ptr<audio_common_msgs::action::SoundRequest_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audio_common_msgs__action__SoundRequest_SendGoal_Response
    std::shared_ptr<audio_common_msgs::action::SoundRequest_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SoundRequest_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const SoundRequest_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SoundRequest_SendGoal_Response_

// alias to use template instance with default allocator
using SoundRequest_SendGoal_Response =
  audio_common_msgs::action::SoundRequest_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace audio_common_msgs

namespace audio_common_msgs
{

namespace action
{

struct SoundRequest_SendGoal
{
  using Request = audio_common_msgs::action::SoundRequest_SendGoal_Request;
  using Response = audio_common_msgs::action::SoundRequest_SendGoal_Response;
};

}  // namespace action

}  // namespace audio_common_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__audio_common_msgs__action__SoundRequest_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__audio_common_msgs__action__SoundRequest_GetResult_Request __declspec(deprecated)
#endif

namespace audio_common_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SoundRequest_GetResult_Request_
{
  using Type = SoundRequest_GetResult_Request_<ContainerAllocator>;

  explicit SoundRequest_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit SoundRequest_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    audio_common_msgs::action::SoundRequest_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const audio_common_msgs::action::SoundRequest_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audio_common_msgs::action::SoundRequest_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audio_common_msgs::action::SoundRequest_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audio_common_msgs::action::SoundRequest_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audio_common_msgs::action::SoundRequest_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audio_common_msgs::action::SoundRequest_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audio_common_msgs::action::SoundRequest_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audio_common_msgs::action::SoundRequest_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audio_common_msgs::action::SoundRequest_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audio_common_msgs__action__SoundRequest_GetResult_Request
    std::shared_ptr<audio_common_msgs::action::SoundRequest_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audio_common_msgs__action__SoundRequest_GetResult_Request
    std::shared_ptr<audio_common_msgs::action::SoundRequest_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SoundRequest_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const SoundRequest_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SoundRequest_GetResult_Request_

// alias to use template instance with default allocator
using SoundRequest_GetResult_Request =
  audio_common_msgs::action::SoundRequest_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace audio_common_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "audio_common_msgs/action/detail/sound_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__audio_common_msgs__action__SoundRequest_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__audio_common_msgs__action__SoundRequest_GetResult_Response __declspec(deprecated)
#endif

namespace audio_common_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SoundRequest_GetResult_Response_
{
  using Type = SoundRequest_GetResult_Response_<ContainerAllocator>;

  explicit SoundRequest_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit SoundRequest_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    audio_common_msgs::action::SoundRequest_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const audio_common_msgs::action::SoundRequest_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audio_common_msgs::action::SoundRequest_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const audio_common_msgs::action::SoundRequest_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audio_common_msgs::action::SoundRequest_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audio_common_msgs::action::SoundRequest_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audio_common_msgs::action::SoundRequest_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audio_common_msgs::action::SoundRequest_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audio_common_msgs::action::SoundRequest_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audio_common_msgs::action::SoundRequest_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audio_common_msgs::action::SoundRequest_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audio_common_msgs::action::SoundRequest_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audio_common_msgs__action__SoundRequest_GetResult_Response
    std::shared_ptr<audio_common_msgs::action::SoundRequest_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audio_common_msgs__action__SoundRequest_GetResult_Response
    std::shared_ptr<audio_common_msgs::action::SoundRequest_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SoundRequest_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SoundRequest_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SoundRequest_GetResult_Response_

// alias to use template instance with default allocator
using SoundRequest_GetResult_Response =
  audio_common_msgs::action::SoundRequest_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace audio_common_msgs

namespace audio_common_msgs
{

namespace action
{

struct SoundRequest_GetResult
{
  using Request = audio_common_msgs::action::SoundRequest_GetResult_Request;
  using Response = audio_common_msgs::action::SoundRequest_GetResult_Response;
};

}  // namespace action

}  // namespace audio_common_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "audio_common_msgs/action/detail/sound_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__audio_common_msgs__action__SoundRequest_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__audio_common_msgs__action__SoundRequest_FeedbackMessage __declspec(deprecated)
#endif

namespace audio_common_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SoundRequest_FeedbackMessage_
{
  using Type = SoundRequest_FeedbackMessage_<ContainerAllocator>;

  explicit SoundRequest_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit SoundRequest_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    audio_common_msgs::action::SoundRequest_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const audio_common_msgs::action::SoundRequest_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audio_common_msgs::action::SoundRequest_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const audio_common_msgs::action::SoundRequest_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audio_common_msgs::action::SoundRequest_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audio_common_msgs::action::SoundRequest_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audio_common_msgs::action::SoundRequest_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audio_common_msgs::action::SoundRequest_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audio_common_msgs::action::SoundRequest_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audio_common_msgs::action::SoundRequest_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audio_common_msgs::action::SoundRequest_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audio_common_msgs::action::SoundRequest_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audio_common_msgs__action__SoundRequest_FeedbackMessage
    std::shared_ptr<audio_common_msgs::action::SoundRequest_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audio_common_msgs__action__SoundRequest_FeedbackMessage
    std::shared_ptr<audio_common_msgs::action::SoundRequest_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SoundRequest_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const SoundRequest_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SoundRequest_FeedbackMessage_

// alias to use template instance with default allocator
using SoundRequest_FeedbackMessage =
  audio_common_msgs::action::SoundRequest_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace audio_common_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace audio_common_msgs
{

namespace action
{

struct SoundRequest
{
  /// The goal message defined in the action definition.
  using Goal = audio_common_msgs::action::SoundRequest_Goal;
  /// The result message defined in the action definition.
  using Result = audio_common_msgs::action::SoundRequest_Result;
  /// The feedback message defined in the action definition.
  using Feedback = audio_common_msgs::action::SoundRequest_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = audio_common_msgs::action::SoundRequest_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = audio_common_msgs::action::SoundRequest_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = audio_common_msgs::action::SoundRequest_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct SoundRequest SoundRequest;

}  // namespace action

}  // namespace audio_common_msgs

#endif  // AUDIO_COMMON_MSGS__ACTION__DETAIL__SOUND_REQUEST__STRUCT_HPP_
