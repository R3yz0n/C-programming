#include <stdio.h>
void main()
{
    float sp, cp, p, l;
    printf("enter the cost price");
    scanf("%f", &cp);

    printf("enter the sellingprice");
    scanf("%f", &sp);
    if (sp > cp)
    {
        p = sp - cp;
        printf("loss is %f", p);
    }
    else
    {
        l = cp - sp;
        printf("loss is %f", p);
    }
}