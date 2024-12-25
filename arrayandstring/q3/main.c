#include <stdio.h>

int main()
{
    int arr[10], largest = 0, smallest = 0;
    printf("Enter 10 numbers: \n");
    for (int j = 0; j < 10; j++)
    {
        scanf("%d", &arr[j]);
    }
   
    printf("largest is %d and smallest is %d", largest, smallest);
    return 0;
}