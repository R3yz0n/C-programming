
#include <stdio.h>
void main()

{
    int max, x, y;
    x = 10;
    y = 11;
    max = x < y ? printf("%d", x) : printf("%d", y);
    printf("%d", max);
}