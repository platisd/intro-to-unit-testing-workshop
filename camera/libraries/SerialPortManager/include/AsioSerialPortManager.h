#ifndef ASIOSERIALPORTMANAGER_H
#define ASIOSERIALPORTMANAGER_H

#include <asio.hpp>

#include "SerialPortManager.h"

class AsioSerialPortManager : public SerialPortManager
{
public:
    AsioSerialPortManager(std::string serialDevice, int baudRate);

    void send(std::string message) override;

private:
    asio::io_service mIoService;
    asio::serial_port mSerialPort{mIoService};
};

#endif // ASIOSERIALPORTMANAGER_H
