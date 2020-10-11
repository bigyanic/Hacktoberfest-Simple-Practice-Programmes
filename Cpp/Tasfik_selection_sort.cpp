// Selection sort algorithm
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// T -> O(N^2) | S -> O(1)
void selectionSort(int *numbers, int size, bool increasing = true)
{
    /*
        numbers    : it contains the numbers to be sorted
        size       : total numbers in the numbers array
        increasing : if true array will be ascending else descending
    */
    //keep track of the biggest/smallest number
    //and swap it with the last index
    int bidx = -1;
    for (int i = 0; i < size - 1; i++)
    {
        bidx = 0;
        for (int j = 0; j < size - i; j++)
        {
            if (increasing && numbers[j] > numbers[bidx])
                bidx = j;
            else if (!increasing && numbers[j] < numbers[bidx])
                bidx = j;
        }
        swap(numbers[size - i - 1], numbers[bidx]);
    }
}

int main()
{
    int totalNumbers;
    //how many numbers you want to add
    cout << "Enter the total numbers: " << endl;
    cin >> totalNumbers;
    int numbers[1005];
    //take input the numbers
    cout << "Insert the numbers: " << endl;
    for (int i = 0; i < totalNumbers; i++)
    {
        cin >> numbers[i];
    }
    //helper function to sort the array
    selectionSort(numbers, totalNumbers);
    //print the sorted array
    cout << "The numbers after being sorted: " << endl;
    for (int i = 0; i < totalNumbers; i++)
    {
        cout << numbers[i] << " ";
    }
    return 0;
}