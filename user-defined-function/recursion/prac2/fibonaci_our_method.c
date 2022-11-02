#include <stdio.h>
int call(int, int, int);

void main()
{
    int f1 = 0, f2 = 1, n;
    printf("enter the value of n");
    scanf("%d", &n);
    printf("the sum is %d", call(f1, f2, n));
}
int call(int f1, int f2, int n)
{
    static int sum;
    int temp;
    temp = f1 + f2;
    if (n == 0)
    {
        return sum;
    }
    sum += f1;
    printf("%d ", f1);
    f1 = f2;
    f2 = temp;

    return call(f1, f2, n - 1);
}