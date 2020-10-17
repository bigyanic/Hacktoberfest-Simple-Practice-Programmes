#Insertion Sort in python

import numpy as np

def insertion_sort(A):
    length = len(A)
    for j in range(1,length):
        key = A[j]
        i = j-1
        while (i >= 0 and A[i] > key):
            A[i+1] = A[i]
            i=i-1
        A[i+1] = key
        

A = [3,5,7,1,2,96,34,57,100,66]
print(A)
insertion_sort(A)
print(A)
    
