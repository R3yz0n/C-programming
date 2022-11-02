#include <stdio.h>
void main()
{
    int num;
    printf("enter the number of rows = ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int k = num - 1; k >= i; k--)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}