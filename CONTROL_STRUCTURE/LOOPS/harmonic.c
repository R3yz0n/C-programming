#include <stdio.h>
void main()
{
    printf("enter the value of n");
    float n;
    scanf("%f", &n);
    float c = 0;
    for (int j = 1; j <= n; j++)
    {
        c = c + 1.0 / j;
    }
    printf("the sum is %f", c);
}