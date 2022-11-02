#include <stdio.h>
#include <math.h>
void main()
{
    int flag = 1;
    float y = 1;
    int n;
    int fact = 1;
    printf("enter the value of n");
    scanf("%d", &n);

    for (int i = 1; i <= 4; i++)
    {
        flag = 1;
        if (i == 1)
            flag = 0;
        for (int k = 2; k < i; k++)
        {

            if (i % k == 0)
            {
                flag = 0;
                break;
            }
        }
        printf("%d ", flag);
        if (flag == 0)
        {
            for (int j = i; j != 0; j--)
            {
                fact = fact * j;
            }
            y += i * i / (float)fact;
            fact = 1;
        }
    }
    printf("the sum is %f", y);
}