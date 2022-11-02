#include <stdio.h>
void main()
{
    int c1, c2;
    printf("CHOOSE YOUR SCHOOL");
    printf("\n1. for Nepathya\n2. for kalika\n3. for Gwaz Academy\nCHOOSE!!=> ");
    scanf("%d", &c1);
    switch (c1)
    {
    case 1:
        printf("Nepathya\nEnter the Shift\n(1)Morning\n(2)Day shift");
        scanf("%d", &c2);
        switch (c2)
        {
        case 1:
            printf("Morning");
            break;
        case 2:
            printf("Day shift");
            break;
        }
        break;
    case 2:
        printf("Kalika\nEnter the Shift\n(1)Morning\n(2)Day shift");
        scanf("%d", &c2);
        switch (c2)
        {
        case 1:
            printf("Morning");
            break;
        case 2:
            printf("Day shift");
            break;
        }
    }
}