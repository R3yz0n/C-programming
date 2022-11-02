#include <stdio.h>
struct customer
{
    char name[20];
    int acc_no;
    float balance;
};
typedef struct customer F;
void main()
{
    F c[50];

    int n;
    printf("enter");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter the data for customer %d\n", i + 1);
        printf("enter name");
        scanf("%s", c[i].name);
        printf("enter accoutn numer = ");
        scanf("%d", &c[i].acc_no);
        printf("enter balance = ");
        scanf("%f", &c[i].balance);
    }
    float min_balance = c[0].balance;
    int flag = 0;
    printf("Name\tAccount number\tAccount Name\tBalance \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t%s\t%f\n", c[i].acc_no, c[i].name, c[i].balance);
    }
    for (int i = 0; i < n; i++)
    {
        if (min_balance < c[i].balance)
        {
            min_balance = c[i].balance;
            flag = i;
        }
    }
    printf("\n%s customer has the highest balance which is %f", c[flag].name, min_balance);
}