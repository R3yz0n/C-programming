#include <stdio.h>
int main()
{
    int a = 1;
    char ch;
    printf("enter the number");
    scanf("%d", &a);
    switch ((int)(a > 0))
    {
    case 1:
        printf("hello ji");
        printf("\nenter the character");
        scanf(" %c", &ch);
        switch ((int)(a > 0))
        {

        case '0':
            printf("it performs addition");
        case '1':
            printf("it performs subtraction");
        }

    case 2:

        printf("\nkeisei ho?");
    }
}