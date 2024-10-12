// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motoros2_interfaces:srv/ListInformJobs.idl
// generated code does not contain a copyright notice

#ifndef MOTOROS2_INTERFACES__SRV__DETAIL__LIST_INFORM_JOBS__TRAITS_HPP_
#define MOTOROS2_INTERFACES__SRV__DETAIL__LIST_INFORM_JOBS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "motoros2_interfaces/srv/detail/list_inform_jobs__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace motoros2_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListInformJobs_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListInformJobs_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListInformJobs_Request & msg, bool use_flow_style = false)
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
  const motoros2_interfaces::srv::ListInformJobs_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  motoros2_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motoros2_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const motoros2_interfaces::srv::ListInformJobs_Request & msg)
{
  return motoros2_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<motoros2_interfaces::srv::ListInformJobs_Request>()
{
  return "motoros2_interfaces::srv::ListInformJobs_Request";
}

template<>
inline const char * name<motoros2_interfaces::srv::ListInformJobs_Request>()
{
  return "motoros2_interfaces/srv/ListInformJobs_Request";
}

template<>
struct has_fixed_size<motoros2_interfaces::srv::ListInformJobs_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<motoros2_interfaces::srv::ListInformJobs_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<motoros2_interfaces::srv::ListInformJobs_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace motoros2_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListInformJobs_Response & msg,
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

  // member: names
  {
    if (msg.names.size() == 0) {
      out << "names: []";
    } else {
      out << "names: [";
      size_t pending_items = msg.names.size();
      for (auto item : msg.names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListInformJobs_Response & msg,
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

  // member: names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.names.size() == 0) {
      out << "names: []\n";
    } else {
      out << "names:\n";
      for (auto item : msg.names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListInformJobs_Response & msg, bool use_flow_style = false)
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
  const motoros2_interfaces::srv::ListInformJobs_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  motoros2_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motoros2_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const motoros2_interfaces::srv::ListInformJobs_Response & msg)
{
  return motoros2_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<motoros2_interfaces::srv::ListInformJobs_Response>()
{
  return "motoros2_interfaces::srv::ListInformJobs_Response";
}

template<>
inline const char * name<motoros2_interfaces::srv::ListInformJobs_Response>()
{
  return "motoros2_interfaces/srv/ListInformJobs_Response";
}

template<>
struct has_fixed_size<motoros2_interfaces::srv::ListInformJobs_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<motoros2_interfaces::srv::ListInformJobs_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<motoros2_interfaces::srv::ListInformJobs_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<motoros2_interfaces::srv::ListInformJobs>()
{
  return "motoros2_interfaces::srv::ListInformJobs";
}

template<>
inline const char * name<motoros2_interfaces::srv::ListInformJobs>()
{
  return "motoros2_interfaces/srv/ListInformJobs";
}

template<>
struct has_fixed_size<motoros2_interfaces::srv::ListInformJobs>
  : std::integral_constant<
    bool,
    has_fixed_size<motoros2_interfaces::srv::ListInformJobs_Request>::value &&
    has_fixed_size<motoros2_interfaces::srv::ListInformJobs_Response>::value
  >
{
};

template<>
struct has_bounded_size<motoros2_interfaces::srv::ListInformJobs>
  : std::integral_constant<
    bool,
    has_bounded_size<motoros2_interfaces::srv::ListInformJobs_Request>::value &&
    has_bounded_size<motoros2_interfaces::srv::ListInformJobs_Response>::value
  >
{
};

template<>
struct is_service<motoros2_interfaces::srv::ListInformJobs>
  : std::true_type
{
};

template<>
struct is_service_request<motoros2_interfaces::srv::ListInformJobs_Request>
  : std::true_type
{
};

template<>
struct is_service_response<motoros2_interfaces::srv::ListInformJobs_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOTOROS2_INTERFACES__SRV__DETAIL__LIST_INFORM_JOBS__TRAITS_HPP_
