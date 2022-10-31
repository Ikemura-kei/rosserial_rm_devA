#ifndef _ROS_robot_message_voice_cast_h
#define _ROS_robot_message_voice_cast_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace robot_message
{

  class voice_cast : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef const char* _msg_type;
      _msg_type msg;
      typedef uint8_t _priority_type;
      _priority_type priority;
      typedef const char* _prefix_type;
      _prefix_type prefix;

    voice_cast():
      header(),
      msg(""),
      priority(0),
      prefix("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      uint32_t length_msg = strlen(this->msg);
      varToArr(outbuffer + offset, length_msg);
      offset += 4;
      memcpy(outbuffer + offset, this->msg, length_msg);
      offset += length_msg;
      *(outbuffer + offset + 0) = (this->priority >> (8 * 0)) & 0xFF;
      offset += sizeof(this->priority);
      uint32_t length_prefix = strlen(this->prefix);
      varToArr(outbuffer + offset, length_prefix);
      offset += 4;
      memcpy(outbuffer + offset, this->prefix, length_prefix);
      offset += length_prefix;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint32_t length_msg;
      arrToVar(length_msg, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_msg; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_msg-1]=0;
      this->msg = (char *)(inbuffer + offset-1);
      offset += length_msg;
      this->priority =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->priority);
      uint32_t length_prefix;
      arrToVar(length_prefix, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_prefix; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_prefix-1]=0;
      this->prefix = (char *)(inbuffer + offset-1);
      offset += length_prefix;
     return offset;
    }

    virtual const char * getType() override { return "robot_message/voice_cast"; };
    virtual const char * getMD5() override { return "062ceeba558b475284cd1ef57b74a888"; };

  };

}
#endif
