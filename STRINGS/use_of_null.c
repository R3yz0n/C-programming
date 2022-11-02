#include <stdio.h>
void sagar()
{
    // use of null
    char ch[10];
    printf("enter the name of 5 letters  :  ");
    gets(ch);
    puts(ch);
}
int main()
{
    // sagar();
    // return 0;
    char a[10] = "sagar";
    for (int j = 0; j < 10; j++)
    {
        printf("%c ", a[j]);
    }

    // This is a use of null character
    int ar[10] = {1, 2};
    for (int j = 0; j < 5; j++)
    {
        scanf("%d", &ar[j]);
    }
    for (int j = 0; j < 10; j++)
    {
        printf("%d ", ar[j]);
    }
}