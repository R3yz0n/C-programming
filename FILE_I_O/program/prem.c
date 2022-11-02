#include <stdio.h>
void main()
{
    int x = 10;
    void *a = &x;
    printf("%d", *(int *)a);
}