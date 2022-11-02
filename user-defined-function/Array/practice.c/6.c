// sum of rows
#include <stdio.h>
void input(int[2][3]);
void main()
{
    int a[2][3];
    input(a);
}
void input(int a[2][3])
{
    int sum = 0, j;
    int sumc;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("the matrix is\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        sumc = 0;
        sum = 0;
        for (int j = 0; j < 2; j++)
        {
            sumc += a[j][i];
            sum += a[i][j];
        }
        // printf("the sum of %d col is %d\n", i, sumc);
        printf("the sum of %d col is %d\n", i, sum);
    }
}