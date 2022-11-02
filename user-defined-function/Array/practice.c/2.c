#include <stdio.h>
int prime(int);
void main()
{
    for (int i = 2; i <= 100; i++)
    {
        if (prime(i) == 1)
            printf("%d ", i);
    }
}
int prime(int a)
{
    int flag = 1;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {

            return 0;
        }
    }
    return 1;
}