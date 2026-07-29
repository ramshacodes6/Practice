#include <stdio.h>

int main()
{
    int day = 2;

    switch(day)
    {
        case 1:
            printf("Monday");
            break;

        case 2:
            printf("Tuesday");
            break;

        case 3:
            printf("Wednesday");
            break;

        default:
            printf("Invalid Day");
    }

    int choice = 3;
    switch(choice)
{
    case 1:
        printf("Pizza");
        break;

    case 2:
        printf("Burger");
        break;

    case 3:
        printf("Pasta");
        break;

    default:
        printf("Invalid");
}

    return 0;
}