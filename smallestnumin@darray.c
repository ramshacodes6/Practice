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

    int smallest = arr[0][0];

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j] < smallest)
            {
                smallest = arr[i][j];
            }
        }
    }

    printf("Smallest = %d", smallest);

    return 0;
}