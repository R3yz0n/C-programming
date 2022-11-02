#include <stdio.h>
void main()
{

    int a, b;
    printf("enter a = ");
    scanf("%2d", &a);
    printf("enter b = ");
    scanf("%d", &b);
    printf("\n\na=%d\nb=%-6d", a, b);
}