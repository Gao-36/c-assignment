#include <stdio.h>

int power(int a, int b) {
    if(b < 0) {
        printf("Error: Negative exponents not supported\n");
        return 0;
    }
    if(b == 0) return 1;
    return a * power(a, b-1);
}

int main() {
    int base, exponent;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    int result = power(base, exponent);
    if(result != 0) {
        printf("\n%d raised to power %d = %d", base, exponent, result);
    }
    return 0;
}