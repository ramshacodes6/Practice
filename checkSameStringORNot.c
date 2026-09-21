#include <stdio.h>
#include <string.h>

int main()
{
    char first[] = "Ramsha";
    char second[20];

    strcpy(second, first);

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