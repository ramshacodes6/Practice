#include <stdio.h>

int main()
//print number 1 to 10
{
    for(int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }

    return 0;


    //print even numbers
    for(int a = 1; a <= 10; a++)
    {
        if(a % 2 == 0)
        {
            printf("%d\n", a);
        }
    }
}