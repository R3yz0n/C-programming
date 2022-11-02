#include <stdio.h>
int prime(int);
void main()
{
    int flag;
    for (int i = 2; i < 100; i++)
    {
        if (prime(i) > 0)
            printf("%d ", i);
    }
}
int prime(int x)
{
    int count = 0;

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            count = 1;
            return 0;
        }
    }
    if (count == 0)
        return x;
}