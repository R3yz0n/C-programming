#include <stdio.h>
int fib(int);

void main()
{
    int n;
    int f1 = 0, f2 = 1;
    printf("enter the value of n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }
}
int fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}