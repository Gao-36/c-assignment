#include <stdio.h>

float multiply(float f, int n) {
    return f * n;
}

int main() {
    float float_num;
    int int_num;
    
    printf("Enter a float number: ");
    scanf("%f", &float_num);
    printf("Enter an integer: ");
    scanf("%d", &int_num);
    
    float product = multiply(float_num, int_num);
    printf("\nThe product is: %.2f\n", product);
    
    return 0;
}