#include <stdio.h>

int main()
{
    int number = 10;

    int *ptr = &number;

    *ptr = *ptr * 2;

    printf("Number = %d", number);

    return 0;
}