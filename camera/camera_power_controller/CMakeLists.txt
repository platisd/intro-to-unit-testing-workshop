# CameraPowerController
add_library(camera_power_controller src/CameraPowerController.cpp)
target_include_directories(camera_power_controller PUBLIC include)
target_link_libraries(camera_power_controller
        PUBLIC
        serial_port_manager_interface
        )

add_subdirectory(test)
