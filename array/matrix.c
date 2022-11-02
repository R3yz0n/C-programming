#include <stdio.h>
int main()
{
    int n, m;
    printf("enter the no of rows");
    scanf("%d", &m);
    printf("enter the no of colums");
    scanf("%d", &n);
    int a[m][n], b[m][n], sum[m][n], mult[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter the element of MATRIX A at %d%d=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    // printf("\n");
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("enter the element of MATRIX B at %d%d=", i, j);
    //         scanf("%d", &b[i][j]);
    //     }
    // }

    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         sum[i][j] = a[i][j] + b[i][j];
    //     }
    // }

    // printf("The sum is=\n");
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("%d  ", sum[i][j]);
    //     }
    //     printf("\n");
    // }
    // if (a[n] == b[m])
    // {
    //     printf("the muliplication is");
    //     for (int i = 0; i < m; i++)
    //     {
    //         for (int j = 0; j < n; j++)
    //         {
    //             sum[i][j] = a[i][j] * b[i][j];
    //         }
    //     }
    // }
    // else
    // {
    //     printf("the matrix cannot be multiplied");
    // }
    printf("\nTHe element at A is\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    int t[n][m] = a[m][n];
    printf("\nThe transpose is\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", t[i][j]);
        }
        printf("\n");
    }
}