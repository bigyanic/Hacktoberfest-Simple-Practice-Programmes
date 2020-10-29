// numbers backward array
#include<iostream>
using namespace std;
int main()
{
    int numbers[5];
    for (int i=0;i<5;i=i+1)
    {
     cout <<"type in a number";
     cin >>numbers[i];
    }

    //cout << numbers[2]<< endl;

    for (int i=4; i>=0;i=i-1)
    {
        cout <<numbers[i]<<" ";
    }
}
