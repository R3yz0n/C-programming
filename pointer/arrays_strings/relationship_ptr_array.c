#include <stdio.h>
void main()
{

    int ar[5] = {1, 2, 3, 4, 5};
    int *p;
    p = ar;

    for (int i = 0; i < 5; i++)
    {
        printf("%dand%d ", ar[i], *(p + i));
    }
}