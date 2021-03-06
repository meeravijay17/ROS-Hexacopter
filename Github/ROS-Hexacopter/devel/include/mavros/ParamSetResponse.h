// Generated by gencpp from file mavros/ParamSetResponse.msg
// DO NOT EDIT!


#ifndef MAVROS_MESSAGE_PARAMSETRESPONSE_H
#define MAVROS_MESSAGE_PARAMSETRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <mavros/ParamValue.h>

namespace mavros
{
template <class ContainerAllocator>
struct ParamSetResponse_
{
  typedef ParamSetResponse_<ContainerAllocator> Type;

  ParamSetResponse_()
    : success(false)
    , value()  {
    }
  ParamSetResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , value(_alloc)  {
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef  ::mavros::ParamValue_<ContainerAllocator>  _value_type;
  _value_type value;




  typedef boost::shared_ptr< ::mavros::ParamSetResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros::ParamSetResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ParamSetResponse_

typedef ::mavros::ParamSetResponse_<std::allocator<void> > ParamSetResponse;

typedef boost::shared_ptr< ::mavros::ParamSetResponse > ParamSetResponsePtr;
typedef boost::shared_ptr< ::mavros::ParamSetResponse const> ParamSetResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros::ParamSetResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros::ParamSetResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'mavros': ['/home/mahesh/catkin_ws/src/mavros/mavros/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'diagnostic_msgs': ['/opt/ros/indigo/share/diagnostic_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros::ParamSetResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros::ParamSetResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros::ParamSetResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros::ParamSetResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros::ParamSetResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros::ParamSetResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros::ParamSetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "790d22b22b9dbf32a8e8d55578e25477";
  }

  static const char* value(const ::mavros::ParamSetResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x790d22b22b9dbf32ULL;
  static const uint64_t static_value2 = 0xa8e8d55578e25477ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros::ParamSetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros/ParamSetResponse";
  }

  static const char* value(const ::mavros::ParamSetResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros::ParamSetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n\
ParamValue value\n\
\n\
\n\
================================================================================\n\
MSG: mavros/ParamValue\n\
# Parameter value storage type.\n\
#\n\
# Integer and float fields:\n\
#\n\
# if integer != 0: it is integer value\n\
# else if real != 0.0: it is float value\n\
# else: it is zero.\n\
\n\
int64 integer\n\
float64 real\n\
";
  }

  static const char* value(const ::mavros::ParamSetResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros::ParamSetResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ParamSetResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros::ParamSetResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros::ParamSetResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "value: ";
    s << std::endl;
    Printer< ::mavros::ParamValue_<ContainerAllocator> >::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MESSAGE_PARAMSETRESPONSE_H
