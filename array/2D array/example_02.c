#include <stdio.h>
void main()
{
    int m, n;
    printf("enter the no of rows = ");
    scanf("%d", &m);
    printf("enter the no of rows");
    scanf("%d", &n);
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a%d%d  = ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n the matrix is \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
}