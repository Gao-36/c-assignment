#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        int rem = n % 10;
        sum += rem;
        n = n / 10;
    }
    printf("sum of the number is %d", sum);
    return 0;
}