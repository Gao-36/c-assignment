#include <stdio.h>

int main() {
    int num, sum, temp, rem, count = 1;
    
    while (count <= 500) {
        num = count;
        sum = 0;
        
        while (num != 0) {
            rem = num % 10;
            sum += rem * rem * rem;
            num /= 10;
        }
        
        if (sum == count) {
            printf("%d\n", count);
        }
        
        count++;
    }
    
    return 0;
}
