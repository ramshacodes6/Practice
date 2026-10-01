#include <stdio.h>
#include <string.h>

int main()
{
    char password[50];

    printf("Enter password: ");
    scanf("%s", password);

    if(strcmp(password, "abc123") == 0)
    {
        printf("Password matched");
    }
    else
    {
        printf("Wrong password");
    }

    return 0;
}