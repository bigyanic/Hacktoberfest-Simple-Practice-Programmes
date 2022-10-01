# Given an array of DISTINCT elements, 
# rearrange the elements of array in zig-zag fashion in O(n) time. 
# The converted array should be in form a < b > c < d > e< f.      
# Example: Input: arr[] = {4, 3, 7, 8, 6, 2, 1} Output: arr[] = {3, 7, 4, 8, 2, 6, 1}                    
# Input: arr[] = {1, 4, 3, 2} Output: arr[] = {1, 4, 2, 3}
def zigZag(arr, n):
    start = True
    for i in range(n-1):
        if start is True:
            if arr[i] > arr[i+1]:
                arr[i],arr[i+1] = arr[i+1],arr[i]
        else: 
            if arr[i] < arr[i+1]:
                arr[i],arr[i+1] = arr[i+1],arr[i]
        start = bool(1 - start)
    print(arr)
 
array=[]
n=int(input("Enter length of array"))
sum=0
for i in range(0,n):
    m=int(input())
    array.append(m)
zigZag(array, n)
