#ifndef CAMERAPOWERCONTROLLER_H
#define CAMERAPOWERCONTROLLER_H

#include "SerialPortManager.h"

class CameraPowerController
{
public:
    CameraPowerController(SerialPortManager* serialPortManager);

    void turnOnCamera();
    void turnOffCamera();

private:
    SerialPortManager* mSerialPortManager;
};

#endif
