#ifndef _ROS_SERVICE_set_float_array_h
#define _ROS_SERVICE_set_float_array_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace webots_ros
{

static const char SET_FLOAT_ARRAY[] = "webots_ros/set_float_array";

  class set_float_arrayRequest : public ros::Msg
  {
    public:
      uint32_t values_length;
      typedef double _values_type;
      _values_type st_values;
      _values_type * values;

    set_float_arrayRequest():
      values_length(0), st_values(), values(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->values_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->values_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->values_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->values_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->values_length);
      for( uint32_t i = 0; i < values_length; i++){
      union {
        double real;
        uint64_t base;
      } u_valuesi;
      u_valuesi.real = this->values[i];
      *(outbuffer + offset + 0) = (u_valuesi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_valuesi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_valuesi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_valuesi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_valuesi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_valuesi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_valuesi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_valuesi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->values[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t values_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      values_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      values_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      values_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->values_length);
      if(values_lengthT > values_length)
        this->values = (double*)realloc(this->values, values_lengthT * sizeof(double));
      values_length = values_lengthT;
      for( uint32_t i = 0; i < values_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_values;
      u_st_values.base = 0;
      u_st_values.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_values.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_values.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_values.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_values.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_values.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_values.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_values.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_values = u_st_values.real;
      offset += sizeof(this->st_values);
        memcpy( &(this->values[i]), &(this->st_values), sizeof(double));
      }
     return offset;
    }

    virtual const char * getType() override { return SET_FLOAT_ARRAY; };
    virtual const char * getMD5() override { return "b9163d7c678dcd669317e43e46b63d96"; };

  };

  class set_float_arrayResponse : public ros::Msg
  {
    public:
      typedef bool _success_type;
      _success_type success;

    set_float_arrayResponse():
      success(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_success;
      u_success.real = this->success;
      *(outbuffer + offset + 0) = (u_success.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->success);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_success;
      u_success.base = 0;
      u_success.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->success = u_success.real;
      offset += sizeof(this->success);
     return offset;
    }

    virtual const char * getType() override { return SET_FLOAT_ARRAY; };
    virtual const char * getMD5() override { return "358e233cde0c8a8bcfea4ce193f8fc15"; };

  };

  class set_float_array {
    public:
    typedef set_float_arrayRequest Request;
    typedef set_float_arrayResponse Response;
  };

}
#endif
