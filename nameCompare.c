#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];

    printf("Enter name: ");
    scanf("%s", name);

    if(strcmp(name, "Ramsha") == 0)
    {
        printf("Name matched");
    }
    else
    {
        printf("Name does not match");
    }

    return 0;
}