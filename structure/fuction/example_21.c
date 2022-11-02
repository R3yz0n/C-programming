#include <stdio.h>
struct student
{
    int roll;
    char name[20];
    int marks[3];
};
void main()
{
    int n = 3;
    struct student s[10], t;
    for (int i = 0; i < n; i++)
    {
        printf("enter name");
        scanf("%s", s[i].name);
        printf("enter marks");
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &s[i].marks[j]);
        }
    }
    int p1, p2;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            p1 = p2 = 0;
            for (int k = 0; k < 3; k++)
            {
                p1 += s[j].marks[k];
                p2 += s[j + 1].marks[k];
            }
            p1 /= 3;
            p2 /= 3;
            if (p1 < p2)
            {
                t = s[j];
                s[j] = s[j + 1];
                s[j + 1] = t;
            }
        }
    }
    printf("Name\tMakrs\tPercent\n");

    for (int i = 0; i < n; i++)
    {
        printf("%s\t", s[i].name);
        p1 = 0;
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", s[i].marks[j]);
            p1 += s[i].marks[j];
        }
        p1 /= 3;
        printf("%d\n", p1);
    }
}
