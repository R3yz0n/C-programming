#include <stdio.h>
#include <math.h>
void main()
{
    int sum = 0, x, n;
    printf("enter n");
    scanf("%d %d", &n, &x);

    for (int j = 1; j <= n; j++)
    {
        if (j % 2 == 0)
            sum = sum - pow(x, j);
        else
            sum = sum + pow(x, j);
    }
    printf("the sum is %d", sum);
}