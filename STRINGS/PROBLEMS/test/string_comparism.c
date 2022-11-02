#include <stdio.h>
#include <string.h>
void main()
{

    char a[10];
    char b[10];
    gets(a);
    gets(b);
    int flag = 0, i = 0;
    while (a[i] != '\0' || b[i] != '\0')
    {
        if (a[i] != b[i])
        {
            printf("it is not same");
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 0)
    {
        printf("they are same");
    }
}