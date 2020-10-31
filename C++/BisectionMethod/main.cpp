#include <iostream>
#include <array>
#include "bisectionMethod.h"

int main()
{
    std::cout << bisection(1, 2, func3, 0.001) << '\n';

    return 0;
}