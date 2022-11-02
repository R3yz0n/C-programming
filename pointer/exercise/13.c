#include <stdio.h>
void main()
{
    int a[4] = {1, 2, 3, 4};
    int *p = a;
    for (int i = 0; i < 4; i++)
    {
        printf("%d", p[i]);
    }
}