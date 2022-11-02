#include <stdio.h>
#include <math.h>
int powe(int);
int fact(int);

void main()
{
    int n;
    float sum = 1;
    printf("enter the value of n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        sum += (float)powe(i) / fact(i);
    }
    printf("the sum is %.2f", sum);
}
int powe(int i)
{
    int power = 1;
    for (int j = 1; j <= i; j++)
    {
        power = i * power;
    }
    return power;
}
int fact(int i)
{
    int factorial = 1;

    while (i > 0)
    {
        factorial = factorial * i;
        i--;
    }
    return factorial;
}