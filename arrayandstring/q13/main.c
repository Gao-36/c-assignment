#include <stdio.h>

int main()
{
    int i;
    int arr1[5] = {1, 3, 5, 6, 2};
    int arr2[5];
    for (i = 0; i < 5; i++)
    {
        arr2[i] = arr1[4 - i];
    }
    printf("array 1: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\narray 2: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}