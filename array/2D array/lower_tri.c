#include <stdio.h>
void main()
{

    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i < j)
                a[i][j] = 0;
        }
        printf("\n");
    }
    printf("\n the matrix is \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}