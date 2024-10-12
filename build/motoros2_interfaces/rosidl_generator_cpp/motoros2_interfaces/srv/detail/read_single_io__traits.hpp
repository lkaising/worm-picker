// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motoros2_interfaces:srv/ReadSingleIO.idl
// generated code does not contain a copyright notice

#ifndef MOTOROS2_INTERFACES__SRV__DETAIL__READ_SINGLE_IO__TRAITS_HPP_
#define MOTOROS2_INTERFACES__SRV__DETAIL__READ_SINGLE_IO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "motoros2_interfaces/srv/detail/read_single_io__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace motoros2_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReadSingleIO_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: address
  {
    out << "address: ";
    rosidl_generator_traits::value_to_yaml(msg.address, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReadSingleIO_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "address: ";
    rosidl_generator_traits::value_to_yaml(msg.address, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReadSingleIO_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace motoros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use motoros2_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const motoros2_interfaces::srv::ReadSingleIO_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  motoros2_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motoros2_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const motoros2_interfaces::srv::ReadSingleIO_Request & msg)
{
  return motoros2_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<motoros2_interfaces::srv::ReadSingleIO_Request>()
{
  return "motoros2_interfaces::srv::ReadSingleIO_Request";
}

template<>
inline const char * name<motoros2_interfaces::srv::ReadSingleIO_Request>()
{
  return "motoros2_interfaces/srv/ReadSingleIO_Request";
}

template<>
struct has_fixed_size<motoros2_interfaces::srv::ReadSingleIO_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<motoros2_interfaces::srv::ReadSingleIO_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<motoros2_interfaces::srv::ReadSingleIO_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace motoros2_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReadSingleIO_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result_code
  {
    out << "result_code: ";
    rosidl_generator_traits::value_to_yaml(msg.result_code, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReadSingleIO_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_code: ";
    rosidl_generator_traits::value_to_yaml(msg.result_code, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReadSingleIO_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace motoros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use motoros2_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const motoros2_interfaces::srv::ReadSingleIO_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  motoros2_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motoros2_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const motoros2_interfaces::srv::ReadSingleIO_Response & msg)
{
  return motoros2_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<motoros2_interfaces::srv::ReadSingleIO_Response>()
{
  return "motoros2_interfaces::srv::ReadSingleIO_Response";
}

template<>
inline const char * name<motoros2_interfaces::srv::ReadSingleIO_Response>()
{
  return "motoros2_interfaces/srv/ReadSingleIO_Response";
}

template<>
struct has_fixed_size<motoros2_interfaces::srv::ReadSingleIO_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<motoros2_interfaces::srv::ReadSingleIO_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<motoros2_interfaces::srv::ReadSingleIO_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<motoros2_interfaces::srv::ReadSingleIO>()
{
  return "motoros2_interfaces::srv::ReadSingleIO";
}

template<>
inline const char * name<motoros2_interfaces::srv::ReadSingleIO>()
{
  return "motoros2_interfaces/srv/ReadSingleIO";
}

template<>
struct has_fixed_size<motoros2_interfaces::srv::ReadSingleIO>
  : std::integral_constant<
    bool,
    has_fixed_size<motoros2_interfaces::srv::ReadSingleIO_Request>::value &&
    has_fixed_size<motoros2_interfaces::srv::ReadSingleIO_Response>::value
  >
{
};

template<>
struct has_bounded_size<motoros2_interfaces::srv::ReadSingleIO>
  : std::integral_constant<
    bool,
    has_bounded_size<motoros2_interfaces::srv::ReadSingleIO_Request>::value &&
    has_bounded_size<motoros2_interfaces::srv::ReadSingleIO_Response>::value
  >
{
};

template<>
struct is_service<motoros2_interfaces::srv::ReadSingleIO>
  : std::true_type
{
};

template<>
struct is_service_request<motoros2_interfaces::srv::ReadSingleIO_Request>
  : std::true_type
{
};

template<>
struct is_service_response<motoros2_interfaces::srv::ReadSingleIO_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOTOROS2_INTERFACES__SRV__DETAIL__READ_SINGLE_IO__TRAITS_HPP_
