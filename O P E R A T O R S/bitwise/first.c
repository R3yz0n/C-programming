#include <stdio.h>
void main()
{
    int a = 3;
    int b = 9;
    int c;
    c = a & b;
    int d = a | b;
    int e = a ^ b;

    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
}