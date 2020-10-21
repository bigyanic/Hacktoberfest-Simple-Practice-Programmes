#include<stdio.h> // include stdio.h library

int main(void)
{       
    int a, b, result;
    char op; // to store the operator
    
    printf("Enter an expression: ");
    scanf("%d%c%d", &a, &op, &b);

    switch(op)
    {
        case '+':// For Addition
            result = a + b;
            break;
        case '-':// For Substraction
            result = a - b;
            break;
        case '*':// For Multiplication
            result = a * b;
            break;
        case '/':// For Division 
            result = a / b;
            break;              
    }
    
    printf("Result = %d", result);
    
    return 0; // return 0 to operating system
}
