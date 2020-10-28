#include <iostream>
#include <array>
#include "countingSort.h"

int main()
{
    std::array<int, 4> arr = {1, 2, 3, 1};

    auto t = countingSort<4, 3>(arr);
/*
    for (int a : arr)
    {
        std::cout << a << ' ';
    }

    std::cout << '\n';
    for (int a : t)
    {
        std::cout << a << ' ';
    }
    std::cout << '\n';*/

    return 0;
}