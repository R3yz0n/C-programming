#include <stdio.h>
void main()
{

    int a[][3] = {{0}, {2}, 9, 89};
    for (int j = 0; j < 3; j++)
    {
        for (int k = 0; k < 3; k++)
        {
            printf("%d ", a[j][k]);
        }
        printf("\n");
    }
}