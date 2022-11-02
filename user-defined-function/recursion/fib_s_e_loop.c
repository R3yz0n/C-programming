#include <stdio.h>
void main()
{
    int n, i = 0;
    int temp;
    printf("enter up to where u want the series");
    scanf("%d", &n);
    int f1 = 0, f2 = 1;

    while (1)
    {
        temp = f1 + f2;

        if (f1 >= n)
            break;
        i += f1;
        printf("%d ", f1);
        f1 = f2;
        f2 = temp;
    }
    printf("\n the sum is %d", i);
}