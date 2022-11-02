#include <stdio.h>
struct student
{
    char name[20];
    int roll_no;
    int marks[3];
};
void main()
{
    struct student s[10], temp;
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
    int t1, t2;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            t1 = t2 = 0;
            for (int k = 0; k < 3; k++)
            {
                t1 += s[j].marks[k];
                t2 += s[j + 1].marks[k];
            }
            if (t1 > t2)
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
        printf("%s\t%d\t", s[i].name, s[i].roll_no);
        for (int j = 0; j < 3; j++)
        {
            printf("%d", s[i].marks[j]);
        }
        printf("\n");
    }
}