#include <stdio.h>
void s(int* a, int len) 
{
   int i, s_of_arr = 0;
   for (i = 0; i < len; i++)
   {
      s_of_arr = s_of_arr + *(a + i);
   }
   printf( "sum of array is = %d" ,s_of_arr);
}
int main() {
   int arr[] = { 1,2,4,6,7,-5,-3 };
   s(arr, 7);
   return 0;
}
