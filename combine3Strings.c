#include <stdio.h>
#include <string.h>

int main()
{
    char first[100] = "I ";
    char second[] = "love ";
    char third[] = "coding";

    strcat(first, second);
    strcat(first, third);

    printf("%s", first);

    return 0;
}