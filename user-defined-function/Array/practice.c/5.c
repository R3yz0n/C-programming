#include <stdio.h>
// n even numbers
void main()
{
    int n;
    printf("how many even numbers do u want");
    scanf("%d", &n);
    int even = 0;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", even);
        even += 2;
    }
}