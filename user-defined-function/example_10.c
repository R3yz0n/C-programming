#include <stdio.h>
#include <math.h>
void quad(float, float, float);
void main()

{
    float a, b, c;

    printf("enter the values of a,b,c");
    scanf("%f%f%f", &a, &b, &c);
    quad(a, b, c);
}
void quad(float a, float b, float c)
{

    float d, r1, r2;
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        printf("roots are real\n");
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("the roots are\nr1 = %f\nr2=%f", r1, r2);
    }
    else
    {
        d = sqrt(fabs(d));
        r1 = -b / (2 * a);
        r2 = (sqrt(-d)) / (2 * a);
        printf("roots are\n");
        printf("%f+i%f", r1, r2);
        printf("\n%f-i%f", r1, r2);
    }
}