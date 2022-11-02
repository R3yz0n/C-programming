#include <stdio.h>
void main()
{
    int p, q, r, s;
    int a, b;
    r = (p = 5, q = 12, p + q);
    printf("%d", r);
    a = (2, 3, 4);
    printf("\n%d", a);
}