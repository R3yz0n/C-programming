#include <stdio.h>
void main()
{
    int n = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", n);
            n++;
        }
        printf("\n");
    }
}