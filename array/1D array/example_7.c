#include <stdio.h>
void main()
{
    int a[10];
    int j = 0;
    int flag = 0;
    for (j = 0; j < 5; j++)
    {
        printf("enter the %d element", j + 1);
        scanf("%d", &a[j]);
    }
    int search;
    printf("enter the element to search");
    scanf("%d", &search);
    for (j = 0; j < 5; j++)
    {
        if (search == a[j])
        {
            flag = 1;
            break;
        }
        else
            flag = 0;
    }
    if (flag == 1)
    {
        printf("%d was found at %d positing", search, j + 1);
    }
}