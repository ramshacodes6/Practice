#include <stdio.h>
#include <string.h>

int main()
{
    char first[] = "Hello";
    char second[20];

    strcpy(second, first);

    first[0] = 'Y';

    printf("First = %s\n", first);
    printf("Second = %s", second);

    return 0;
}