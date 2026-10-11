#include <stdio.h>

int main()
{
    int number = 50;

    int *ptr = &number;

    printf("Address of number = %p\n", (void*)&number);
    printf("Address stored in ptr = %p", (void*)ptr);

    return 0;
}