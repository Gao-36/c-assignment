#include <stdio.h>

int main()
{
    int amt;
    int pos = 0, neg = 0, zero = 0;
    printf("How many numbers: ");
    scanf("%d", &amt);
    int arr[amt];
    printf("Enter numbers: \n");
    for (int i = 0; i < amt; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < amt; j++)
    {
        if (arr[j] > 0)
        {
            pos = pos + 1;
        }
        else if (arr[j] < 0)
        {
            neg = neg + 1;
        }
        else
        {
            zero = zero + 1;
        }
    }
    printf("positive = %d, negative = %d, zeros = %d", pos, neg, zero);
    return 0;
}