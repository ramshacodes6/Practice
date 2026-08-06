#include <stdio.h>

int main()
{
    int color;

    printf("Enter a number: ");
    scanf("%d", &color);

    switch(color)
    {
        case 1:
            printf("You entered Red");
            break;

        case 2:
            printf("You entered Green");
            break;

        case 3:
            printf("You entered Blue");
            break;

        default:
            printf("Invalid Color");
    }

    return 0;
}