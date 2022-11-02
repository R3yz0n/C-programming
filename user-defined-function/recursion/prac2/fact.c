#include <stdio.h>
int fact(int);

void main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    printf("the factorial is %d", fact(n));
}
int fact(int n)
{

    if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}