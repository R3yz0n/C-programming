#include <stdio.h>
#include <string.h>
void main()
{
    char a[20];
    char b[20];
    printf("enter the first string ");
    gets(a);
    printf("enter the first string ");
    gets(b);
    int la, lb;
    la = strlen(a);
    lb = strlen(b);
    printf("%d", la + lb);
    puts(a);

    a[la + lb] = '\0';
    // char x[20];
    // strcpy(x, strncat(a, b, 2));
    // printf("%s", x);
}