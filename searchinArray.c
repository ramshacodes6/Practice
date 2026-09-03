#include <stdio.h>

int main()
{
    int numbers[5];
    int search;
    int found = 0;

    printf("Enter 5 numbers:\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &search);

    for(int i = 0; i < 5; i++)
    {
        if(numbers[i] == search)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("%d is present in the array", search);
    }
    else
    {
        printf("%d is not present in the array", search);
    }

    return 0;
}