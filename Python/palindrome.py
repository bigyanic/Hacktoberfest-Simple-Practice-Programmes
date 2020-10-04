if __name__=="__main__":
    x = int(input())
    sx = str(x)
    sxx = sx[::-1]
    if sx==sxx:
        print("Palindrome")
    else:
        print("Not palindrome")
