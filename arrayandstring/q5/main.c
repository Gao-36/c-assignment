#include <stdio.h>

void reorder(int arr[10]);

int main()
{
    int arr[10], i, j;
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    reorder(arr);

    return 0;
}

void reorder(int arr[10])
{
    int i, j;
    for (i = 0; i < 10; i++)
    {

        for (j = i + 1; j < 10; j++)
        {
            int temp;
            if (arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}