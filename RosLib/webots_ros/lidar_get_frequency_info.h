#ifndef _ROS_SERVICE_lidar_get_frequency_info_h
#define _ROS_SERVICE_lidar_get_frequency_info_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace webots_ros
{

static const char LIDAR_GET_FREQUENCY_INFO[] = "webots_ros/lidar_get_frequency_info";

  class lidar_get_frequency_infoRequest : public ros::Msg
  {
    public:
      typedef uint8_t _ask_type;
      _ask_type ask;

    lidar_get_frequency_infoRequest():
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

    virtual const char * getType() override { return LIDAR_GET_FREQUENCY_INFO; };
    virtual const char * getMD5() override { return "f9df5232b65af94f73f79fe6d84301bb"; };

  };

  class lidar_get_frequency_infoResponse : public ros::Msg
  {
    public:
      typedef double _frequency_type;
      _frequency_type frequency;
      typedef double _minFrequency_type;
      _minFrequency_type minFrequency;
      typedef double _maxFrequency_type;
      _maxFrequency_type maxFrequency;

    lidar_get_frequency_infoResponse():
      frequency(0),
      minFrequency(0),
      maxFrequency(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_frequency;
      u_frequency.real = this->frequency;
      *(outbuffer + offset + 0) = (u_frequency.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_frequency.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_frequency.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_frequency.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_frequency.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_frequency.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_frequency.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_frequency.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->frequency);
      union {
        double real;
        uint64_t base;
      } u_minFrequency;
      u_minFrequency.real = this->minFrequency;
      *(outbuffer + offset + 0) = (u_minFrequency.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_minFrequency.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_minFrequency.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_minFrequency.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_minFrequency.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_minFrequency.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_minFrequency.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_minFrequency.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->minFrequency);
      union {
        double real;
        uint64_t base;
      } u_maxFrequency;
      u_maxFrequency.real = this->maxFrequency;
      *(outbuffer + offset + 0) = (u_maxFrequency.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_maxFrequency.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_maxFrequency.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_maxFrequency.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_maxFrequency.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_maxFrequency.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_maxFrequency.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_maxFrequency.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->maxFrequency);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_frequency;
      u_frequency.base = 0;
      u_frequency.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_frequency.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_frequency.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_frequency.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_frequency.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_frequency.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_frequency.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_frequency.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->frequency = u_frequency.real;
      offset += sizeof(this->frequency);
      union {
        double real;
        uint64_t base;
      } u_minFrequency;
      u_minFrequency.base = 0;
      u_minFrequency.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_minFrequency.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_minFrequency.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_minFrequency.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_minFrequency.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_minFrequency.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_minFrequency.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_minFrequency.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->minFrequency = u_minFrequency.real;
      offset += sizeof(this->minFrequency);
      union {
        double real;
        uint64_t base;
      } u_maxFrequency;
      u_maxFrequency.base = 0;
      u_maxFrequency.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_maxFrequency.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_maxFrequency.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_maxFrequency.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_maxFrequency.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_maxFrequency.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_maxFrequency.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_maxFrequency.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->maxFrequency = u_maxFrequency.real;
      offset += sizeof(this->maxFrequency);
     return offset;
    }

    virtual const char * getType() override { return LIDAR_GET_FREQUENCY_INFO; };
    virtual const char * getMD5() override { return "9814880637e7548b4e9c8076e7471dc3"; };

  };

  class lidar_get_frequency_info {
    public:
    typedef lidar_get_frequency_infoRequest Request;
    typedef lidar_get_frequency_infoResponse Response;
  };

}
#endif
