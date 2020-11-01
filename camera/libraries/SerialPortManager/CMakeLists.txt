# SerialPortManager
add_library(serial_port_manager_interface INTERFACE)
target_include_directories(serial_port_manager_interface INTERFACE public)

# AsioSerialPortManager
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
add_library(asio_serial_port_manager src/AsioSerialPortManager.cpp)
target_include_directories(asio_serial_port_manager PUBLIC include)
target_link_libraries(asio_serial_port_manager
        PUBLIC
        serial_port_manager_interface
        Threads::Threads
        asio
        )
