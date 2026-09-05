#include <stdio.h>

int main()
{
    int arr1[3];
    int arr2[3];
    int arr3[6];

    printf("Enter 3 numbers for Array 1:\n");

    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 3 numbers for Array 2:\n");

    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Copy Array 1 into Array 3
    for(int i = 0; i < 3; i++)
    {
        arr3[i] = arr1[i];
    }

    // Copy Array 2 into Array 3
    for(int i = 0; i < 3; i++)
    {
        arr3[i + 3] = arr2[i];
    }

    printf("Combined Array:\n");

    for(int i = 0; i < 6; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}