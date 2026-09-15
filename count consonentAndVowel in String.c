#include <stdio.h>
#include <string.h>

int main()
{
    char word[50];
    int vowels = 0;
    int consonants = 0;

    printf("Enter a word: ");
    scanf("%s", word);

    for(int i = 0; i < strlen(word); i++)
    {
        if(word[i] == 'a' || word[i] == 'e' ||
           word[i] == 'i' || word[i] == 'o' ||
           word[i] == 'u')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d", consonants);

    return 0;
}