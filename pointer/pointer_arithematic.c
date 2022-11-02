#include <stdio.h>
void main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p, *q;
    p = &a[0];
    q = &a[4];
    printf("%d", *++p);
}