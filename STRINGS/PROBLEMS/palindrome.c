#include <stdio.h>
#include <string.h>
void main()
{
    char a[10] = "sagar";
    int l = strlen(a);
    // int flag = 0;
    // for (int i = 0; i < l / 2; i++)
    // {
    //     if (a[i] != a[l - i - 1])
    //     {
    //         flag = 1;
    //         printf("it is not palindrome");
    //         break;
    //     }
    // }
    // if (flag == 0)
    //     printf("it is  palindrome");
    char temp[10];
    strcpy(temp, a);
    strrev(a);
    int flag;
    flag = strcmp(temp, a);
    if (flag == 0)
        printf("it is palindrome");
    else
        printf("it is not a palindrome");
}