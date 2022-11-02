#include <stdio.h>
void main()
{
    int a[10], even = 0, odd = 0;
    for (int j = 0; j < 9; j++)
    {
        printf("enter the %d = ", j);
        scanf("%d", &a[j]);
    }
    for (int j = 0; j < 9; j++)
    {
        if (a[j] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("the counts are even=%d and odd=%d", even, odd);
}