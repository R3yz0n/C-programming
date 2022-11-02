#include <stdio.h>
#include <conio.h>
void main()
{
    int n1, n2;
    printf("enter the number");
    scanf("%d%d", &n1, &n2);
    int max;
    max = n1 > n2 ? n1 : n2;
    int temp = max;
    // 4 8
    while (1)
    {
        if (n1 == 0 || n2 == 0)
        {
            printf("%d is lcm", max);
            break;
        }
        else if ((max % n1 == 0) && (max % n2 == 0))
        {
            printf("%d is lcm", max);
            break;
        }
        else
        {
            max += temp;
        }
    }
    getch;
}