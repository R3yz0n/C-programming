#include <stdio.h>
void main()
{
    int n, fact;
    for (int j = 0; j < 5; j++)
    {
        printf("enter the number to find factorial of ");
        scanf("%d", &n);
        if (n > 0)
        {
            fact = 1;
            for (int k = n; k > 1; k--)
            {
                fact *= k;
            }
            printf("the factorial of %d  is %d\n", n, fact);
        }
    }
}