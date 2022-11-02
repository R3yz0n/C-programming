#include <stdio.h>
int fact(int);
void main()
{

    int n, r;
    printf("enter the  'n' and 'r' ");
    scanf("%d%d", &n, &r);
    int nf, rf, nrf, comb;
    nf = fact(n);
    rf = fact(r);
    nrf = fact(n - r);
    comb = nf / (rf * nrf);
    printf("the combination is %d", comb);
}
int fact(int n)
{
    int fact = 1;
    while (n > 0)
    {
        fact *= n;
        n--;
    }
    return fact;
}