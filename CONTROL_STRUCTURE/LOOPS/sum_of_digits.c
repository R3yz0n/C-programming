#include <stdio.h>
void main()
{
    int sum = 0, n, rem;
    printf("enter the number");
    scanf("%d", &n);
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("the sum is %d", sum);
}