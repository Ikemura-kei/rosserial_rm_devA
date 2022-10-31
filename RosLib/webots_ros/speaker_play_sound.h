#ifndef _ROS_SERVICE_speaker_play_sound_h
#define _ROS_SERVICE_speaker_play_sound_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace webots_ros
{

static const char SPEAKER_PLAY_SOUND[] = "webots_ros/speaker_play_sound";

  class speaker_play_soundRequest : public ros::Msg
  {
    public:
      typedef const char* _sound_type;
      _sound_type sound;
      typedef double _volume_type;
      _volume_type volume;
      typedef double _pitch_type;
      _pitch_type pitch;
      typedef double _balance_type;
      _balance_type balance;
      typedef int8_t _loop_type;
      _loop_type loop;

    speaker_play_soundRequest():
      sound(""),
      volume(0),
      pitch(0),
      balance(0),
      loop(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      uint32_t length_sound = strlen(this->sound);
      varToArr(outbuffer + offset, length_sound);
      offset += 4;
      memcpy(outbuffer + offset, this->sound, length_sound);
      offset += length_sound;
      union {
        double real;
        uint64_t base;
      } u_volume;
      u_volume.real = this->volume;
      *(outbuffer + offset + 0) = (u_volume.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_volume.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_volume.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_volume.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_volume.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_volume.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_volume.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_volume.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->volume);
      union {
        double real;
        uint64_t base;
      } u_pitch;
      u_pitch.real = this->pitch;
      *(outbuffer + offset + 0) = (u_pitch.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pitch.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pitch.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pitch.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pitch.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pitch.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pitch.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pitch.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pitch);
      union {
        double real;
        uint64_t base;
      } u_balance;
      u_balance.real = this->balance;
      *(outbuffer + offset + 0) = (u_balance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_balance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_balance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_balance.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_balance.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_balance.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_balance.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_balance.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->balance);
      union {
        int8_t real;
        uint8_t base;
      } u_loop;
      u_loop.real = this->loop;
      *(outbuffer + offset + 0) = (u_loop.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->loop);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t length_sound;
      arrToVar(length_sound, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_sound; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_sound-1]=0;
      this->sound = (char *)(inbuffer + offset-1);
      offset += length_sound;
      union {
        double real;
        uint64_t base;
      } u_volume;
      u_volume.base = 0;
      u_volume.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_volume.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_volume.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_volume.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_volume.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_volume.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_volume.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_volume.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->volume = u_volume.real;
      offset += sizeof(this->volume);
      union {
        double real;
        uint64_t base;
      } u_pitch;
      u_pitch.base = 0;
      u_pitch.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pitch.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pitch.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pitch.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_pitch.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_pitch.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_pitch.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_pitch.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->pitch = u_pitch.real;
      offset += sizeof(this->pitch);
      union {
        double real;
        uint64_t base;
      } u_balance;
      u_balance.base = 0;
      u_balance.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_balance.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_balance.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_balance.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_balance.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_balance.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_balance.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_balance.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->balance = u_balance.real;
      offset += sizeof(this->balance);
      union {
        int8_t real;
        uint8_t base;
      } u_loop;
      u_loop.base = 0;
      u_loop.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->loop = u_loop.real;
      offset += sizeof(this->loop);
     return offset;
    }

    virtual const char * getType() override { return SPEAKER_PLAY_SOUND; };
    virtual const char * getMD5() override { return "6dbd4a93693dce0672c3d423cfbc9b11"; };

  };

  class speaker_play_soundResponse : public ros::Msg
  {
    public:
      typedef int8_t _success_type;
      _success_type success;

    speaker_play_soundResponse():
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

    virtual const char * getType() override { return SPEAKER_PLAY_SOUND; };
    virtual const char * getMD5() override { return "0b13460cb14006d3852674b4c614f25f"; };

  };

  class speaker_play_sound {
    public:
    typedef speaker_play_soundRequest Request;
    typedef speaker_play_soundResponse Response;
  };

}
#endif
