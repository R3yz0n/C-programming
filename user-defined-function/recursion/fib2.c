#include <stdio.h>
void main()
{
    int f1, f2, temp;
    f1 = 0;
    f2 = 1;
    int n;
    int sum = 0;
    printf("enter the value of n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        temp = f1 + f2;
        sum += f1;
        printf("%d ", f1);
        f1 = f2;
        f2 = temp;
    }
    printf("\n the sum is %d", sum);
}