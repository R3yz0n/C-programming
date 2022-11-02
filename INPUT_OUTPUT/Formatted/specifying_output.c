#include <stdio.h>
void main()
{
    int n = 12345;
    printf("%d\n", n);
    printf("%6d\n", n);
    printf("%2d\n", n);
    printf("%-6d\n", n);
    printf("%06d\n", n);
}