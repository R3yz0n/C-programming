#include <stdio.h>

#define PI 3.14
void main()
{
    int r, n, sum = 0;
    int true = 1;
    printf("1 Area of circle\n 2Odd or Even\n3 Sum of N number\n4 Exit\n");
    while (true)
    {
        int choice;
        printf("enter ur choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter radius");
            scanf("%d", &r);
            printf("the area is %f\n", PI * r * r);
            break;
        case 2:
            printf("enter no to heck odd or even\n");
            scanf("%d", &n);
            if (n % 2 == 0)
                printf("odd\n");
            else
                printf("even\n");
            break;
        case 3:
            printf("enter n");
            scanf("%d", &n);
            for (int j = 0; j <= n; j++)
            {
                sum += j;
            }
            printf("the sum is %d", sum);
            break;

        case 4:
            true = 0;
            break;
        default:
            printf("no match found");
        }
    }
}