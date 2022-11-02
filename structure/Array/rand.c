#include <stdio.h>
int main()
{
    int first[10][10], second[10][10], mul[10][10];
    int r1, c1, r2, c2, i, j, k;
    printf("number of columns of matrix first should be equal to the number of rows of second matrix\n");
    printf("Enter the number of rows and columns for the first matrix:\n");
    scanf("%d%d", &r1, &c1);
    printf("Enter the number of rows and columns for the second matrix:\n");
    scanf("%d%d", &r2, &c2);

    while (c1 != r2)
    {
        printf("Enter the number of rows and columns for the first matrix:\n");
        scanf("%d%d", &r1, &c1);
        printf("Enter the number of rows and columns for the second matrix:\n");
        scanf("%d%d", &r2, &c2);
    }
    printf("Enter the elements for first matrix:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("Enter the element a%d%d", i + 1, j + 1);
            scanf("%d", &first[i][j]);
        }
    }
    printf("Enter the elements for second matrix:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("Enter the element a%d%d", i + 1, j + 1);
            scanf("%d", &second[i][j]);
        }
    }
    // Multiplication
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                mul[i][j] += first[i][k] * second[k][j];
            }
        }
    }
    // Output
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}