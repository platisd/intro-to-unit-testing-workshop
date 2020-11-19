#ifndef MOCKSERIALPORTMANAGER_H
#define MOCKSERIALPORTMANAGER_H

#include "gmock/gmock.h"

#include "SerialPortManager.h"

class MockSerialPortManager : public SerialPortManager
{
public:
    MOCK_METHOD(void, send, (std::string message), (override));
};

#endif
