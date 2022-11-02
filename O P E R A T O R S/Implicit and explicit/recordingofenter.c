#include <stdio.h>
typedef int r;
void main()
{
    char a;
    printf("enter the enter");
    scanf("%c", &a);
    while (1)
    {
        if (a == '\n')
            break;
        scanf("%c", &a);
    }
}