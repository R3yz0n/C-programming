#include <stdio.h>
void main()
{
    FILE *p;
    char name[20];
    p = fopen("fputs.txt", "w");
    gets(name);

    fputs(name, p);
}