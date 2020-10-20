/*C++ program to generate random numbers.*/
 
#include<iostream.h>
#include<stdlib.h>
 
int main()
{
    int i;          //loop counter
    int num;        //store random number
 
    randomize();    //call it once to generate random number
    for(i=1;i<=10;i++)
    {
        num=rand()%100; //get random number
        cout << num << "\t";
    }
    return 0;
}
