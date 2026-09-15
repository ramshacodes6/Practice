#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    int count = 0;

    printf("Enter a word: ");
    scanf("%s", name);

    for(int i = 0; i < strlen(name); i++)
    {
        if(name[i] == 'a')
        {
            count++;
        }
    }

    printf("'a' appears %d times", count);

    return 0;
}