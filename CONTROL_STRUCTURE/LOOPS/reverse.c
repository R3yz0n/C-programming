#include <stdio.h>
void main()
{
    int n, rev = 0, rem;
    printf("enter the number");
    scanf("%d", &n);
    int temp = n;
    while (n > 0)
    {
        rem = n % 10;
        rev = rem + 10 * rev;
        n = n / 10;
    }
    if (temp == rev)
    {
        printf("palindrom!!\n");
    }
    else
        printf("NO!!");
}