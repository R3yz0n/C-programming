#include <stdio.h>
#include <string.h>
void main()
{

    FILE *ps, *pd;
    ps = fopen("random.txt", "r");
    pd = fopen("withoutvowel.txt", "w+");
    char check[20];

    while (1)
    {
        fscanf(ps, "%s", check);
        if (feof(ps))
            break;

        if ((strcmp(check, "three") == 0) && (strcmp(check, "time") != 0))
        {
            fprintf(pd, "%s\n", check);
        }
    }
    rewind(pd);
    fclose(pd);
    fclose(ps);
}