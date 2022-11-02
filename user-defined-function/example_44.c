#include <stdio.h>
int fact(int);

void main()
{
    int n;
    for (int i = 0; i < 5; i++)
    {
        printf("enter the number = ");
        scanf("%d", &n);
        printf("the factorial of %d is %d", n, fact(n));
    }
}
int fact(int n)
{
    int f = 1;
    while (n > 0)
    {
        f = f * n;
        n--;
    }
    return f;
}