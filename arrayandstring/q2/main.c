#include <stdio.h>

int main()
{
    int arr[10];
    printf("Enter 10 numbers: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < 10; j++)
    {
        printf("The value of arr[%d] is %d and its memory address is %d.\n", j, arr[j], &arr[j]);
    }
    return 0;
}