#include <stdio.h>
void main()
{

    int a[4][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("A%d%d = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < 2; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = sum + a[j][i];
        }
        printf("the sum of %d row is %d\n", i, sum);
    }
}