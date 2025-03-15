#include <stdio.h>

int sum(int n) {
    if(n <= 0) return 0;
    return n + sum(n-1);
}

int main() {
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    if(n < 0) {
        printf("Please enter a positive number.");
        return 0;
    }
    printf("\nThe sum of the series 1+2+3+...+%d is: %d", n, sum(n));
    return 0;
}