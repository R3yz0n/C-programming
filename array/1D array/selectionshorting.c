#include <stdio.h>

int main()
{
    int a[5] = {2, 3, 6, 4, 1}, temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d \t", a[i]);
    }
    printf("\nthe second largest element is %d", a[1]);
}