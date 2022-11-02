#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p;
    int i = 9999;
    while (1)
    { // p = (int *)malloc(i * sizeof(int));
        i++;
        printf("%d", i);
    }
}