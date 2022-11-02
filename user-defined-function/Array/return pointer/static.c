#include <stdio.h>
int *call();
void main()
{
    int *ptr;
    ptr = call();
    for (int i = 0; i < 5; i++)
    {
        printf("%d", *(ptr + i));
    }
}
int *call()
{
    static int a[5] = {1, 2, 3, 4, 0};

    return a;
}