#include <stdio.h>
struct student
{
    int roll_no;
    char name[20];
    char address[20];
    int marks;
};
void main()
{
    struct student s[35];
    int n;
    printf("enter the value of n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter the name %d = ", i + 1);
        scanf("%s", s[i].name);
        printf("enter address");
        scanf("%s", s[i].address);

        printf("enter the roll no = ");
        scanf("%d", &s[i].roll_no);
        printf("enter marks");

        scanf("%d", &s[i].marks);
    }
    printf("Roll\tName\tAddress\tmarks\n");

    for (int i = 0; i < n; i++)
    {
        if (s[i].marks > 250)
        {
            printf("%d\t%s\t%s\t%d\n", s[i].roll_no, s[i].name, s[i].address, s[i].marks);
        }
    }
}