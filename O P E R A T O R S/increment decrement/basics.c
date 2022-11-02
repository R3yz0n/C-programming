#include <stdio.h>
void main()
{
    int x = 1;
    int y = 1 + x++;

    printf("%d\n", x);
    printf("%d\n", y);
}