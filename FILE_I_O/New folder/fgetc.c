#include <stdio.h>
void main()
{
    FILE *p;
    p = fopen("fgetc.txt", "r");
    char name[30];
    int i = 0;

    while (feof(p) == 0)
    {

        name[i] = fgetc(p);

        i++;
    }

    printf("the string is %s", name);
}