#include <stdio.h>
int min(int[], int);
void main()
{
    int a[5];
    int lowest;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    lowest = a[0];

    min(a, lowest);
}
int min(int a[], int low)
{
    low = a[0];

    for (int i = 0; i < 5; i++)
    {

        if (a[i] < low)
        {
            low = a[i];
        }
    }
    printf("the smallest number is %d", low);
}