#include <stdio.h>
#include <string.h>
void main()
{
    char a[10];
    char b[20];
    gets(a);
    gets(b);

    if (strcmp(a, b) == 0)
    {
        printf("both are same");
    }
    else if (strcmp(a, b) > 0)
    {
        printf("%s is greater than %s", a, b);
    }
    else if (strcmp(a, b) < 0)
    {
        printf("%s is smaller than %s", a, b);
    }
}