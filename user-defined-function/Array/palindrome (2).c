#include <stdio.h>
void main()
{
    char a[100];
    int flag = 1;
    gets(a);
    int i = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    for (int j = 0; j < i / 2; j++)
    {
        if (a[j] != a[i - 1 - j])
        {
            flag = 0;
            printf("it is not palindrome");
            break;
        }
    }
    if (flag)
    {
        printf("palindrome");
        }
}