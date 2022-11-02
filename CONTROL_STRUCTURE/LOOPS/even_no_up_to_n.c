#include <stdio.h>
void main()
{
    int n1, n2, c;
    printf("enter the starting point");
    scanf("%d", &n1);
    printf("enter the ending  point");
    scanf("%d", &n2);
    n1++;
    int sum;

    for (int j = n1; j < n2; j++)
    {
        if (j % 2 != 0)
        {
            printf("%d ", j);
            sum += j;
        }
    }
    printf("   =%d", sum);
    // n1++;
    // if (n1 % 2 == 0)
    //     n1++;
    // for (int j = n1; j < n2; j = j + 2)
    // {

    //     printf("%d ", j);

    // }
}