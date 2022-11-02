#include <stdio.h>
void main()
{
    int a[10];
    for (int j = 0; j < 10; j++)
    {
        printf("enter the %d element in array = ", j + 1);
        scanf("%d", &a[j]);
    }
    printf("the elements are \n");
    for (int j = 0; j < 10; j++)
    {
        printf("arr[%d]=%d\n", j, a[j]);
    }
}