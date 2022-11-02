#include <stdio.h>
int send(char[]);

#include <string.h>
void main()
{
    char a[20];
    gets(a);
    int check;
    check = send(a);
    if (check == 1)
    {
        printf("it is palindrome");
    }
    else
    {
        printf("it is not palindrome");
    }
}
int send(char a[])
{
    char b[20];
    strcpy(b, a);
    strrev(b);
    if (strcmp(a, b) == 0)
        return 1;
    else
        return 0;
}