#include <stdio.h>
void main()
{
    int n = 10;
    void *p = &n;
    exit(0);
    printf("%d", *(int *)p);
    printf("\n%x", p);
}