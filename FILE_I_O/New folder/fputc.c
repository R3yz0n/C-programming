#include <stdio.h>
#include <string.h>
void main()
{
    FILE *p;
    char c[10];
    p = fopen("fputc.txt", "w");

    puts("enter the har");
    gets(c);

    for (int i = 0; i < strlen(c); i++)
    {

        fputc(c[i], p);
    }
    fclose(p);
}