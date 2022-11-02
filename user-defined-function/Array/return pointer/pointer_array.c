#include <stdio.h>
int *call(int[], int[]);
void main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int temp[5];
    int *ptr;
    ptr = call(a, temp);
    printf("%d", *(ptr));
}
int *call(int b[], int tem[])
{
    int n = 2;
    int static x[2] = {n};
    return x;
}