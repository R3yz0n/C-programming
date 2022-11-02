#include <stdio.h>
#include <math.h>
void main()
{
    float a, b, c;
    float root1, root2;
    printf("enter the values of a b and c");
    scanf("%f%f%f", &a, &b, &c);
    float D = b * b - 4 * a * c;

    if (D > 0 && D == 0)
    {
        printf("The roots are real");
        float r1 = (-b + sqrt(D)) / (2 * a);
        float r2 = (-b - sqrt(D)) / (2 * a);
        printf("\nroot1=%f\nroot2=%f", r1, r2);
    }
    else if (D < 0)
    {
        printf("the roots are imaginary\n");
        float real, img;
        D = -D;
        real = -b / (2 * a);
        img = sqrt(D) / (2 * a);
        printf("Root 1= %f +i%f", real, img);
        printf("\nRoot 2= %f -i%f", real, img);
    }
}