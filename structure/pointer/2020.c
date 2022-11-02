#include <stdio.h>
struct DIMAG_KO_DAHI
{
    int bid;
    char title[20];
    float price;
    int page;
};
void main()
{

    int n = 3;
    struct DIMAG_KO_DAHI book[n], temp;

    struct DIMAG_KO_DAHI *p = book;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the bid");
        scanf("%d", &(p + i)->bid);

        printf("Enter the title");
        scanf("%s", (p + i)->title);

        strupr((p + i)->title);
        printf("enter the price");
        scanf("%f", &(p + i)->price);
        printf("Enter the no of page");
        scanf("%d", &(p + i)->page);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp((p + j)->title, (p + j + 1)->title) > 0)
            {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
    printf("BID\tTITLE\tPRICE\tPAGES\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t%s\t%.2f\t%d\n", (p + i)->bid, (p + i)->title, (p + i)->price, (p + i)->page);
    }
}