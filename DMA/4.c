#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p = (int *)malloc(10 * sizeof(int));
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", p + i);
    }
    for (int i = 0; i < 10; i++)
    {
        if (*(p + i) > 18 && *(p + i) < 25)
            count++;
    }
    printf("the count is %d", count);
}