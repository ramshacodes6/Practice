#include <stdio.h>

int main()
{
    int num;
    int count = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }

    return 0;
}