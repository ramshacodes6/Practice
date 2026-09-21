#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    char copy[50];

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    strcpy(copy, name);

    printf("Copied name = %s", copy);

    return 0;
}