#include <stdio.h>
void main()
{
    char name[20];
    printf("enter your name");
    scanf("%[A-Z]", name);
    puts(name);
}