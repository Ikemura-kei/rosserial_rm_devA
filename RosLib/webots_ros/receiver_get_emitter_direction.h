#ifndef _ROS_SERVICE_receiver_get_emitter_direction_h
#define _ROS_SERVICE_receiver_get_emitter_direction_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace webots_ros
{

static const char RECEIVER_GET_EMITTER_DIRECTION[] = "webots_ros/receiver_get_emitter_direction";

  class receiver_get_emitter_directionRequest : public ros::Msg
  {
    public:
      typedef uint8_t _ask_type;
      _ask_type ask;

    receiver_get_emitter_directionRequest():
      ask(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->ask >> (8 * 0)) & 0xFF;
      offset += sizeof(this->ask);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->ask =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->ask);
     return offset;
    }

    virtual const char * getType() override { return RECEIVER_GET_EMITTER_DIRECTION; };
    virtual const char * getMD5() override { return "f9df5232b65af94f73f79fe6d84301bb"; };

  };

  class receiver_get_emitter_directionResponse : public ros::Msg
  {
    public:
      uint32_t direction_length;
      typedef double _direction_type;
      _direction_type st_direction;
      _direction_type * direction;

    receiver_get_emitter_directionResponse():
      direction_length(0), st_direction(), direction(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->direction_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->direction_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->direction_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->direction_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->direction_length);
      for( uint32_t i = 0; i < direction_length; i++){
      union {
        double real;
        uint64_t base;
      } u_directioni;
      u_directioni.real = this->direction[i];
      *(outbuffer + offset + 0) = (u_directioni.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_directioni.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_directioni.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_directioni.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_directioni.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_directioni.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_directioni.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_directioni.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->direction[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t direction_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      direction_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      direction_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      direction_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->direction_length);
      if(direction_lengthT > direction_length)
        this->direction = (double*)realloc(this->direction, direction_lengthT * sizeof(double));
      direction_length = direction_lengthT;
      for( uint32_t i = 0; i < direction_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_direction;
      u_st_direction.base = 0;
      u_st_direction.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_direction.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_direction.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_direction.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_direction.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_direction.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_direction.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_direction.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_direction = u_st_direction.real;
      offset += sizeof(this->st_direction);
        memcpy( &(this->direction[i]), &(this->st_direction), sizeof(double));
      }
     return offset;
    }

    virtual const char * getType() override { return RECEIVER_GET_EMITTER_DIRECTION; };
    virtual const char * getMD5() override { return "3f61a8da1ee4e83406fd5157b36d50cb"; };

  };

  class receiver_get_emitter_direction {
    public:
    typedef receiver_get_emitter_directionRequest Request;
    typedef receiver_get_emitter_directionResponse Response;
  };

}
#endif
