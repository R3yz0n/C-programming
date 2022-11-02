#include <stdio.h>
#include <stdlib.h>
int *call(int);
void main()
{
    int n;
    printf("enter the ");
    scanf("%d", &n);

    int *ptr = call(n);

    for (int j = 0; j < n; j++)
    {
        printf("%d ", *(ptr + j));
    }
}
int *call(int n)
{
    int *p = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }
    return p;
}