#include <stdio.h>
#include <string.h>

int main()
{
    char first[] = "Programming";
    char second[30];

    strcpy(second, first);

    printf("Copied string = %s\n", second);
    printf("Length = %d", strlen(second));

    return 0;
}