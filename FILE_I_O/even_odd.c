#include <stdio.h>

void main()
{
    int n;
    FILE *odd, *even;
    odd = fopen("odd.txt", "w+");
    even = fopen("even.txt", "w");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            fprintf(even, "%d ", n);
        }
        else
        {
            fprintf(odd, "%d ", n);
        }
    }
    rewind(odd);
    while (1)
    {
        fscanf(odd, "%d", &n);
        if (feof(odd))
        {
            printf("end of file");

            break;
        }
        printf("%d ", n);
    }
}
