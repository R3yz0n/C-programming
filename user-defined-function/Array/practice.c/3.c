#include <stdio.h>
#include <math.h>
int power(int, int);

void main()
{
    float sum = 0;
    int a;
    printf("enter the value of a");
    scanf("%d", &a);

    for (int i = 1; i <= 6; i++)
    {
        if (i % 2 != 0)
        {
            sum += power(a, i) / (float)i;
        }
        else
        {
            sum -= power(a, i) / (float)i;
        }
    }
    printf("the sum is %f sum", sum);
}
int power(int x, int n)

{
    int p = 1;
    while (n > 0)
    {
        p = p * x;

        n--;
    }
    return p;
}