#include <stdio.h>
void main()
{
    int vowel = 0, consonant = 0, comma = 0, semicolon = 0;
    char a[20];
    gets(a);
    int i = 0;
    while (a[i] != '\0')
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o')
        {
            vowel++;
        }
        else if (a[i] == ',')
            comma++;
        else if (a[i] == ';')
            semicolon++;
        else
            consonant++;
        i++;
    }
    printf("the count of vowels is %d comma is %d and consonant is %d and semicolon is %d", vowel, comma, consonant, semicolon);
}