#include <stdio.h>
int main()
{
    int m = 3, n = 4;
    int a[m][n], b[n][m], result1[m][m], result2[n][n];
    if ((m == n) && (m == n))
    {
        printf("equal");
    }
    else
        return 0;

    printf("enter the matrix A");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("A%d%d = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the matrix B");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("A%d%d = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    // AxB
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int temp = 0;
            for (int k = 0; k < n; k++)
            {
                temp += a[i][k] * b[k][j];
            }
            result1[i][j] = temp;
        }
        // BxA
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int temp = 0;
                for (int k = 0; k < m; k++)
                {
                    temp += b[i][k] * a[k][j];
                }
                result2[i][j] = temp;
            }
        }
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", result1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", result2[i][j]);
        }
        printf("\n");
    }
}