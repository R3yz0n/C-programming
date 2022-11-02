#include <stdio.h>
void add(int a, int b, int x, int y)
{
    printf("the addition is %d+i%d\n", a + x, b + y);
}
void sub(int a, int b, int x, int y)
{
    printf("the addition is %d+i%d\n", a - x, b - y);
}
void mul(int a, int b, int x, int y)
{
    int real, img;
    real = a * x - b * y;
    img = b * x + a * y;
    printf("the addition is %d+i%d\n", real, img);
}
void div(int a, int b, int x, int y)
{
}
void main()
{
    int a, b, x, y;
    printf("enter the first complex number in the form of a+ib ");
    scanf("%d+i%d", &a, &b);
    printf("enter the second complex number in the form of x+iy");
    scanf("%d+i%d", &x, &y);
    add(a, b, x, y);
    sub(a, b, x, y);
    mul(a, b, x, y);
    div(a, b, x, y);
}