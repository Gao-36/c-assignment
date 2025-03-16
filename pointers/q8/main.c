#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    
    int *age = (int *)malloc(n * sizeof(int));
    
    if(age == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &age[i]);
    }
    
    for(int i = 0; i < n; i++) {
        if(age[i] > 80) {
            count++;
        }
    }
    
    printf("Number of employees above 80 years: %d\n", count);

    free(age);
    return 0;
}
