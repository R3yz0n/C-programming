#include <stdio.h>
char *get(char *);
void main()
{
    char a;
    printf("enete the charactet");
    scanf("%c", &a);

    char *p = get(&a);
    printf("%c", *p);
}
char *get(char *ch)
{
    if (*ch >= 65 && *ch <= 90)
        *ch = *ch + 32;
    else if (*ch >= 97 && *ch <= 122)
        *ch -= 32;
    return ch;
}