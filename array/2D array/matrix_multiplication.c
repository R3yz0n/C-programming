#include <stdio.h>
int main()
{
    int r1, r2, c1, c2;
    printf("enter the order of first matrix");
    scanf("%dx%d", &r1, &c1);
    printf("enter the order of second matrix");
    scanf("%dx%d", &r2, &c2);
    if (c1 != r2)
    {
        printf("mult cant be done");
        return 0;
    }

    int a[r1][c1], b[r2][c2];
    int result[r1][c2];
    printf("Enter the matrix A\n");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("a%d%d = ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the matrix B\n");

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("b%d%d = ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    // 1 2 3   1 2
    // 3 3 9   1 4
    //         1 0
    // 2x3  3x2
    int temp = 0;
    for (int i = 0; i < r1; i++)
    {
        // r1 c1 r2
        for (int j = 0; j < c2; j++)
        {
            temp = 0;
            for (int k = 0; k < r2; k++)
            {
                temp += a[i][k] * b[k][j];
            }
            // result[i][j] = temp;
            printf("%d ", temp);
        }
        printf("\n");
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}