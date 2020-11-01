# calculator
add_library(calculator src/calculator.cpp)
target_include_directories(calculator PUBLIC include)

# calculator_main
add_executable(calculator_main calculator_main.cpp)
target_link_libraries(calculator_main
    PRIVATE
    calculator)

add_subdirectory(test)
