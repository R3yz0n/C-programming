#include <stdio.h>
int main()
{
    // int x = 10;
    // int a = (2 + 2) * 4;
    // printf("%d", a);
    // // printf("\n%d", ++x + ++x);
    // printf("\n%d", --x + --x + x--);
    int a = 2;
    int b = 6;
    int c = 5;
    b = ++a + ++a;

    // // b = ++a + ++a * 2 + a++;

    printf("%d\n", b);
    printf("%d", a);
}