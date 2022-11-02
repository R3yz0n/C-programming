#include <stdio.h>
void main()
{
    FILE *ps;
    FILE *pd;
    char c;
    ps = fopen("amu.txt", "r");

    pd = fopen("example7.txt", "w+");

    while (1)
    {

        fscanf(ps, "%c", &c);
        if (feof(ps))
            break;
        fprintf(pd, "%c", c);
    }
    rewind(pd);
    while (1)
    {
        fscanf(pd, "%c", &c);
        if (feof(pd))
            break;
        printf("%c", c);
    }
}