#include <stdio.h>
void main()
{
    float phy, che, maths, sci, total, per;
    printf("Enter the marks of phy");
    scanf("%f", &phy);

    printf("Enter the marks of chemistry");
    scanf("%f", &che);

    printf("Enter the marks of maths");
    scanf("%f", &maths);

    printf("Enter the marks of science");
    scanf("%f", &sci);
    per = (phy + che + maths + sci) / 400 * 100;
    if (per >= 40 && phy > 30 && che > 30 && maths > 30 && sci > 30)
    {
        printf("you pass and ur per is %f", per);
    }
    else
    {
        printf("you fail and ur per is %f", per);
    }
}