//
// main.cpp - main file of the Cognata SDK ROS2 sample
//
// Copyright Cognata Ltd. (c) 2018 - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited
// All trade-marks, trade names, service marks and logos referenced herein belong to their respective companies
// Proprietary and confidential

#include <std_msgs/msg/string.h>

#include "ros2_sample.hpp"

int main(int argc, char **argv)
{
    /// Verify that the version of the library that we linked against is
    /// compatible with the version of the headers we compiled against.
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    int result = 0;

    try
    {
        SampleCode sampleCode;
        sampleCode.run(argc, argv);
    }
    catch (SampleErrorCode e)
    {
        ERROR_MSG("Sample code finished with error code: " << e << std::endl);
        result = e;
    }

    return result;
}