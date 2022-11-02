#include <stdio.h>
void main()
{
    int a, b, c;
    a = 12;
    b = 0;
    c = -1;
    printf("%d\n", !a && b);
    printf("%d\n", a && b);
    printf("%d\n", !a || c);
    printf("%d\n", !b);
    printf("%d\n", b || b);
    printf("%d\n", a && c);
    int k = 1;
    printf("%d\n", !!!0);
}