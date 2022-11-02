#include <stdio.h>
void main()
{
    for (int j = 1; j <= 5; j++)
    {
        for (int k = 0; k < 5; k++)
        {
            printf("%d ", (k + j) * 5);
        }
        printf("\n");
    }
}