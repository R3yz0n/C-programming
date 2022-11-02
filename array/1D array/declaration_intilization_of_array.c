#include <stdio.h>
void main()
{
    // legal
    int a[5] = {1, 2, 3, 4, 5};
    // int b[3];
    // // il-legal
    // // b[3] = {1, 2, 3};
    a[5] = 99;

    int x = 3;
    // illegal
    int z[x];

    z[x] = 101;
}