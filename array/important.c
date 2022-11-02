#include <stdio.h>
#define n 5
void main()
{
    int a[5] = {1, 99, 3, 4, 5};
    char c[5] = {'s'};
    int *p;
    p = a;

    for (int j = 0; j < 5; j++)

        printf("%d ", a[j]);

    a[10] = 69;
    printf("\n%d", a[10]);

    // To derefrence and pointing address of an array
    printf("\n%d", *(a + 1));
    printf("\n %d", *(&a[0] + 1));
    printf("\n %u", a + 1);
    printf("\n %u", &a[0] + 1);

    // initilization and declaration using users input
    int f = 3;
    // int arr[f] = {1, 2, 3};
    int arr[f];
    arr[f] = 99;
    for (int j = 0; j < 4; j++)
    {
        printf("%d ", arr[j]);
    }
}