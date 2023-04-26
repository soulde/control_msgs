#ifndef __CONTROL_MSGS_control_MSGS_H__
#define __CONTROL_MSGS_control_MSGS_H__

#include <stdint.h>
#include <vector>
#include <control_msgs/SO3Command.h>
#include <control_msgs/TRPYCommand.h>
#include <control_msgs/Gains.h>

namespace control_msgs
{

void encodeSO3Command(const control_msgs::SO3Command &so3_command,
                      std::vector<uint8_t> &output);
void encodeTRPYCommand(const control_msgs::TRPYCommand &trpy_command,
                       std::vector<uint8_t> &output);

void encodePPRGains(const control_msgs::Gains &gains,
                    std::vector<uint8_t> &output);
}

#endif
