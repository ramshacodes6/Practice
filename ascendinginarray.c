#include <stdio.h>

int main()
{
    int numbers[5];
    int temp;

    printf("Enter 5 numbers:\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    // Sorting
    for(int i = 0; i < 5; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if(numbers[i] > numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    printf("Ascending order:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}