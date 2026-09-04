#include <stdio.h>

int main()
{
    int numbers[5];
    int count = 0;

    printf("Enter 5 numbers:\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);

        if(numbers[i] > 10)
        {
            count++;
        }
    }

    printf("Numbers greater than 10 = %d", count);

    return 0;
}