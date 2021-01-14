#include <stdio.h>
int main()
{
    int arr[] = {15, 77, 8, 6, 10, 25, 46, 2, 12};
    int largest;

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if(arr[i] < largest)
        {
            largest = arr[i];
        }
    }
    printf("print %d", largest);
}