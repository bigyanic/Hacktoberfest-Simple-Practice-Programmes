#include <iostream>
#include <array>
#include "bisectionMethod.h"

int main()
{
    std::cout << bisection(0, 5, func2, 0.01) << '\n';

    return 0;
}