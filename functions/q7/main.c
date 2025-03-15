#include <stdio.h>

int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int num;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.");
        return 0;
    }
    printf("\nThe factorial of %d is: %d", num, factorial(num));
    return 0;
}