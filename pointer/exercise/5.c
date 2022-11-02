#include <stdio.h>
int add(int, int);
void main()
{
    int (*p)(int, int) = add;
    int result = p(2, 3);
    printf("the sum is %d", result);
}
int add(int a, int b)
{
    return a + b;
}