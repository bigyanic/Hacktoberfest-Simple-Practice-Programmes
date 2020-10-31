#include <math.h>

template<typename T, size_t SIZE>
using t = std::array<T, SIZE>;

template<typename T>
void swap(T &a, T &b)
{
    const T tmp = a;
    a = b;
    b = tmp;
}

template<typename T, size_t SIZE>
void combSort(t<T, SIZE>& arr)
{
    int gap = SIZE;
    const double shrink = 1.3;
    bool is_sorted = false;

    while (!is_sorted)
    {
        gap = floor(gap / shrink);

        if (gap <= 1)
        {
            gap = 1;
            is_sorted = true;
        }

        for (int i = 0; i + gap < SIZE; ++i)
        {
            if (arr.at(i) > arr.at(i+gap))
            {
                swap(arr.at(i), arr.at(i + gap));
                is_sorted = false;
            }
        }
    }
}