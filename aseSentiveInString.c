#include <stdio.h>
#include <string.h>

int main()
{
    char first[] = "Hello";
    char second[] = "hello";

    if(strcmp(first, second) == 0)
    {
        printf("Same");
    }
    else
    {
        printf("Different");
    }

    return 0;
}