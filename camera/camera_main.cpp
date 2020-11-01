#include "AsioSerialPortManager.h"
#include "CameraPowerController.h"

int main()
{
    AsioSerialPortManager serialPortManager{"/dev/ttyUSB100", 9600};
    CameraPowerController cameraPowerController{&serialPortManager};
    cameraPowerController.turnOnCamera();
    cameraPowerController.turnOffCamera();

    return 0;
}
