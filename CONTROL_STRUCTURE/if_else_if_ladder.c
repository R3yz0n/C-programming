#include <stdio.h>
//&& is used in case of nested if   and || is used in individual if where printf is same for both
void main()
{
    int a, b, c;
    printf("enter the value of a,b and c");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("a is greatest");
    }
    if (b > c && b > a)
    {
        printf("b is greatest");
    }
    if (c > b && c > a)
        printf("c is the greatest");
}