#include <stdio.h>

int fibonacci(int n) {
    if(n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    if(n < 0) {
        printf("Please enter a positive number.");
        return 0;
    }
    printf("\nThe Fibonacci series up to %d numbers is:\n", n);
    for(int i = 0; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}