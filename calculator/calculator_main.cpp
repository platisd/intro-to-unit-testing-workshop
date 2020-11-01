#include <iostream>

#include "calculator.h"

int main()
{
    std::cout << calculator::add(6, -2) << std::endl;
    std::cout << calculator::subtract(6, -2) << std::endl;
    std::cout << calculator::divide(6, -2) << std::endl;

    return 0;
}
