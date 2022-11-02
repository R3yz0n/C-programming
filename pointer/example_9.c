#include <stdio.h>
void main()
{
    int *p1, *p2, *t;
    int a = 1, b = -9;
    p1 = &a, p2 = &b;
    printf("%d %d", *p1, *p2);
    t = p1;
    p1 = p2;
    p2 = t;
    printf("\n%d %d", *p1, *p2);
}