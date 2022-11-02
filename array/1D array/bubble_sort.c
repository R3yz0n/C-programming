#include <stdio.h>

int main()
{

    int temp;
    int a[] = {12, 1, 0, 23, -2, 9};
    // 12 1 0 23 12 9
    // 1 12 0 23 12 9
    // 1 0 12 23 12  9
    // 1 0 12 23 12 9
    // 1 0 12 12 23 9
    // 1 0 12 12 9 23

    for (int j = 0; j < 6 - 1; j++)
    {
        for (int k = 0; k < 6 - 1 - j; k++)
        {
            if (a[k] < a[k + 1])
            {
                temp = a[k];
                a[k] = a[k + 1];
                a[k + 1] = temp;
            }
        }
    }
    printf("\n the sorted elements are ");

    for (int j = 0; j < 6; j++)
    {
        printf("%d ", a[j]);
    }
}
