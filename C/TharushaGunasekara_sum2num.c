#include <stdio.h>
int main()
{
   int num1, num2, sum;
   printf("Enter First Number: ");
   scanf("%d", &num1);
   printf("Enter Second nnmber: ");
   scanf("%d", &num2);

   sum = num1 + num2;
   printf("Sum of the Two Entered Numbers: %d", sum);
   return 0;
}