#include <stdio.h>
void main()
{
    int prime = 0;
    int n;
    printf("enter a number to be tested");
    scanf("%d", &n);
    for (int j = 8; j < 20; j++)
    {
        prime = 0;
        for (int k = 2; k < j; k++)
        {
            if (j % k == 0)
            {
                prime = 1;
            }
        }
        if (prime == 0)
        {
            printf("%d ", j);
        }
    }
}