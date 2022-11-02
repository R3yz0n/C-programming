#include <stdio.h>
void main()
{
    int x = 2, z = 4, y;
    y = x++ + x++;
    // ass  2+3
    // inc 2->3->4

    printf("%d  \a", y);
    printf("%d\n", x);
}