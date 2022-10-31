#ifndef _ROS_SERVICE_VoiceReco_h
#define _ROS_SERVICE_VoiceReco_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace robot_message
{

static const char VOICERECO[] = "robot_message/VoiceReco";

  class VoiceRecoRequest : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;

    VoiceRecoRequest():
      header()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return VOICERECO; };
    virtual const char * getMD5() override { return "d7be0bb39af8fb9129d5a76e6b63a290"; };

  };

  class VoiceRecoResponse : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef bool _isReady_type;
      _isReady_type isReady;
      typedef const char* _cmd_type;
      _cmd_type cmd;

    VoiceRecoResponse():
      header(),
      isReady(0),
      cmd("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_isReady;
      u_isReady.real = this->isReady;
      *(outbuffer + offset + 0) = (u_isReady.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->isReady);
      uint32_t length_cmd = strlen(this->cmd);
      varToArr(outbuffer + offset, length_cmd);
      offset += 4;
      memcpy(outbuffer + offset, this->cmd, length_cmd);
      offset += length_cmd;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_isReady;
      u_isReady.base = 0;
      u_isReady.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->isReady = u_isReady.real;
      offset += sizeof(this->isReady);
      uint32_t length_cmd;
      arrToVar(length_cmd, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_cmd; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_cmd-1]=0;
      this->cmd = (char *)(inbuffer + offset-1);
      offset += length_cmd;
     return offset;
    }

    virtual const char * getType() override { return VOICERECO; };
    virtual const char * getMD5() override { return "6ee22bcb84a5ed4e749346fadff310dd"; };

  };

  class VoiceReco {
    public:
    typedef VoiceRecoRequest Request;
    typedef VoiceRecoResponse Response;
  };

}
#endif
