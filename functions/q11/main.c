#include <stdio.h>

int sum_numbers() {
    int sum = 0;
    for(int i = 1; i <= 20; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    printf("The sum of first twenty natural numbers is: %d\n", sum_numbers());
    return 0;
}