#include<stdio.h>

int main(){
    int a, b, quotient, remainder;
    printf("Enter the divident and divisor: ");
    scanf("%d %d", &a, &b);
    quotient = a / b;
    remainder = a % b;
    printf("The quotient is %d and remainder is %d.", quotient, remainder);
    return 0;
}