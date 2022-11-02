#include <stdio.h>
int p(int, int);
void main()
{
    int x, n;
    printf("enter the x and n");
    scanf("%d%d", &x, &n);
    printf("the power is %d", p(x, n));
}
int p(int x, int n)
{
    if (n == 0)
        return 1;
    else
        return x * p(x, n - 1);
}