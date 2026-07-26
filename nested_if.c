#include <stdio.h>

int main()
{
    int age = 22;
    int hasID = 1;

    if(age >= 18)
    {
        if(hasID == 1)
        {
            printf("Entry Allowed");
        }
        else
        {
            printf("ID Required");
        }
    }
    else
    {
        printf("Not Eligible");
    }

    return 0;
}