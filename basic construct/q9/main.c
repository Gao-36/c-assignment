#include <stdio.h>

int main() {
    int number, original;
    int reversed = 0;
    printf("Enter a three-digit number (100-999): ");
    scanf("%d", &number);
    original = number;
    while (number > 0) {
        int digit = number % 10;
        reversed = (reversed * 10) + digit;
        number /= 10;
    }

    printf("Original Number: %d\n", original);
    printf("Reversed Number: %d\n", reversed);

    return 0;
}