#include "CameraPowerController.h"

CameraPowerController::CameraPowerController(
    SerialPortManager* serialPortManager)
    : mSerialPortManager{serialPortManager}
{
}

void CameraPowerController::turnOnCamera()
{
    mSerialPortManager->send("ON");
}

void CameraPowerController::turnOffCamera()
{
    mSerialPortManager->send("OFF");
}
