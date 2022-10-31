#ifndef _ROS_SERVICE_motor_set_control_pid_h
#define _ROS_SERVICE_motor_set_control_pid_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace webots_ros
{

static const char MOTOR_SET_CONTROL_PID[] = "webots_ros/motor_set_control_pid";

  class motor_set_control_pidRequest : public ros::Msg
  {
    public:
      typedef double _controlp_type;
      _controlp_type controlp;
      typedef double _controli_type;
      _controli_type controli;
      typedef double _controld_type;
      _controld_type controld;

    motor_set_control_pidRequest():
      controlp(0),
      controli(0),
      controld(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_controlp;
      u_controlp.real = this->controlp;
      *(outbuffer + offset + 0) = (u_controlp.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_controlp.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_controlp.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_controlp.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_controlp.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_controlp.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_controlp.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_controlp.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->controlp);
      union {
        double real;
        uint64_t base;
      } u_controli;
      u_controli.real = this->controli;
      *(outbuffer + offset + 0) = (u_controli.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_controli.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_controli.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_controli.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_controli.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_controli.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_controli.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_controli.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->controli);
      union {
        double real;
        uint64_t base;
      } u_controld;
      u_controld.real = this->controld;
      *(outbuffer + offset + 0) = (u_controld.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_controld.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_controld.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_controld.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_controld.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_controld.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_controld.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_controld.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->controld);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_controlp;
      u_controlp.base = 0;
      u_controlp.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_controlp.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_controlp.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_controlp.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_controlp.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_controlp.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_controlp.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_controlp.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->controlp = u_controlp.real;
      offset += sizeof(this->controlp);
      union {
        double real;
        uint64_t base;
      } u_controli;
      u_controli.base = 0;
      u_controli.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_controli.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_controli.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_controli.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_controli.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_controli.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_controli.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_controli.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->controli = u_controli.real;
      offset += sizeof(this->controli);
      union {
        double real;
        uint64_t base;
      } u_controld;
      u_controld.base = 0;
      u_controld.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_controld.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_controld.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_controld.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_controld.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_controld.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_controld.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_controld.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->controld = u_controld.real;
      offset += sizeof(this->controld);
     return offset;
    }

    virtual const char * getType() override { return MOTOR_SET_CONTROL_PID; };
    virtual const char * getMD5() override { return "1ebf8f7154a3c8eec118cec294f2c32c"; };

  };

  class motor_set_control_pidResponse : public ros::Msg
  {
    public:
      typedef int8_t _success_type;
      _success_type success;

    motor_set_control_pidResponse():
      success(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        int8_t real;
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
        int8_t real;
        uint8_t base;
      } u_success;
      u_success.base = 0;
      u_success.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->success = u_success.real;
      offset += sizeof(this->success);
     return offset;
    }

    virtual const char * getType() override { return MOTOR_SET_CONTROL_PID; };
    virtual const char * getMD5() override { return "0b13460cb14006d3852674b4c614f25f"; };

  };

  class motor_set_control_pid {
    public:
    typedef motor_set_control_pidRequest Request;
    typedef motor_set_control_pidResponse Response;
  };

}
#endif
