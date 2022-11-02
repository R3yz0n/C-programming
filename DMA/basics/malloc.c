#include <stdio.h>
#include <stdlib.h>
void main()
{

    int *ptr = (int *)malloc(3 * sizeof(int));

    for (int i = 0; i < 3; i++)
    {

        scanf("%d", ptr + i);
    }

    for (int j = 0; j < 3; j++)
    {
        printf("%d ", ptr[j]);
    }
}