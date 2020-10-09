// *** This Template was created by Tasfik Rahman ***
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number: " << endl;
    cin >> number;
    int mask = 1;
    stack<int> bits;
    while (number != 0)
    {
        int lastBit = (number & mask);
        bits.push(lastBit);
        number = number >> 1;
    }
    cout << "The binary form is: " << endl;
    while (!bits.empty())
    {
        cout << bits.top();
        bits.pop();
    }
    return 0;
}