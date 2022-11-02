#include <stdio.h>
void main()
{
    float Pn, Pdozen, n;
    printf("Enter the price of a dozen mangoes");
    scanf("%f", &Pdozen);
    printf("Enter the number of mangoes");
    scanf("%f", &n);
    Pn = Pdozen / 12 * n;
    printf("The price of n no of magoes is %f", Pn);
}