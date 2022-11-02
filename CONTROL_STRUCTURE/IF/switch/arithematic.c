#include <stdio.h>
void main()
{
    char ch;
    float a, b;
    printf("enter the values of a and b");
    scanf("%f%f", &a, &b);

    printf("enter the choice of operation u want to perform");
    scanf(" %c", &ch);
    // The expression in switch must be of int or char but we can use floating point or any operation
    // inside of any of switch cases.
    switch (ch)
    {
    case '+':
        printf("The sum is %f", a + b);
        break;
    case '-':
        printf("The sum is %f", a - b);
        break;
    case '*':
        printf("The mult is %f", a * b);
        break;
    case '/':
        printf("The div is %f", a / b);
        break;
    default:
        printf("No cases match");
    }
}