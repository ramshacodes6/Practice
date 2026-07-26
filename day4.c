#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    printf("%d\n", a > b);
    printf("%d\n", a < b);
    printf("%d\n", a == b);

    // AND operator
    int age = 25;
    if(age >= 18 && age <= 60)
    {
        printf("You are eligible\n");
    }

    // OR operator
    int marks = 65;
    int sports = 1;

    if(marks >= 90 || sports == 1)
    {
        printf("You are eligible through sports quota\n");
    }

    // NOT operator
    if(!(a > b))
    {
        printf("a is not greater than b\n");
    }

    return 0;
}