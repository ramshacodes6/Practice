#include <stdio.h>

void change(int x)
{
    x = 100;
    printf("Inside function: %d\n", x);
}

int main()
{
    int a = 10;

    change(a);

    printf("Outside function: %d", a);

    return 0;
}