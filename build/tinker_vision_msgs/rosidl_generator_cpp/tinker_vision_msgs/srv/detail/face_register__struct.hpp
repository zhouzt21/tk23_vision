// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tinker_vision_msgs:srv/FaceRegister.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__SRV__DETAIL__FACE_REGISTER__STRUCT_HPP_
#define TINKER_VISION_MSGS__SRV__DETAIL__FACE_REGISTER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tinker_vision_msgs__srv__FaceRegister_Request __attribute__((deprecated))
#else
# define DEPRECATED__tinker_vision_msgs__srv__FaceRegister_Request __declspec(deprecated)
#endif

namespace tinker_vision_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FaceRegister_Request_
{
  using Type = FaceRegister_Request_<ContainerAllocator>;

  explicit FaceRegister_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0l;
    }
  }

  explicit FaceRegister_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0l;
    }
  }

  // field types and members
  using _state_type =
    int32_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const int32_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tinker_vision_msgs::srv::FaceRegister_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tinker_vision_msgs::srv::FaceRegister_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tinker_vision_msgs::srv::FaceRegister_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tinker_vision_msgs::srv::FaceRegister_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tinker_vision_msgs::srv::FaceRegister_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tinker_vision_msgs::srv::FaceRegister_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tinker_vision_msgs::srv::FaceRegister_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tinker_vision_msgs::srv::FaceRegister_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tinker_vision_msgs::srv::FaceRegister_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tinker_vision_msgs::srv::FaceRegister_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tinker_vision_msgs__srv__FaceRegister_Request
    std::shared_ptr<tinker_vision_msgs::srv::FaceRegister_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tinker_vision_msgs__srv__FaceRegister_Request
    std::shared_ptr<tinker_vision_msgs::srv::FaceRegister_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceRegister_Request_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaceRegister_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceRegister_Request_

// alias to use template instance with default allocator
using FaceRegister_Request =
  tinker_vision_msgs::srv::FaceRegister_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tinker_vision_msgs


#ifndef _WIN32
# define DEPRECATED__tinker_vision_msgs__srv__FaceRegister_Response __attribute__((deprecated))
#else
# define DEPRECATED__tinker_vision_msgs__srv__FaceRegister_Response __declspec(deprecated)
#endif

namespace tinker_vision_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FaceRegister_Response_
{
  using Type = FaceRegister_Response_<ContainerAllocator>;

  explicit FaceRegister_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->fail_info = "";
      this->info = "";
    }
  }

  explicit FaceRegister_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fail_info(_alloc),
    info(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->fail_info = "";
      this->info = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _fail_info_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fail_info_type fail_info;
  using _id_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _id_type id;
  using _info_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _info_type info;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__fail_info(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fail_info = _arg;
    return *this;
  }
  Type & set__id(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__info(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tinker_vision_msgs::srv::FaceRegister_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tinker_vision_msgs::srv::FaceRegister_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tinker_vision_msgs::srv::FaceRegister_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tinker_vision_msgs::srv::FaceRegister_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tinker_vision_msgs::srv::FaceRegister_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tinker_vision_msgs::srv::FaceRegister_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tinker_vision_msgs::srv::FaceRegister_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tinker_vision_msgs::srv::FaceRegister_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tinker_vision_msgs::srv::FaceRegister_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tinker_vision_msgs::srv::FaceRegister_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tinker_vision_msgs__srv__FaceRegister_Response
    std::shared_ptr<tinker_vision_msgs::srv::FaceRegister_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tinker_vision_msgs__srv__FaceRegister_Response
    std::shared_ptr<tinker_vision_msgs::srv::FaceRegister_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceRegister_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->fail_info != other.fail_info) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->info != other.info) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaceRegister_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceRegister_Response_

// alias to use template instance with default allocator
using FaceRegister_Response =
  tinker_vision_msgs::srv::FaceRegister_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tinker_vision_msgs

namespace tinker_vision_msgs
{

namespace srv
{

struct FaceRegister
{
  using Request = tinker_vision_msgs::srv::FaceRegister_Request;
  using Response = tinker_vision_msgs::srv::FaceRegister_Response;
};

}  // namespace srv

}  // namespace tinker_vision_msgs

#endif  // TINKER_VISION_MSGS__SRV__DETAIL__FACE_REGISTER__STRUCT_HPP_
