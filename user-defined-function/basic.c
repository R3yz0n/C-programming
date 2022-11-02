#include <stdio.h>
int sum(int, int);
void main()
{
    int a, b;
    a = 5, b = 6;
    int x = sum(a, b);
    printf("the sum is %d", x);
}
int sum(int A, int B)
{
    int sum = A + B;
    return sum;
}