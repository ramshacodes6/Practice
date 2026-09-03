#include <stdio.h>

int main()
{
    int numbers[5];
    int positive = 0;
    int negative = 0;

    printf("Enter 5 numbers:\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);

        if(numbers[i] >= 0)
            positive++;
        else
            negative++;
    }

    printf("Positive numbers = %d\n", positive);
    printf("Negative numbers = %d", negative);

    return 0;
}
