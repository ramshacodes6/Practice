#include <stdio.h>

int main()
{
    int arr[2][3];

    printf("Enter 6 numbers:\n");

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Odd numbers are:\n");

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j] % 2 != 0)
            {
                printf("%d ", arr[i][j]);
            }
        }
    }

    return 0;
}