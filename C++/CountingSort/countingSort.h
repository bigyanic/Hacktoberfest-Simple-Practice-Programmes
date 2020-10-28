#include <array>

template<size_t SIZE, const unsigned int MAX>
std::array<int, SIZE> countingSort(const std::array<int, SIZE> &array_to_sort)
{
    std::array<int, SIZE> array_sorted;
    std::array<int, MAX+1> tmp;

    for (unsigned int i = 0; i <= MAX; ++i)
    {
        tmp.at(i) = 0;
    }
    
    for (unsigned int i = 0; i < SIZE; ++i)
    {
        tmp.at(array_to_sort.at(i)) += 1;
    }

    for (unsigned int i = 0; i <= MAX; ++i)
    {
        tmp.at(i) += tmp.at(i-1);
    }

    for(int i = SIZE-1 ; i >= 0 ; --i)
    {
        array_sorted.at(--tmp.at(array_to_sort.at(i))) = array_to_sort.at(i);
    }

    return array_sorted;
}