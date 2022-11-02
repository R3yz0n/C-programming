#include <stdio.h>
#include <stdlib.h>
void main()
{
    // it initilizes all the memory bytes to 0
    int *ptr;
    int n;
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
}