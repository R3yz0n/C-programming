#include <stdio.h>
#define M 2
#define N 3
void main()
{
    int a[M][N];
    for (int j = 0; j < M; j++)
    {
        for (int k = 0; k < N; k++)
        {
            printf("a%d%d = ", j + 1, k + 1);
            scanf("%d", &a[j][k]);
        }
    }
    printf("the matrix is \n");
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}
