#include <iostream>
#include "eulerMethod.h"

int main()
{
    std::cout << euler(0, 1.5, 1, func, 0.0001);
    return 0;
}