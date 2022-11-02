#include <stdio.h>
void main()
{
    // IF YOU GO OUT OF BOUNDARY IT SHOWS UNUSUAL BEHAVIOUR
    char c[5];
    int a[5];
    int i = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("enter the character %d ", i);
        scanf(" %c", &c[i]);
        // printf("enter the integer %d ", i);

        // scanf(" %d", &a[i]);
    }

    printf("%c", c[10]);

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d  ", a[i]);
    // }
    printf("\n%s", c);
}