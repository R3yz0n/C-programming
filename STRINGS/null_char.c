#include <stdio.h>
void main()
{

    int a[10] = {1, 2, 3, 4, 5};

    char c[10] = "CUBE";
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%c ", c[i]);
    }
}