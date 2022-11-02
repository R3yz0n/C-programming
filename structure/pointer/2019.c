#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    char name[20];
    char address[20];
};
void main()
{
    int n = 3;
    struct student s[20], temp;
    struct student *p = s;
    for (int i = 0; i < n; i++)
    {
        printf("enter id");
        scanf("%d", &(p + i)->id);

        printf("enter the name");
        scanf("%s", (p + i)->name);
        strupr((p + i)->name);
        printf("enter the address");
        scanf("%s", (p + i)->address);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp((p + j)->name, (p + j + 1)->name) > 0)

            {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
    printf("ID\tNAME\tADDRESS\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t%s\t%s\n", (p + i)->id, (p + i)->name, (p + i)->address);
    }
}
