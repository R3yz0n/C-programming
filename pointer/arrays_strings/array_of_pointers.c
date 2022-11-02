#include <stdio.h>
void main()
{
    int a[5] = {1, 2, 3, 4, 5};

    int *p[5];

    for (int i = 0; i < 5; i++)
    {
        p[i] = &a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));

        printf("%d ", p[i]);
    }
}