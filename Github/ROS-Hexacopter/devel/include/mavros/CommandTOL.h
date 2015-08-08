// Generated by gencpp from file mavros/CommandTOL.msg
// DO NOT EDIT!


#ifndef MAVROS_MESSAGE_COMMANDTOL_H
#define MAVROS_MESSAGE_COMMANDTOL_H

#include <ros/service_traits.h>


#include <mavros/CommandTOLRequest.h>
#include <mavros/CommandTOLResponse.h>


namespace mavros
{

struct CommandTOL
{

typedef CommandTOLRequest Request;
typedef CommandTOLResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CommandTOL
} // namespace mavros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::mavros::CommandTOL > {
  static const char* value()
  {
    return "93ff4eaa9907f58c0e7a909cddce23e2";
  }

  static const char* value(const ::mavros::CommandTOL&) { return value(); }
};

template<>
struct DataType< ::mavros::CommandTOL > {
  static const char* value()
  {
    return "mavros/CommandTOL";
  }

  static const char* value(const ::mavros::CommandTOL&) { return value(); }
};


// service_traits::MD5Sum< ::mavros::CommandTOLRequest> should match 
// service_traits::MD5Sum< ::mavros::CommandTOL > 
template<>
struct MD5Sum< ::mavros::CommandTOLRequest>
{
  static const char* value()
  {
    return MD5Sum< ::mavros::CommandTOL >::value();
  }
  static const char* value(const ::mavros::CommandTOLRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros::CommandTOLRequest> should match 
// service_traits::DataType< ::mavros::CommandTOL > 
template<>
struct DataType< ::mavros::CommandTOLRequest>
{
  static const char* value()
  {
    return DataType< ::mavros::CommandTOL >::value();
  }
  static const char* value(const ::mavros::CommandTOLRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::mavros::CommandTOLResponse> should match 
// service_traits::MD5Sum< ::mavros::CommandTOL > 
template<>
struct MD5Sum< ::mavros::CommandTOLResponse>
{
  static const char* value()
  {
    return MD5Sum< ::mavros::CommandTOL >::value();
  }
  static const char* value(const ::mavros::CommandTOLResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros::CommandTOLResponse> should match 
// service_traits::DataType< ::mavros::CommandTOL > 
template<>
struct DataType< ::mavros::CommandTOLResponse>
{
  static const char* value()
  {
    return DataType< ::mavros::CommandTOL >::value();
  }
  static const char* value(const ::mavros::CommandTOLResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MAVROS_MESSAGE_COMMANDTOL_H