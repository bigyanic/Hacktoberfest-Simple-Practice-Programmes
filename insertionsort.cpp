#include <bits/stdc++.h>
using namespace std;

void insertionSort( int arr[], int n)
{
    int x,j;
    for( int i = 1; i < n; i++)
    {
        x = arr[i];
        j = i-1;

        while (arr[j] > x && j>-1)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }

}


int main(){

    int n;  
    cout<<"Enter size: \n";
    cin>>n;
    int arr[n];
    cout<<"Enter an array: \n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    insertionSort(arr,n);
    cout<<"Sorted array is :\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
    
