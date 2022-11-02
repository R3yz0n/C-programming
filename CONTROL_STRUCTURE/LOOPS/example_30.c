#include <stdio.h>
void main()
{
    float sum = 0;
    int n;
    printf("enter the number");
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {
        sum += 1.0 / j;
    }
    printf("the sum is  %f", sum);
}