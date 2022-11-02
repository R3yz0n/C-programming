#include <stdio.h>
void main()
{
    float sum;
    int x, n;
    printf("enter the values of x and n");
    scanf("%d%d", &x, &n);
    sum = 1 + x * x;
    for (int j = 3; j <= n; j++)
    {
        sum += j * x * x;
    }
    printf("the sum is %f", sum);
}