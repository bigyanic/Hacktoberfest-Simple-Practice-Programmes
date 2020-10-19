/*
    BUBBLE SORT IN C
    WITH DYNAMIC ARRAY
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // pointer for dynamic array
    int* arr;
    
    int noOfInput;
    printf("Enter the no of elements to sort: ");
    scanf("%d",&noOfInput);
    
    // creating dynamic array
    arr = (int*) malloc(sizeof(int)*noOfInput);
    
    //taking inputs
    printf("\nEnter the elements of the array: \n");
    int i;
    for ( i=0; i<noOfInput; i++ )
    {
        printf("\n Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    // displaying the elements before sorting:
    printf("\nElements before sorting is: ");
    for(i=0; i<noOfInput; i++)
    {
        printf("%d ",arr[i]);    
    }
    
    // now doing the bubble sort
    int j,temp;
    for(i=0; i<noOfInput; i++)
    {
        for(j=0; j<noOfInput-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    // displaying the elements after sorting:
    printf("\nElements after sorting is: ");
    for(i=0; i<noOfInput; i++)
    {
        printf("%d ",arr[i]);    
    }
}
