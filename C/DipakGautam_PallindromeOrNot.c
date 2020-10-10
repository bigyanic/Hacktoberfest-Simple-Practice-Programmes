/*program to check pallindrome*/ 

#include<conio.h> 

#include<string.h> 

#include"stdio.h" 

int main() 

{ 

char s[25]; 

int i,j; 

printf("enter any string\n"); 

gets(s); 

for(i=0,j=strlen(s)-1;i<=j;i++,j--) 

if(s[i]!=s[j]) 

break; 

if(i>j) 

printf("string is pallindrome\n"); 

else 

printf("string is not pallindrome"); 

getch(); 

return 0; 

} 