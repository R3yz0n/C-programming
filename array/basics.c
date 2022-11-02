#include <stdio.h>
void main()
{

    int n;
    printf("enter the size of an array");
    scanf("%d", &n);
    n = 3;
    int arr[n];
    arr[n] = 5;
    for (int j = 0; j < 4; j++)
    {
        printf("%d ", arr[j]);
    }

    // for (int j = 0; j < n; j++)
    // {
    //     printf("%d element", j);
    //     scanf("%d", &a[j]);
    // }
    // for (int j = 0; j < n; j++)
    // {
    //     printf(" first element = %d", a[j]);
    // }
}