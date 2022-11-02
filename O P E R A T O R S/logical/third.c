#include <stdio.h>
void main()
{
    // short circuit in || OPERATOR
    int a = 1;
    int b = 2;
    int cx = a < b || b++;
    printf("%d", cx);
    printf("\n%d", b);
}