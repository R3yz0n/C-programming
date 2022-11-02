#include <stdio.h>
void call(int[10][10], int[10][10], int[10][10], int, int);
void output(int[10][10], int, int);
void main()
{
    int a[10][10], b[10][10];
    int sum[10][10];
    int m, n;
    printf("enter the size of matrix");
    scanf("%dx%d", &m, &n);
    call(a, b, sum, m, n);
}
void call(int a[10][10], int b[10][10], int sum[10][10], int m, int n)

{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A%d%d", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("B%d%d", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    output(sum, m, n);
}
void output(int sum[10][10], int m, int n)
{
    printf("the sum is \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}