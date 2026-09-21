#include <stdio.h>
#include <string.h>

int main()
{
    char first[] = "Ramsha";
    char second[20];

    strcpy(second, first);

    printf("First = %s\n", first);
    printf("Second = %s", second);

    return 0;
}