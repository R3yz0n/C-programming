#include <stdio.h>
int f(int, int, int);
void main()
{
    int f1, f2, temp;
    f1 = 0;
    f2 = 1;
    int n = 13;

    f(f1, f2, n);
}
int f(int f1, int f2, int n)
{
    if (n == 0)
        return 0;

    int temp = f1 + f2;
    f1 = f2;
    f2 = temp;
    printf("%d ", temp);
    return f(f1, f2, n - 1);
}