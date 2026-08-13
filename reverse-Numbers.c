#include <stdio.h>

int main()
{
    int num, digit, reverse = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    for(; num != 0; num = num / 10)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
    }

    printf("Reverse = %d", reverse);

    return 0;
}