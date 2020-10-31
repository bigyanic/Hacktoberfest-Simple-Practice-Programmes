#include <iostream>
#include <array>
#include "countingSort.h"

int main()
{
    std::array<int, 10> arr = {1, 2, 3, 1, 0, 5, 9, 8, 2, 4};

    auto t = countingSort<10, 9>(arr);

    for (int a : arr)
    {
        std::cout << a << ' ';
    }

    std::cout << '\n';
    for (int a : t)
    {
        std::cout << a << ' ';
    }
    std::cout << '\n';

    return 0;
}