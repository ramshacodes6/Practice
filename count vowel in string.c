#include <stdio.h>
#include <string.h>

int main()
{
    char word[50];
    int count = 0;

    printf("Enter a word: ");
    scanf("%s", word);

    for(int i = 0; i < strlen(word); i++)
    {
        if(word[i] == 'a' || word[i] == 'e' ||
           word[i] == 'i' || word[i] == 'o' ||
           word[i] == 'u')
        {
            count++;
        }
    }

    printf("Vowels = %d", count);

    return 0;
}