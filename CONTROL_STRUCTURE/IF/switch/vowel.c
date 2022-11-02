#include <stdio.h>
void main()
{
    printf("enter the character");
    char ch;
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
        printf("it is vowel");
        break;
    default:
        printf("it is not vowel");
    }
}