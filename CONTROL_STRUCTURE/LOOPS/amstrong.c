#include <stdio.h>
void main()
{
    int sum = 0, n, rem;
    printf("enter the number");
    scanf("%d", &n);
    int temp = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;

        n = n / 10;
    }
    if (temp == sum)
    {
        printf("yes");
    }
    else
        printf("no");
}