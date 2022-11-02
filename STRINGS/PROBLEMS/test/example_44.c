#include <stdio.h>
void main()
{
    int i = 0, j = 0, k = 0;
    char f[10] = "Sagar";
    char m[10] = "Thapa";
    char l[10] = "Chhetri";
    char name[25];
    while (f[i] != '\0')

    {
        name[i] = f[i];
        i++;
    }

    while (m[j] != '\0')
    {
        name[i + j] = m[j];
        j++;
    }

    while (l[k] != '\0')
    {
        name[j + i + k] = l[k];
        k++;
    }
    name[i + j + k] = '\0';
    puts(name);
    i = 0;
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", name[i]);
    }
}
