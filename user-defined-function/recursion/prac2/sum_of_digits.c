#include <stdio.h>
int sum(int);

void main()
{
    int n;
    printf("enter the value of n");
    scanf("%d", &n);
    printf("the sum of digits is %d", sum(n));
}
int sum(int n)
{
    if (n == 0)
        return 0;
    return n % 10 + sum(n / 10);
}