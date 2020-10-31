import math 

def jumpSearch( array , x , n ): 
	
	step = math.sqrt(n) 
	
	prev = 0
	while array[int(min(step, n)-1)] < x: 
		prev = step 
		step += math.sqrt(n) 
		if prev >= n: 
			return -1

	while array[int(prev)] < x: 
		prev += 1
		
		if prev == min(step, n): 
			return -1

	if array[int(prev)] == x: 
		return prev 
	
	return -1

array = []
while 1:
    try:
        x = input("Enter a number for the sorted list (To exit write something tha is not a number): ")
    except:
        break
    array.append(x)

y = input("Enter the number you want to find: ")
index = jumpSearch(array, y, len(array)) 

if index != -1: 
	print "Element found at index","%.0f"%index 
else: 
	print "Element not found"