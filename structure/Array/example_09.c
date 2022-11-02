#include <stdio.h>
struct student
{
    int roll;
    char name[20];
    int class;
    int marks[5];
};
void main()
{
    struct student s[50], temp;
    int n;
    float per, t;
    printf("enter the value of n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("roll no = ");
        scanf("%d", &s[i].roll);
        printf("name = ");
        scanf("%s", s[i].name);
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &s[i].marks[j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s\t%d\t", s[i].name, s[i].roll);
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", s[i].marks[j]);

            t += s[i].marks[j];
        }
        per = (float)t / 5;
        printf("%f\n", per);
    }
}