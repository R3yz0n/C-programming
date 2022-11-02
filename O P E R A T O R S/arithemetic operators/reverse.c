#include <stdio.h>
void main()
{
    int n, rev, d1, d2, d3, d4, d5, d6;
    printf("enter a number");
    scanf("%d", &n);
    d1 = n % 10;
    n = n / 10;
    d2 = n % 10;
    n = n / 10;

    d3 = n % 10;
    n = n / 10;

    d4 = n % 10;
    n = n / 10;
    d5 = n % 10;
    n = n / 10;
    d6 = n % 10;
    printf("%d %d %d %d %d %d", d1, d2, d3, d4, d5, d6);
    int sum = d1 + d2 + d3 + d4 + d5 + d6;
    printf("\nsum = %d", sum);
    printf("\0hello");
}