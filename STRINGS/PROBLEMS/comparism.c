#include <stdio.h>
#include <string.h>
void main()
{
    char a[20];
    char b[20];
    gets(a);
    gets(b);

    int flag = 0;
    int i = 0;
    while (a[i] != '\0' || b[i] != '\0')
    {
        if (a[i] > b[i])
        {
            flag = 1;
            printf("S1 larger");
            break;
        }
        else if (a[i] < b[i])
        {
            printf("s2 larger");
            break;
        }
        else
        {
            i++;
        }
    }
    if (i == strlen(a) || i == strlen(b))
    {
        printf("same");
    }
}