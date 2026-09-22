#include <stdio.h>
#include <string.h>

int main()
{
    char first[] = "Hello";
    char second[] = "World";

    char copy1[20];
    char copy2[20];

    strcpy(copy1, first);
    strcpy(copy2, second);

    printf("%s %s", copy1, copy2);

    return 0;
}