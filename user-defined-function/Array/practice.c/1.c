#include <stdio.h>
int fact(int);
void main()
{
    int n;
    float sum = 0;
    printf("enter the value of n");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        sum += (float)i / fact(i);
    }
    printf("the sum is %f", sum);
}
int fact(int i)
{
    int f = 1;
    while (i > 0)
    {
        f = f * i;
        i--;
    }
    return f;
}