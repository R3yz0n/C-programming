#include <stdio.h>
void main()
{
    char a[10];
    printf("enter the full name");
    scanf("%[^\n]", a);
    printf("%s", a);
}