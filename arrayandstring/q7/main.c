#include <stdio.h>

int main() {
    int numbers[25], i;
    int positive = 0, negative = 0, even = 0, odd = 0;
    printf("Enter 25 numbers:\n");
    for (i = 0; i < 25; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 25; i++) {
        if (numbers[i] > 0) {
            positive++;
        } else if (numbers[i] < 0) {
            negative++;
        }
        if (numbers[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("\nResults:\n");
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}
