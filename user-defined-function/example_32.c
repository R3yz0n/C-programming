#include <stdio.h>
int fact(int);

void main()
{
    float sum = 0;
    int n;
    printf("enter the value of ns");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
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

        /* code */
        i--;
    }
    return f;
}