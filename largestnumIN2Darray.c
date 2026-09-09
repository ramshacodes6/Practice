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

    int largest = arr[0][0];

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j] > largest)
            {
                largest = arr[i][j];
            }
        }
    }

    printf("Largest = %d", largest);

    return 0;
}