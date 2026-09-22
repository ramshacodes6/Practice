#include <stdio.h>
#include <string.h>

int main()
{
    char password[] = "abc123";
    char copy[20];

    strcpy(copy, password);

    printf("Copied password = %s", copy);

    return 0;
}