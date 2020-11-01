num=int(input("Enter a number:"))

def factorial(num):
    if num==1:
        return num
    else:
        return num*factorial(num-1)
    
if num==0:
    print("Factorial of 0 is: 1")
elif num<0:
    print("Factorial for negative number cannot be calculated!")
else:
    print("Factorial of", num, "is:", factorial(num))