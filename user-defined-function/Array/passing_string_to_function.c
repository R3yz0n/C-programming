#include <stdio.h>
#include <string.h>
int str(char[]);
void main()
{
    char a[20];
    gets(a);
    int l = str(a);
    printf("the length is %d", l);
}
int str(char a[])
{
    puts(a);
    int l = strlen(a);
    return l;
}