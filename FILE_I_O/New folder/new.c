#include <stdio.h>
void main()
{
    int lcm;
    int a = 4;
    int b = 6;
    if (a > b)
        lcm = a;
    if (a < b)
        lcm = b;

    while (1)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            printf("%d", lcm);
            break;
        }
        else
            lcm++;
    }
}