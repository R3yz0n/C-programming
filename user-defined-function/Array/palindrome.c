#include <stdio.h>
int che(int);
void main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    int flag = che(n);
    if (flag == 1)
    {
        printf("palindrome");
    }
    else
    {
        printf("no it is not");
    }
}
int che(int n)
{
    int temp, rem, rev = 0;
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        rev = 10 * rev + rem;
        n = n / 10;
    }
    if (temp == rev)
        return 1;

    else
        return 0;
}