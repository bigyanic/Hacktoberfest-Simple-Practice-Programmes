n = int(input('Enter the number whose multiplication table u want to print : '))
m = int(input('Enter upto where u want the table to be printed : '))

for i in range(1,m + 1):
    product = n * i
    print(str(n) + 'X' + str(i) + '=' + str(product) + '\n')
