#include <stdio.h>
#include <stdlib.h>
void display(int *, int);

void main()
{
    int n;
    printf("enter the size of array");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    display(ptr, n);
}
void display(int *p, int n)
{
    int min, max;
    min = max = *p;
    for (int i = 0; i < n; i++)
    {
        if (max < *(p + i))
        {
            max = *(p + i);
        }
        if (min > *(p + i))
        {
            min = *(p + i);
        }
    }
    printf("the max and min element are %d and %d ", max, min);
}