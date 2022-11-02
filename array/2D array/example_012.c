#include <stdio.h>
void main()
{
    int a[10][10];
    int sum = 0;
    int m, n;

    printf("enter the size of the matrix");
    scanf("%d%d", &m, &n);
    if (m > 10 || n > 10)
    {
        printf("out of range");
    }

    if (m != n)
    {
        printf("not a squae matrix");
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("a%d%d = ", i + 1, j + 1);
                scanf("%d", &a[i][j]);
            }
        }
        printf("\n the matrix is\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    sum += a[i][j] * a[i][j];
            }
        }
        printf("\n the sum is %d", sum);
    }
}