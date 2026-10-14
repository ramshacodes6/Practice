#include <stdio.h>
#include <string.h>

int main()
{
     int numbers[5] = {10, 20, 30, 40, 50};
    int *ptr = numbers;
   for(int i = 0; i < 3; i++)
{
    printf("%d ", *(ptr + i));
}
}