#ifndef SERIALPORTMANAGER_H
#define SERIALPORTMANAGER_H

#include <string>

class SerialPortManager
{
public:
    virtual ~SerialPortManager() = default;

    virtual void send(std::string message) = 0;
};

#endif // SERIALPORTMANAGER_H
