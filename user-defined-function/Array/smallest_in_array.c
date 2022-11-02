#include <stdio.h>
int small(int[], int);
void main()
{
    int a[100];
    int n;
    printf("enter the length of an array");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int lest = small(a, n);
    printf("\nthe smalelst element is %d", lest);
}
int small(int a[], int n)
{

    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("the sorted array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    temp = a[0];
    return temp;
}