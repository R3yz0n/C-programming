#include <stdio.h>
void main()
{
    int a[2][2] = {1, 2, 3, 4};
    int b[2][2] = {1, 2, 3, 4};
    int count = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (a[i][j] != b[i][j])
            {
                count++;
                break;
            }
        }
    }
    printf("%d", count);

    if (count == 0)
        printf("array are same");
    else
        printf("they aint same");
}