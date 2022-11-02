#include <stdio.h>
int fib(int);

void main()
{
    int n;
    printf("enter the value of n");
    scanf("%d", &n);
    for (int i = 0; fib(i) <= n; i++)
    {

        printf("%d ", fib(i));
    }
}
int fib(int i)
{
    if (i == 0)
        return 0;
    else if (i == 1)
        return 1;
    else
        return fib(i - 1) + fib(i - 2);
}