#include <stdio.h>
void main()
{
    int f1, f2;
    f1 = 0, f2 = 1;
    int sum = f1 + f2;
    int temp;

     for (int j = 0; j < 3; j++)
    {
        temp = f1 + f2;
        printf("%d ", f1);
        f1 = f2;
        f2 = temp;
        sum += temp;
    }
    printf("\n the sum is %d", sum);
}