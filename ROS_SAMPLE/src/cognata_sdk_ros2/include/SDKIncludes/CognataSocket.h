// CognataSocket.h
//
// Cognata Simulation Engine SDK
//
// Copyright Cognata Ltd. (c) 2021 - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited
// All trade-marks, trade names, service marks and logos referenced herein belong to their respective companies
// Proprietary and confidential
//

#ifndef __COGNATASOCKET_H__
#define __COGNATASOCKET_H__

#include <string>
#include <functional>
#include <vector>

#if defined(_MSC_VER)
    #pragma warning( push )
    #pragma warning( disable : 4127 4100 4018 4146 4244 4251 4267 4305 4355 4800 4996)
#endif
#include <ErrorCodes.pb.h>
#if defined(_MSC_VER)
    #pragma warning( pop )
#endif

#if defined(_MSC_VER)
    #pragma warning( push )
    #pragma warning( disable : 4309)
#endif
#include "sts_net.h"
#if defined(_MSC_VER)
    #pragma warning( pop )
#endif

namespace Cognata
{
namespace SDK
{

const uint32_t kBufferSize = 2048;

class CognataSocket
{
public:

    typedef std::function<void(uint8_t* buffer, uint64_t size, CognataErr& errCode)> cb_t;

    // Constructor and destructor
    CognataSocket();

    virtual ~CognataSocket();

    CognataErr connect(std::string IP, std::string port);
    CognataErr disconnect();
    CognataErr send(uint8_t* buffer, int size);
    CognataErr waitForMessage(float timeout);

    void register_callback(const cb_t &cb);

protected:

    CognataErr arrangeData(uint8_t * pNewData, int64_t newDataSize, int& numMessages);
    CognataErr waitForData(bool &ready, float timeout);

    sts_net_set_t m_SocketSet;
    sts_net_socket_t m_server;
    cb_t m_receiveCB;

    std::vector<uint8_t> m_msgBuffer;
    std::vector<uint8_t> m_RemainderBuffer;
};

} // namespace SDK
} // namespace Cognata

#endif // __COGNATASOCKET_H__
