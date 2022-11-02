#include <stdio.h>
void main()
{
    int a = 111111;
    printf("%10d\n", a);
    printf("%5.6d\n", a);
    printf("%0.6d\n", a);
    printf("%-5d\n", a);
    printf("%-6.6d\n", a);
}