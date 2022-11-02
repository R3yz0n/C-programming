#include <stdio.h>
void main()
{
    int n, sum = 0;
    printf("enter the positive integer less than 20 ");
    scanf("%d", &n);
    if (n > 0 && n < 20)
    {

        for (int j = 1; j <= 10; j++)
        {
            printf("%d*%d=%d\n", n, j, n * j);
        }
    }
}