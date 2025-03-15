#include <stdio.h>

int power(int a, int b) {
    int result = 1;
    
    if(b < 0) {
        printf("Error: Negative exponents not supported\n");
        return 0;
    }
    
    for(int i = 0; i < b; i++) {
        result *= a;
    }
    
    return result;
}

int main() {
    int base, exponent;
    
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    int result = power(base, exponent);
    if(result != 0) {
        printf("\n%d raised to power %d = %d\n", base, exponent, result);
    }
    
    return 0;
}