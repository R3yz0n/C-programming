#include <stdio.h>
void main()
{
    int a = 10;
    void *p = &a;
    printf("%u\n", p);
    printf("%d", *(int *)p);
}