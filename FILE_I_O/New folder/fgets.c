#include <stdio.h>
void main()
{
    FILE *p;
    p = fopen("fgets.txt", "r+");
    char name[20];
    fgets(name, 6, p);
    printf("%s", name);
}