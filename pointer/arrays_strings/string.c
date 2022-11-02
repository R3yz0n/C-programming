#include <stdio.h>
#include <string.h>
void main()
{
    char c[15] = "sagar thapa";
    char *p = c;

    puts(c);
    for (int i = 0; i < strlen(c); i++)
    {
        printf("%c", p[i]);
    }
    char *ch = "namesta";
    printf("\n");
    *(ch + 1) = 'A';
    puts(ch);
}