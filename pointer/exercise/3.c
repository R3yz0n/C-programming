#include <stdio.h>
#include <stdlib.h>
void main()
{
    // null pointer points to no where, malloc returns null if user ask more heap memory than available.
    int *p = (int *)malloc(10 * sizeof(int));
    if (p == NULL)
        printf("memory not allocated sucefully");
    else
        printf("memory allocated sucessfully");
}