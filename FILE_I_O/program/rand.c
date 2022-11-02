#include <stdio.h>
void main()
{
    int n;
    printf("enter n");
    int rem, b = 1;
    scanf("%d", &n);
    int d = 0;

    while (n > 0)
    {
        rem = n % 10;
        d = d + rem * b;
        b = b * 2;
        n = n / 10;
    }
    printf("the binary is %d", d);
}