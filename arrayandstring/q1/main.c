#include <stdio.h>

int main()
{
    int arr[10];
    int sum = 0, product = 1, max;
    float avg;
    printf("Enter 10 numbers: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < 10; j++)
    {
        sum += arr[j];
        product *= arr[j];
        for (int k = 0; k < 10; k++)
        {
            if (arr[j] > arr[k])
            {
                max = arr[j];
            }
            else
            {
                max = arr[k];
            }
        }
    }
    avg = (float)sum / 10;
    printf("sum is %d, product is %d, average is %f, and maximum number is %d", sum, product, avg, max);
    return 0;
}