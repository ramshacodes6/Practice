#include <stdio.h>
#include <string.h>

int main()
{
    char first[] = "Hello";
    char second[] = "Hello";

    int result = strcmp(first, second);

    printf("Result = %d", result);

    return 0;
}