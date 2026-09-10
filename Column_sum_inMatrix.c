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

    for(int j = 0; j < 3; j++)
    {
        int sum = 0;

        for(int i = 0; i < 2; i++)
        {
            sum = sum + arr[i][j];
        }

        printf("Column %d Sum = %d\n", j + 1, sum);
    }

    return 0;
}