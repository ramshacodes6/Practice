#include <stdio.h>
#include <string.h>

int main()
{
    char first[20] = "Hello";
    char second[] = "World";

    strcat(first, second);

    printf("%s", first);

    return 0;
}