// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motoros2_interfaces:srv/WriteSingleIO.idl
// generated code does not contain a copyright notice

#ifndef MOTOROS2_INTERFACES__SRV__DETAIL__WRITE_SINGLE_IO__STRUCT_HPP_
#define MOTOROS2_INTERFACES__SRV__DETAIL__WRITE_SINGLE_IO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__motoros2_interfaces__srv__WriteSingleIO_Request __attribute__((deprecated))
#else
# define DEPRECATED__motoros2_interfaces__srv__WriteSingleIO_Request __declspec(deprecated)
#endif

namespace motoros2_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WriteSingleIO_Request_
{
  using Type = WriteSingleIO_Request_<ContainerAllocator>;

  explicit WriteSingleIO_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->address = 0ul;
      this->value = 0l;
    }
  }

  explicit WriteSingleIO_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->address = 0ul;
      this->value = 0l;
    }
  }

  // field types and members
  using _address_type =
    uint32_t;
  _address_type address;
  using _value_type =
    int32_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__address(
    const uint32_t & _arg)
  {
    this->address = _arg;
    return *this;
  }
  Type & set__value(
    const int32_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motoros2_interfaces::srv::WriteSingleIO_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const motoros2_interfaces::srv::WriteSingleIO_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motoros2_interfaces::srv::WriteSingleIO_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motoros2_interfaces::srv::WriteSingleIO_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motoros2_interfaces::srv::WriteSingleIO_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motoros2_interfaces::srv::WriteSingleIO_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motoros2_interfaces::srv::WriteSingleIO_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motoros2_interfaces::srv::WriteSingleIO_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motoros2_interfaces::srv::WriteSingleIO_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motoros2_interfaces::srv::WriteSingleIO_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motoros2_interfaces__srv__WriteSingleIO_Request
    std::shared_ptr<motoros2_interfaces::srv::WriteSingleIO_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motoros2_interfaces__srv__WriteSingleIO_Request
    std::shared_ptr<motoros2_interfaces::srv::WriteSingleIO_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WriteSingleIO_Request_ & other) const
  {
    if (this->address != other.address) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const WriteSingleIO_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WriteSingleIO_Request_

// alias to use template instance with default allocator
using WriteSingleIO_Request =
  motoros2_interfaces::srv::WriteSingleIO_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace motoros2_interfaces


#ifndef _WIN32
# define DEPRECATED__motoros2_interfaces__srv__WriteSingleIO_Response __attribute__((deprecated))
#else
# define DEPRECATED__motoros2_interfaces__srv__WriteSingleIO_Response __declspec(deprecated)
#endif

namespace motoros2_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WriteSingleIO_Response_
{
  using Type = WriteSingleIO_Response_<ContainerAllocator>;

  explicit WriteSingleIO_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result_code = 0ul;
      this->message = "";
      this->success = false;
    }
  }

  explicit WriteSingleIO_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result_code = 0ul;
      this->message = "";
      this->success = false;
    }
  }

  // field types and members
  using _result_code_type =
    uint32_t;
  _result_code_type result_code;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__result_code(
    const uint32_t & _arg)
  {
    this->result_code = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motoros2_interfaces::srv::WriteSingleIO_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const motoros2_interfaces::srv::WriteSingleIO_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motoros2_interfaces::srv::WriteSingleIO_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motoros2_interfaces::srv::WriteSingleIO_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motoros2_interfaces::srv::WriteSingleIO_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motoros2_interfaces::srv::WriteSingleIO_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motoros2_interfaces::srv::WriteSingleIO_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motoros2_interfaces::srv::WriteSingleIO_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motoros2_interfaces::srv::WriteSingleIO_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motoros2_interfaces::srv::WriteSingleIO_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motoros2_interfaces__srv__WriteSingleIO_Response
    std::shared_ptr<motoros2_interfaces::srv::WriteSingleIO_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motoros2_interfaces__srv__WriteSingleIO_Response
    std::shared_ptr<motoros2_interfaces::srv::WriteSingleIO_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WriteSingleIO_Response_ & other) const
  {
    if (this->result_code != other.result_code) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const WriteSingleIO_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WriteSingleIO_Response_

// alias to use template instance with default allocator
using WriteSingleIO_Response =
  motoros2_interfaces::srv::WriteSingleIO_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace motoros2_interfaces

namespace motoros2_interfaces
{

namespace srv
{

struct WriteSingleIO
{
  using Request = motoros2_interfaces::srv::WriteSingleIO_Request;
  using Response = motoros2_interfaces::srv::WriteSingleIO_Response;
};

}  // namespace srv

}  // namespace motoros2_interfaces

#endif  // MOTOROS2_INTERFACES__SRV__DETAIL__WRITE_SINGLE_IO__STRUCT_HPP_
