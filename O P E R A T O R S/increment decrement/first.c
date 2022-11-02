#include <stdio.h>
void main()
{
    int x = 2, z = 4, y;
    y = ++x + ++x;
    // ass  4+4
    // inc 2->3->4

    printf("%d\n", y);
    printf("%d\n", x);
}