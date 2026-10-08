#include <stdio.h>
#include <string.h>

int main()
{
    char word[50];

    printf("Enter a word: ");
    scanf("%s", word);

    int length = strlen(word);

    printf("Last character = %c", word[length - 1]);

    return 0;
}