#include <stdio.h>


int add(int a, int b) {
    return a + b;
}


int sub(int a, int b) {
    return a - b;
}


int mul(int a, int b) {
    return a * b;
}


float div(int a, int b) {
    if(b == 0) {
        printf("Error: Division by zero!\n");
        return 0.0;
    }
    return (float)a / b;
}

int main() {
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nResults:\n");
    printf("Addition: %d + %d = %d\n", num1, num2, add(num1, num2));
    printf("Subtraction: %d - %d = %d\n", num1, num2, sub(num1, num2));
    printf("Multiplication: %d * %d = %d\n", num1, num2, mul(num1, num2));
    printf("Division: %d / %d = %.2f\n", num1, num2, div(num1, num2));
    
    return 0;
}