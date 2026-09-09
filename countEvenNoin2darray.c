#include <stdio.h>

int main()
{
    int arr[2][3];
    int count = 0;

    printf("Enter 6 numbers:\n");

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);

            if(arr[i][j] % 2 == 0)
            {
                count++;
            }
        }
    }

    printf("Even numbers = %d", count);

    return 0;
}