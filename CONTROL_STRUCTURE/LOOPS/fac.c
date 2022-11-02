#include <stdio.h>
void main()
{
    printf("enter the number");
    int n;
    scanf("%d", &n);
    int fact = 1;
    for (int j = n; j > 1; j--)
    {
        fact = fact * j;
    }
    printf("the factorial is %d", fact);
}