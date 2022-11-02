#include <stdio.h>
int rev(int);

void main()
{
    int n;
    printf("enter n");
    scanf("%d", &n);
    printf("the rev is %d", rev(n));
}
int rev(int n)
{
    int l = 0, temp = n;
    while (temp > 0)
    {
        temp /= 10;
        l++;
    }

    if (n / 10 == 0)
        return n;
    else
        return pow(10, l - 1) * (n % 10) + rev(n / 10);
}