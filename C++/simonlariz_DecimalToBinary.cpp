#include <iostream>

using namespace std;

void decimalToBinary(int num)
{
    //Creation of array to store binary number
    int binaryArr[32];
    //While loop for binary conversion
    int i = 0;
    while (num > 0)
    {
        //Remainder of num stored in array
        binaryArr[i] = num % 2;
        num /= 2;
        i++;
    }
    //Print array in reverse
    for (int j = i - 1; j >= 0; j--)
        cout << binaryArr[j];
}

int main()
{
    //Creation of input var
    int userNum;
    //Output for user
    cout << "Enter Decimal Number: ";
    cin >> userNum;
    decimalToBinary(userNum);
    //Terminate
    return 0;
}
