#include <stdio.h>
void main()
{
    int n;
    int c = 1;
    printf("enter the values of n");
    scanf("%d", &n);
    for (int j = 1; j <= 5; j++)
    {

        for (int k = 0; k < j; k++)
        {

            printf("%d ", c);
            c++;
        }
        printf("\n");
    }
}