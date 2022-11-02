#include <stdio.h>
int sum(int);
void main()
{
    int n, i;
    printf("enter the value of n and i");
    scanf("%d", &n);
    printf("the sum is %d", sum(n));
}
int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}