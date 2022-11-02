#include <stdio.h>
void main()
{
    FILE *p;
    p = fopen("example5.txt", "r");
    char c;
    char name[20];

    while (feof(p) == 0)
    {
        // c = getc(p);
        fscanf(p, "%c", &c);
        putchar(c);
    }
}