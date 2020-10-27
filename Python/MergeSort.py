def mergeSort(a):
    if len(a) >1:
        mid_term = len(a)//2 
        # dividing array into 2 halves
        left = a[:mid_term] 
        right = a[mid_term:] 
        
        # call to function mergeSort for both the halves
        mergeSort(left)
        mergeSort(right)
 
        i = j = k = 0
        
        while i < len(left) and j < len(right):
            if left[i] < right[j]:
                a[k] = left[i]
                i+= 1
            else:
                a[k] = right[j]
                j+= 1
            k+= 1
         
        # to check if array was complete
        while i < len(left):
            a[k] = left[i]
            i+= 1
            k+= 1
         
        while j < len(right):
            a[k] = right[j]
            j+= 1
            k+= 1
 
# printing the sorted list
def printList(a):
    for i in range(len(a)):        
        print(a[i], end =" ")
    print()
 
# sample test
if __name__ == '__main__':
    arr = [12, 11, 13, 5, 6, 7] 
    print ("Given array: ") 
    printList(arr)
    mergeSort(arr)
    print("Sorted array: ")
    printList(arr)
