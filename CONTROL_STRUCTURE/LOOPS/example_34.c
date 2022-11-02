#include <stdio.h>
#include <math.h>
void main()
{
    int a, n;
    float sum = 0;
    printf("enter the values of n and a");
    scanf("%d %d", &n, &a);
    for (int j = 1; j <= n; j++)
    {
        if (j % 2 != 0)
            sum = sum + pow(a, j) / (float)j;
        else
            sum = sum - pow(a, j) / (float)j;
    }
    printf("the sum is %f", sum);
}