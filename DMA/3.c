#include <stdio.h>
#include <stdlib.h>
void main()
{
    // sorting
    int n, max, min;
    printf("enter the size of n");
    scanf("%d", &n);
    int *p = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(p + i) > *(p + j))
            {
                max = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = max;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
}