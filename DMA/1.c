#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, max, min;
    printf("enter the size of n");
    scanf("%d", &n);
    int *p = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", p[i]);
    }
    max = min = p[0];
    for (int i = 0; i < n; i++)
    {
        if (*(p + i) > max)
            max = p[i];
        if (p[i] < min)
            min = p[i];
    }
    printf("\n the max %d and min %d are", min, max);
}