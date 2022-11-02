#include <stdio.h>
#include <string.h>
void main()
{

    char a[10] = "liril";
    char b[10];

    int i = 0;
    while (a[i] != '\0')
    {
        b[i] = a[i];
        i++;
    }
    b[i] = '\0';

    // reverse of a
    char temp;
    for (int j = 0; j < i / 2; j++)
    {
        temp = a[j];
        a[j] = a[i - 1 - j];
        a[i - 1 - j] = temp;
    }
    puts(a);

    // comparing strings
    int flag = 0;
    for (int k = 0; k < i; k++)
    {
        if (a[k] != b[k])
        {
            flag = 1;
            printf("it is not palindrome");
            break;
        }
    }
    if (flag == 0)
    {
        printf("it is palindrome");
    }
}