#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
// reading string with spaces and also not going beyong boundary
{

    char a[] = "sagar thapa";
    char b[50];
    strcpy(b, a);
    puts(a);
    puts(b);
}