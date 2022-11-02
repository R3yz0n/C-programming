#include <stdio.h>
void main()
{
    int n, large, small;
    printf("Enter the values of n");
    scanf("%d", &n);
    int ar[n];
    for (int j = 0; j < n; j++)
    {
        printf("enter the element no %d  \n", j);
        scanf("%d", &ar[j]);
    }
    large = ar[0];
    small = ar[0];
    for (int j = 0; j < n; j++)
    {
        if (ar[j] < ar[0])
        {
            small = ar[j];
        }
        if (ar[j] > ar[0])
            large = ar[j];
    }
    printf("\n large=%d small=%d", large, small);
}