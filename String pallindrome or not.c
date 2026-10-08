#include <stdio.h>
#include <string.h>

int main()
{
    char word[50];
    char reverse[50];

    printf("Enter a word: ");
    scanf("%s", word);

    int length = strlen(word);

    for(int i = 0; i < length; i++)
    {
        reverse[i] = word[length - 1 - i];
    }

    reverse[length] = '\0';

    if(strcmp(word, reverse) == 0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}