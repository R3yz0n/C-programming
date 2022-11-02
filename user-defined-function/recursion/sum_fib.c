#include <stdio.h>
int call(int, int, int);

void main()
{
    int n;
    printf("enter the value of n");
    scanf("%d", &n);
    int f1, f2;
    f1 = 0;
    f2 = 1;
    printf("\n%d ", call(f1, f2, n));
}
int call(int f1, int f2, int n)
{

    int temp;
    temp = f1 + f2;
    if (n == 0)
        return 0;

    printf("%d ", f1);
    f1 = f2;
    f2 = temp;
    return f1 + call(f1, f2, n - 1);
}