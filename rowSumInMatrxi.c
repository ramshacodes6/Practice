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

    for(int i = 0; i < 2; i++)
    {
        int sum = 0;

        for(int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }

        printf("Row %d Sum = %d\n", i + 1, sum);
    }

    return 0;
}