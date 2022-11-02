#include <stdio.h>
int sum(int, int);

void main()
{
    int a = 2, b = 5;
    int (*p)(int, int) = sum;
    printf("the sum is %d", p(a, b));
}
int sum(int x, int y)
{
    return x + y;
}