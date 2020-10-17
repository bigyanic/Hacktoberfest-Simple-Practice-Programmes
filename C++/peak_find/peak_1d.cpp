#include<iostream>
using namespace std;

//using divide and conquer approach
//time complexity:O(logn)
void peak_1d(int arr[],int size){
  int mid=size/2;
  if(arr[mid]<arr[mid-1]){
    peak(arr,mid-1);
  }
  else if(arr[mid]<arr[mid+1]){
    peak(arr,size+mid/2);
  }
  else
  cout<<"Peak : "<<arr[mid];
}

int main(){
  int arr[10]={5,2,44,20,19,2,11,120,9,98};
  peak_1d(arr,10);
  return 0;
}
