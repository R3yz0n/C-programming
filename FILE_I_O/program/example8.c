#include <stdio.h>
void main()
{
    FILE *ps, *pd;
    ps = fopen("random.txt", "r");
    pd = fopen("withoutvowel.txt", "w");
    char c;
    while (1)
    {

        fscanf(ps, "%c", &c);
        if (feof(ps))
            break;

        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
        {
            fprintf(pd, "%c", c);
        }
    }
}