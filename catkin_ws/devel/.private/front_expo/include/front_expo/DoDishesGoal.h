// Generated by gencpp from file front_expo/DoDishesGoal.msg
// DO NOT EDIT!


#ifndef FRONT_EXPO_MESSAGE_DODISHESGOAL_H
#define FRONT_EXPO_MESSAGE_DODISHESGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace front_expo
{
template <class ContainerAllocator>
struct DoDishesGoal_
{
  typedef DoDishesGoal_<ContainerAllocator> Type;

  DoDishesGoal_()
    : dishwasher_id(0)  {
    }
  DoDishesGoal_(const ContainerAllocator& _alloc)
    : dishwasher_id(0)  {
  (void)_alloc;
    }



   typedef uint32_t _dishwasher_id_type;
  _dishwasher_id_type dishwasher_id;





  typedef boost::shared_ptr< ::front_expo::DoDishesGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::front_expo::DoDishesGoal_<ContainerAllocator> const> ConstPtr;

}; // struct DoDishesGoal_

typedef ::front_expo::DoDishesGoal_<std::allocator<void> > DoDishesGoal;

typedef boost::shared_ptr< ::front_expo::DoDishesGoal > DoDishesGoalPtr;
typedef boost::shared_ptr< ::front_expo::DoDishesGoal const> DoDishesGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::front_expo::DoDishesGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::front_expo::DoDishesGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace front_expo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'front_expo': ['/home/rivindu/frontier_expo/catkin_ws/devel/.private/front_expo/share/front_expo/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::front_expo::DoDishesGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::front_expo::DoDishesGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::front_expo::DoDishesGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::front_expo::DoDishesGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::front_expo::DoDishesGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::front_expo::DoDishesGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::front_expo::DoDishesGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "65bd9e09a531006f4ecdeabe719004b9";
  }

  static const char* value(const ::front_expo::DoDishesGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x65bd9e09a531006fULL;
  static const uint64_t static_value2 = 0x4ecdeabe719004b9ULL;
};

template<class ContainerAllocator>
struct DataType< ::front_expo::DoDishesGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "front_expo/DoDishesGoal";
  }

  static const char* value(const ::front_expo::DoDishesGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::front_expo::DoDishesGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Define the goal\n"
"uint32 dishwasher_id  # Specify which dishwasher we want to use\n"
;
  }

  static const char* value(const ::front_expo::DoDishesGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::front_expo::DoDishesGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.dishwasher_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DoDishesGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::front_expo::DoDishesGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::front_expo::DoDishesGoal_<ContainerAllocator>& v)
  {
    s << indent << "dishwasher_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.dishwasher_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FRONT_EXPO_MESSAGE_DODISHESGOAL_H
