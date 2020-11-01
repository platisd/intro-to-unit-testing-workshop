add_subdirectory(libraries/SerialPortManager)
add_subdirectory(camera_power_controller)

# camera_main
add_executable(camera_main camera_main.cpp)
target_link_libraries(camera_main
        PRIVATE
        asio_serial_port_manager
        camera_power_controller
        )
