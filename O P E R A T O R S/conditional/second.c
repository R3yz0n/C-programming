#include <stdio.h>
void main()
{
    int a = 1, b = 2, c = 19;
    int x = a > b ? (a > c ? printf("a is the largest") : printf("c is the largest")) : (b > c ? printf("b is the largest")

                                                                                               : printf("c is the largest"));
    printf("%d", x);
}