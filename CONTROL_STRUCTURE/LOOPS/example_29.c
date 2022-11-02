#include <stdio.h>
void main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    int sum = 0;
    for (int j = 1; j <= n; j++)
    {
        if (j % 5 == 0)
        {
            printf("%d ", j);
            sum += j;
        }
    }
    printf("\nthe sum is %d", sum);
}