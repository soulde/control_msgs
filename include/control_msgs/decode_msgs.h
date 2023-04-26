#ifndef __CONTROL_MSGS_control_MSGS_H__
#define __CONTROL_MSGS_control_MSGS_H__

#include <stdint.h>
#include <vector>
#include <control_msgs/OutputData.h>
#include <control_msgs/StatusData.h>
#include <control_msgs/PPROutputData.h>

namespace control_msgs
{

bool decodeOutputData(const std::vector<uint8_t> &data,
                      control_msgs::OutputData &output);

bool decodeStatusData(const std::vector<uint8_t> &data,
                      control_msgs::StatusData &status);

bool decodePPROutputData(const std::vector<uint8_t> &data,
                         control_msgs::PPROutputData &output);
}

#endif
