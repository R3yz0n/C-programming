#include <stdio.h>
int factorial(int);
void main()
{
    int n, fact;
    float sum = 0;
    printf("enter n");
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {

        sum = sum + (float)j / factorial(j);
    }
    printf("the sum is %f", sum);
}
int factorial(int x)
{
    int fact = 1;
    for (int j = x; j >= 1; j--)
    {
        fact = fact * j;
    }

    return fact;
}