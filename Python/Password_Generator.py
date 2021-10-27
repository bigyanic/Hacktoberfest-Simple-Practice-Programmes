import random
short = list("a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z".split(','))
long = list("A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z".split(','))
numbers = list("1,2,3,4,5,6,7,8,9,0".split(","))
char = list("! @ # $ % ^ & * ( ) _ - = + [ ] { } \ | : ; , . / ? ~".split(' '))
alpha_num = [short, long, numbers]
all = [short, long, numbers, char]
print("--------------------This generator will generate passwords--------------------")
print("1. Only short alphabets")
print("2. Only capital alphabets")
print("3. Only numbers")
print("4. Alphabets and Numbers")
print("5. Alphabets, Numbers and special characters")
choice = int(input("Enter type: "))
length = int(input("Length of password: "))
password = ""
if choice == 1:
    while len(password) < length:
        password = password + random.choice(short)
elif choice == 2:
    while len(password) < length:
        password = password + random.choice(long)
elif choice == 3:
    while len(password) < length:
        password = password + random.choice(numbers)
elif choice == 4:
    while len(password) < length:
        password = password + random.choice(random.choice(alpha_num))
elif choice == 5:
    while len(password) < length:
        password = password + random.choice(random.choice(all))
print("Password: ", password)
