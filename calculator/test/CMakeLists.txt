# calculator_test
add_executable(calculator_test calculator_test.cpp)
target_link_libraries(calculator_test
    PRIVATE
    calculator)
configure_test(calculator_test)
