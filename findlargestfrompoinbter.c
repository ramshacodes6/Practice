int arr[4] = {12, 45, 23, 9};
int *p = arr;
int largest = *p;

for(int i = 1; i < 4; i++)
{
    if(*(p + i) > largest)
    {
        largest = *(p + i);
    }
}

printf("%d", largest);