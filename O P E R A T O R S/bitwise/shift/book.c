#include <stdio.h>
void main()
{
    int a = 157;
    int left, right;

    left = a << 3;
    right = a >> 3;
    printf("left=%d", left);
    printf("\nright=%d", right);
}