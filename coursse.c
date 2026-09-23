#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    char course[] = " is learning C";

    printf("Enter your name: ");
    scanf("%s", name);

    strcat(name, course);

    printf("%s", name);

    return 0;
}