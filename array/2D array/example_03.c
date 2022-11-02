#include <stdio.h>
void main()
{
    int ma, na, mb, nb;
    printf("enter m and n for A");
    scanf("%d %d", &ma, &na);

    printf("enter m and n for B");
    scanf("%d%d", &mb, &nb);
    if (ma == mb && nb == na)
    {
        printf("Matrix sum is possible");
        int a[ma][na];
        int b[ma][nb];
        int sum[ma][na];
        printf("\nEnter the elements of A\n");

        for (int i = 0; i < ma; i++)
        {
            for (int j = 0; j < nb; j++)
            {
                printf("a%d%d = ", i + 1, j + 1);
                scanf("%d", &a[i][j]);
            }
        }
        printf("\nEnter the elements of B\n");
        for (int i = 0; i < ma; i++)
        {
            for (int j = 0; j < na; j++)
            {
                printf("b%d%d = ", i + 1, j + 1);
                scanf("%d", &b[i][j]);
            }
        }
        for (int i = 0; i < ma; i++)
        {
            for (int j = 0; j < na; j++)
            {
                sum[i][j] = a[i][j] + b[i][j];
            }
        }
        printf("the sum is \n");
        for (int i = 0; i < ma; i++)
        {
            for (int j = 0; j < na; j++)
            {
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("sum not possible");
}