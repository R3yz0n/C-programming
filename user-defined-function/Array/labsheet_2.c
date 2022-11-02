#include <stdio.h>
#include <math.h>
int fact(int);
int prime(int);
void main()
{
    float Y = 1;
    for (int j = 1; j < 10; j++)
    {
        printf("%d ", prime(j));
        // if (prime(i) == 0)
        //     continue;
        // Y = (float)pow(i, 2) / fact(i);
    }
    // printf("the sum is %f", Y);
}
int fact(int x)
{
    int f = 1;
    while (x > 0)
    {
        f = f * x;
        x--;
    }
    return f;
}
int prime(int x)
{
    int i;

    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 1;
        }
    }
    if (x == 1)
        return 1;
    if (i == x)
        return 0;
}