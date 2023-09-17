// Generated by gencpp from file ublox_msgs/EsfINS.msg
// DO NOT EDIT!


#ifndef UBLOX_MSGS_MESSAGE_ESFINS_H
#define UBLOX_MSGS_MESSAGE_ESFINS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ublox_msgs
{
template <class ContainerAllocator>
struct EsfINS_
{
  typedef EsfINS_<ContainerAllocator> Type;

  EsfINS_()
    : bitfield0(0)
    , reserved1()
    , iTOW(0)
    , xAngRate(0)
    , yAngRate(0)
    , zAngRate(0)
    , xAccel(0)
    , yAccel(0)
    , zAccel(0)  {
      reserved1.assign(0);
  }
  EsfINS_(const ContainerAllocator& _alloc)
    : bitfield0(0)
    , reserved1()
    , iTOW(0)
    , xAngRate(0)
    , yAngRate(0)
    , zAngRate(0)
    , xAccel(0)
    , yAccel(0)
    , zAccel(0)  {
  (void)_alloc;
      reserved1.assign(0);
  }



   typedef uint32_t _bitfield0_type;
  _bitfield0_type bitfield0;

   typedef boost::array<uint8_t, 4>  _reserved1_type;
  _reserved1_type reserved1;

   typedef uint32_t _iTOW_type;
  _iTOW_type iTOW;

   typedef int32_t _xAngRate_type;
  _xAngRate_type xAngRate;

   typedef int32_t _yAngRate_type;
  _yAngRate_type yAngRate;

   typedef int32_t _zAngRate_type;
  _zAngRate_type zAngRate;

   typedef int32_t _xAccel_type;
  _xAccel_type xAccel;

   typedef int32_t _yAccel_type;
  _yAccel_type yAccel;

   typedef int32_t _zAccel_type;
  _zAccel_type zAccel;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(CLASS_ID)
  #undef CLASS_ID
#endif
#if defined(_WIN32) && defined(MESSAGE_ID)
  #undef MESSAGE_ID
#endif
#if defined(_WIN32) && defined(BITFIELD0_VERSION)
  #undef BITFIELD0_VERSION
#endif
#if defined(_WIN32) && defined(BITFIELD0_X_ANG_RATE_VALID)
  #undef BITFIELD0_X_ANG_RATE_VALID
#endif
#if defined(_WIN32) && defined(BITFIELD0_Y_ANG_RATE_VALID)
  #undef BITFIELD0_Y_ANG_RATE_VALID
#endif
#if defined(_WIN32) && defined(BITFIELD0_Z_ANG_RATE_VALID)
  #undef BITFIELD0_Z_ANG_RATE_VALID
#endif
#if defined(_WIN32) && defined(BITFIELD0_X_ACCEL_VALID)
  #undef BITFIELD0_X_ACCEL_VALID
#endif
#if defined(_WIN32) && defined(BITFIELD0_Y_ACCEL_VALID)
  #undef BITFIELD0_Y_ACCEL_VALID
#endif
#if defined(_WIN32) && defined(BITFIELD0_Z_ACCEL_VALID)
  #undef BITFIELD0_Z_ACCEL_VALID
#endif

  enum {
    CLASS_ID = 16u,
    MESSAGE_ID = 21u,
    BITFIELD0_VERSION = 255u,
    BITFIELD0_X_ANG_RATE_VALID = 256u,
    BITFIELD0_Y_ANG_RATE_VALID = 512u,
    BITFIELD0_Z_ANG_RATE_VALID = 1024u,
    BITFIELD0_X_ACCEL_VALID = 2048u,
    BITFIELD0_Y_ACCEL_VALID = 4096u,
    BITFIELD0_Z_ACCEL_VALID = 8192u,
  };


  typedef boost::shared_ptr< ::ublox_msgs::EsfINS_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::EsfINS_<ContainerAllocator> const> ConstPtr;

}; // struct EsfINS_

typedef ::ublox_msgs::EsfINS_<std::allocator<void> > EsfINS;

typedef boost::shared_ptr< ::ublox_msgs::EsfINS > EsfINSPtr;
typedef boost::shared_ptr< ::ublox_msgs::EsfINS const> EsfINSConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ublox_msgs::EsfINS_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ublox_msgs::EsfINS_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ublox_msgs::EsfINS_<ContainerAllocator1> & lhs, const ::ublox_msgs::EsfINS_<ContainerAllocator2> & rhs)
{
  return lhs.bitfield0 == rhs.bitfield0 &&
    lhs.reserved1 == rhs.reserved1 &&
    lhs.iTOW == rhs.iTOW &&
    lhs.xAngRate == rhs.xAngRate &&
    lhs.yAngRate == rhs.yAngRate &&
    lhs.zAngRate == rhs.zAngRate &&
    lhs.xAccel == rhs.xAccel &&
    lhs.yAccel == rhs.yAccel &&
    lhs.zAccel == rhs.zAccel;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ublox_msgs::EsfINS_<ContainerAllocator1> & lhs, const ::ublox_msgs::EsfINS_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ublox_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::EsfINS_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::EsfINS_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::EsfINS_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::EsfINS_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::EsfINS_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::EsfINS_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::EsfINS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "975d05e9503737524d7e47a42cb9fff1";
  }

  static const char* value(const ::ublox_msgs::EsfINS_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x975d05e950373752ULL;
  static const uint64_t static_value2 = 0x4d7e47a42cb9fff1ULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::EsfINS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ublox_msgs/EsfINS";
  }

  static const char* value(const ::ublox_msgs::EsfINS_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::EsfINS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ESF-INS (0x10 0x15)\n"
"# Vehicle dynamics information\n"
"# \n"
"# This message outputs information about vehicle dynamics computed by the \n"
"# Inertial Navigation System (INS) during ESF-based navigation.\n"
"# For ADR products, the output dynamics information (angular rates and \n"
"# accelerations) is expressed with respect to the vehicle-frame.\n"
"# For UDR products, the output dynamics information (angular rates and \n"
"# accelerations) is expressed with respect to the body-frame.\n"
"#\n"
"\n"
"uint8 CLASS_ID = 16\n"
"uint8 MESSAGE_ID = 21\n"
"\n"
"uint32 bitfield0      # Bitfield (see graphic below)\n"
"uint32 BITFIELD0_VERSION = 255            # Message version (1 for this version).\n"
"uint32 BITFIELD0_X_ANG_RATE_VALID = 256   # Compensated x-axis angular rate data \n"
"                                          # validity flag\n"
"uint32 BITFIELD0_Y_ANG_RATE_VALID = 512   # Compensated y-axis angular rate data \n"
"                                          # validity flag\n"
"uint32 BITFIELD0_Z_ANG_RATE_VALID = 1024  # Compensated z-axis angular rate data \n"
"                                          # validity flag\n"
"uint32 BITFIELD0_X_ACCEL_VALID = 2048     # Compensated x-axis acceleration data \n"
"                                          # validity flag\n"
"uint32 BITFIELD0_Y_ACCEL_VALID = 4096     # Compensated y-axis acceleration data \n"
"                                          # validity flag\n"
"uint32 BITFIELD0_Z_ACCEL_VALID = 8192     # Compensated z-axis acceleration data \n"
"                                          # validity flag\n"
"\n"
"uint8[4] reserved1    # Reserved\n"
"\n"
"uint32 iTOW           # GPS time of week of the navigation epoch [ms]\n"
"int32 xAngRate        # Compensated x-axis angular rate [deg/s / 1e-3]\n"
"int32 yAngRate        # Compensated y-axis angular rate [deg/s / 1e-3]\n"
"int32 zAngRate        # Compensated z-axis angular rate [deg/s / 1e-3]\n"
"int32 xAccel          # Compensated x-axis acceleration (gravity-free) [mg]\n"
"int32 yAccel          # Compensated y-axis acceleration (gravity-free) [mg]\n"
"int32 zAccel          # Compensated z-axis acceleration (gravity-free) [mg]\n"
;
  }

  static const char* value(const ::ublox_msgs::EsfINS_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ublox_msgs::EsfINS_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.bitfield0);
      stream.next(m.reserved1);
      stream.next(m.iTOW);
      stream.next(m.xAngRate);
      stream.next(m.yAngRate);
      stream.next(m.zAngRate);
      stream.next(m.xAccel);
      stream.next(m.yAccel);
      stream.next(m.zAccel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EsfINS_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::EsfINS_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ublox_msgs::EsfINS_<ContainerAllocator>& v)
  {
    s << indent << "bitfield0: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.bitfield0);
    s << indent << "reserved1[]" << std::endl;
    for (size_t i = 0; i < v.reserved1.size(); ++i)
    {
      s << indent << "  reserved1[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.reserved1[i]);
    }
    s << indent << "iTOW: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.iTOW);
    s << indent << "xAngRate: ";
    Printer<int32_t>::stream(s, indent + "  ", v.xAngRate);
    s << indent << "yAngRate: ";
    Printer<int32_t>::stream(s, indent + "  ", v.yAngRate);
    s << indent << "zAngRate: ";
    Printer<int32_t>::stream(s, indent + "  ", v.zAngRate);
    s << indent << "xAccel: ";
    Printer<int32_t>::stream(s, indent + "  ", v.xAccel);
    s << indent << "yAccel: ";
    Printer<int32_t>::stream(s, indent + "  ", v.yAccel);
    s << indent << "zAccel: ";
    Printer<int32_t>::stream(s, indent + "  ", v.zAccel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_ESFINS_H
