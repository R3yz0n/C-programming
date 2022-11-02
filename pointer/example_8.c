#include <stdio.h>
void main()
{
    int *p, *q;
    int a = 10;
    p = &a;
    q = p;
    printf("%d", *p);
    printf("%d", *q);
    printf("%d", a);
}