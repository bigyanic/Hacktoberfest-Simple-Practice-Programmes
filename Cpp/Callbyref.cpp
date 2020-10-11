/* Instead of variable address is passed as an argument, any changes made in the child function reflect back 
in the parent function */

#include <iostream>
using namespace std;

// function declaration
void swap(int &x, int &y);

int main () 
{
   // local variable declaration:
   int a = 100;
   int b = 200;
 
   cout << "Before swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl;

   /* calling a function to swap the values using variable reference.*/
   swap(a, b);

   cout << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;
 
   return 0;
}
