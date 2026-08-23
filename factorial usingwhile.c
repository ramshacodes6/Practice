#include <stdio.h>

int main()
{
    int num;
    int i = 1;
    int factorial = 1;

    printf("Enter number: ");
    scanf("%d", &num);

    while(i <= num)
    {
        factorial = factorial * i;
        i++;
    }

    printf("Factorial = %d", factorial);

    return 0;
}