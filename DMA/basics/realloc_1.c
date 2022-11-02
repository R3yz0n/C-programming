#include <stdio.h>
#include <stdlib.h>
void main()
{

    int *ptr;
    int n, m;
    printf("enter the value of n");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("enter the extended size");
    scanf("%d", &m);

    int *p = (int *)realloc(ptr, m * sizeof(int));

    for (int i = n; i < m; i++)
    {
        scanf("%d", &p[i]);
    }
    for (int i = 0; i < m; i++)
    {
        printf("%d ", p[i]);
    }
}