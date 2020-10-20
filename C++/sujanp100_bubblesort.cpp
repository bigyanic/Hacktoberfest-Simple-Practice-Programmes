#include<iostream>
void swap(int *a , int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
// bubble sort
void bubbleSort(int arr[] , int n) {
    bool swapped;
    for(int i = 0; i < n - 1; i++) {
        swapped = false;
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1])  {
                swap(&arr[j] , &arr[j + 1]);
                swapped = true;
            }
        }
        if(swapped == false) break;
    }
}
int main() {
    int arr[] = {5 , 2 , 4 , 6 , 1};
    int n = 5;
    bubbleSort(arr , n );
    for(int i = 0; i < n; i++) 
        std::cout << arr[i] << " ";
}
