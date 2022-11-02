#include <stdio.h>
void main()
{
    int n, var, binary = 0, rem, i = 1;
    printf("enter the no");
    scanf("%d", &n);
    // 13 1101
    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        binary = binary + (rem * i);
        i = i * 10;
    }
    printf("the binary is  %d", binary);
}