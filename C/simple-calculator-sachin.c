#include<stdio.h>    // include stdio.h library
#include<conio.h>
int main()
{
    int a, b, result;
    char op;        // to store the operator

    printf("Enter an expression: ");
    scanf("%d%c%d", &a, &op, &b);

    switch(op)
    {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
    }

    printf("Result = %d", result);

    return 0;     // return 0 to operating system
}
