#include <stdio.h>

int main() {
    int array[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    int *ptr = array;
    int i;
    
    for(i = 0; i < 5; i++) {
        sum += *(ptr + i);
    }
    
    printf("Sum of array elements: %d\n", sum);
    
    return 0;
}