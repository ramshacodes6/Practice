#include <stdio.h>

int main()
{
    int a = 20;
    int b = 6;

    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);
    printf("Remainder = %d\n", a % b);

    int x = 15;
    int y = 15;

    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);
    printf("x < y: %d\n", x < y);
    printf("x > y: %d\n", x > y);
    printf("x <= y: %d\n", x <= y);
    printf("x >= y: %d\n", x >= y);

    return 0;
}