#include <stdio.h>
void sum(int, int, int, int);
void sub(int, int, int, int);
void mul(int, int, int, int);
void main()
{
    int x, y, a, b;
    printf("enter a+ib = ");
    scanf("%d+i%d", &a, &b);
    printf("enter x+iy = ");
    scanf("%d+i%d", &x, &y);
    sum(x, y, a, b);

    mul(x, y, a, b);
}
void sum(int a, int b, int x, int y)
{
    printf("the sum is %d+i%d", a + x, b + y);
}

void mul(int a, int b, int x, int y)
{

    int real, img;
    real = a * x - b * y;
    img = y * a + b * x;
    printf("the product is %d+i%d", real, img);
}