#include <stdio.h>
struct student
{
    char name[20];
    int roll_no;
    int marks[3];
    int total;
};
void main()
{
    struct student s[50], temp;
    int n;
    printf("enter the value of n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter the name %d = ", i + 1);
        scanf("%s", s[i].name);
        printf("enter the roll no = ");
        scanf("%d", &s[i].roll_no);
        printf("enter marks in 3 subject");

        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &s[i].marks[j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        s[i].total = 0;
        for (int j = 0; j < 3; j++)
        {
            s[i].total += s[i].marks[j];
        }
    }
    printf("\n%d ", s[0].total);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (s[j].total > s[j + 1].total)
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    printf("Name\tRollno\tMarks\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t%d\t%d\n", s[i].name, s[i].roll_no, s[i].total);
    }
}