#include <stdio.h>
int power(int, int);

void main()
{
    // x^n
    int x, n;
    printf("enter the value of x and n");
    scanf("%d%d", &x, &n);

    int p = power(x, n);
    printf("the power is %d", p);
}
int power(int x, int n)
{
    int p = 1;
    for (int i = 1; i <= n; i++)
    {
        p = x * p;
    }
    return p;
}