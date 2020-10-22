# Gunjan Raj Tiwari

def binarySearch(l,r,n):
    m=(l+r)//2
    if arr[m] == n:
        print("Found at",m)
        return
    if l >=m:
        return
    if arr[m]>n:
        binarySearch(l,m,n)
    else:
        binarySearch(m+1,r,n)

arr = [1,2,3,4,5,6,7,8,9]
binarySearch(0,len(arr),2)