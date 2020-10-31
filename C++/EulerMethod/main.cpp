#include <iostream>
#include "eulerMethod.h"

/**
* Euler method
* Solving  differential equations with a given initial value
* Args: Initial value (x0, y0), step size (h), pointer to function, e (default 0.01)
*/

int main()
{
    std::cout << euler(0, 1, 0.1, func1);
    return 0;
}