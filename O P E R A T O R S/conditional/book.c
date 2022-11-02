#include <stdio.h>
void main()
{
    int n1, n2, n3, n4, lar1, lar2, largest;
    printf("enter elements");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);
    lar1 = n1 > n2 ? n1 : n2;
    lar2 = lar1 > n3 ? lar1 : n3;
    largest = lar2 > n4 ? lar2 : n4;
    printf("the largest number is %d", largest);
}