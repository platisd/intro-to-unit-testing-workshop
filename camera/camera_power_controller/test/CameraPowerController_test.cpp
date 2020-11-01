#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "CameraPowerController.h"
#include "MockSerialPortManager.h"

struct CameraPowerControllerTest : public ::testing::Test
{
    MockSerialPortManager mSerialPortManager;
    CameraPowerController mCameraPowerController{&mSerialPortManager};
};

TEST_F(CameraPowerControllerTest,
       turnOnCamera_WhenCalled_WillSendCorrectMessage)
{
    // TODO: Write this test
}

TEST_F(CameraPowerControllerTest,
       turnOffCamera_WhenCalled_WillSendCorrectMessage)
{
    // TODO: Write this test
}
