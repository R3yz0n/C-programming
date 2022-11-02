#include <stdio.h>
void main()
{
    FILE *p;
    p = fopen("enterkey.txt", "r+");
    char a;

    while (1)
    {
        printf("enter the char");
        fflush(stdin);
        scanf("%c", &a);

        if (a == '\n')
            break;

        fputc(a, p);
    }
}