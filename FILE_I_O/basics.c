#include <stdio.h>
void main()
{
    FILE *ptr;

    ptr = fopen("amu.txt", "a");

    fputs("hello", ptr);
}