#include <stdio.h>
#include <string.h>
void main()
{
    char a[20];
    char temp[20];
    gets(a);
    strcpy(temp, a);
    strrev(a);
    if ((strcmp(a, temp) == 0))
    {
        printf("it is palindrome");
    }
    else
        printf("it is not palindrome");
}