#include <stdio.h>
void main()
{
    int a[3][3];
    int loop = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("A%d%d = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("the matrix is");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    int n;
    while (n != 4)
    {

        printf("\nMenu\n1) Print Matrix2)Sum of even elments\n3)Sum of diagonal elements\n4) Exit\n");
        printf("enter the choice");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            int sum = 0;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (a[i][j] % 2 == 0)
                    {
                        sum += a[i][j];
                    }
                }
            }
            printf("the sum is %d", sum);
            break;
        case 2:
            printf("\nthe matrix is \n");
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("%d ", a[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            sum = 0;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (i == j)
                    {
                        sum += a[i][j];
                    }
                }
            }
            break;

            printf("the sum of diagonal elments is %d", sum);
        case 4:
            loop = 0;
            break;
        default:
            printf("invalid choice");
        }
    }
}