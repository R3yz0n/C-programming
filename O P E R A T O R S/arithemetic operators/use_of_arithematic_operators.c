#include <stdio.h>
void main()
{

    int a, b, c;
    float d, e, f;
    a = 8, b = 3, c = 4;
    d = 12.5, e = 6.5, f = 3.5;

    printf("a/b=%d a/c=%d \n", a / b, a / c);
    printf("d/e=%f d/f=%f\t d/a=%f ", d / e, d / f, d / a);
    printf("\n Uniary minus -a", -a);
    /* type casting ho ki k ho error aako wala
     int x = 3, y = 2;
     int z = x / y;
     printf("\n%f", z);
     printf("\n%f", 3 / 2);
     */
}