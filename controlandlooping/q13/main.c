#include <stdio.h>

int main()
{
    int n, product = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        int rem = n % 10;
        product *= rem;
        n = n / 10;
    }
    printf("product of the number is %d", product);
    return 0;
}