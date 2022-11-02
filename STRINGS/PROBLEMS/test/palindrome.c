#include <stdio.h>
void main()
{
    char a[20];
    char b[20];
    gets(a);
    int i = 0, j = 0, flag = 1;
    while (a[i] != '\0')
    {
        i++;
    }
    while (a[j] != '\0')
    {
        b[j] = a[j];
        j++;
    }
    b[j] = '\0';
    int temp;
    for (int k = 0; k < i / 2; k++)
    {
        temp = a[k];
        a[k] = a[i - k - 1];
        a[i - k - 1] = temp;
    }
    puts(a);
    puts(b);

    for (int k = 0; k < i - 1; k++)
    {
        if (a[k] != b[k])
        {
            flag = 0;
            printf("it is not palindrome");
            break;
        }
    }
    if (flag == 1)
        printf("it is palindrome");
}