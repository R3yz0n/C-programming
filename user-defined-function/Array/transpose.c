#include <stdio.h>
void tran(int a[10][10], int, int);
void main()
{
    int a[10][10];
    int m, n;
    printf("enter the size of a matrix");
    scanf("%dx%d", &m, &n);

    tran(a, m, n);
}
void tran(int a[10][10], int m, int n)
{
    int T[10][10];
    for (int i = 0; i < m; i++)
    {
        for (int k = 0; k < n; k++)
        {
            scanf("%d", &a[i][k]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            T[i][j] = a[j][i];
        }
    }
    printf("\n the transpose is \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }
}