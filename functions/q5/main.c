#include <stdio.h>

long int factorial(int n, int count) {
    if(n <= 1) return 1;
    return n * factorial(n-1, count+1);
}

int main() {
    int num;
    
    printf("Enter a positive number: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }
    
    long int result = factorial(num, 1);
    printf("\nThe factorial of %d is: %ld\n", num, result);
    
    return 0;
}