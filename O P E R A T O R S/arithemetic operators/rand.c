#include <stdio.h>
void main()
{
    int a[5] = {1, 2, 3, 4};
    int b[5];
    b[0] = a[3];
    printf("%d", b[0]);
}