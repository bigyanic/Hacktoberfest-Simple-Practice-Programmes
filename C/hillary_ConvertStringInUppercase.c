#include<stdio.h>
#include<string.h>

int main(){
   char string[35];
   int i;

   printf("Enter the string:");
   scanf("%s",string);

   for(i=0;i<=strlen(string);i++){
      if(string[i]>=97&&string[i]<=122) {
         string[i]=string[i]-32;
      }
   }
   printf("\n String in Upper Case is: %s",string);
   return 0;
}
