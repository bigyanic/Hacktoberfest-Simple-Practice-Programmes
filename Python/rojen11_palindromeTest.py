# check for palindrome

val = input("Enter a string: ")

if val.lower() == val[::-1].lower():
    print("It is palindrome.")
else:
    print("It is not palindrome.")
