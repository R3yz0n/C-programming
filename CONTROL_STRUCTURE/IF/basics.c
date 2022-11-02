#include <stdio.h>
void main()
{
    int age;
    int vip = 0;
    char c;
    printf("enter the age");
    scanf("%d", &age);
    printf("do u have vip?");
    scanf(" %c", &c);
    if (c == 'y')
    {
        vip = 1;
    }
    if (age < 18)
    {
        if (vip == 0)
            printf("he cannot drive");
        else
            printf("can drive");
    }
    if (age >= 18)
    {
        if (age < 70)
        {
            printf("you can drive");
        }
        else
        {
            if (vip == 0)
                printf("you cannot drive");
            else
                printf("you can drive");
        }
    }
}