#include <stdio.h>
void main()
{
    int a, b;
    a = 10;
    b = 11;
    int *p = &a;
    int *q = &b;
    *p = *q;
    printf("%d %d ", a, b);
    printf("%d", *p);
    printf(" %d", *q);
}