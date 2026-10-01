#include <stdio.h>
#include <string.h>

int main()
{
    char first[] = "Hello";
    char second[] = "Hello";

    if(strcmp(first, second) == 0)
    {
        printf("Both strings are same");
    }
    else
    {
        printf("Strings are different");
    }

    return 0;
}