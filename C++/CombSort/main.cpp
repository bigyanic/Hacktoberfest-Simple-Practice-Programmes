#include <iostream>
#include <array>
#include "combSort.h"

int main()
{
    std::array<int, 6> a = { 7, 3, 5, 4, 5, 9};

    for (int t : a)
    {
        std::cout << t << ' ';
    }

    combSort(a);

    std::cout << '\n';
    for (int t : a)
    {
        std::cout << t << ' ';
    }
    return 0;
}