#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Length = %d", strlen(name));

    return 0;
}