#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    
    int* mat1 = malloc(m * n * sizeof(int));
    int* mat2 = malloc(m * n * sizeof(int));
    int* sum = malloc(m * n * sizeof(int));
    
    printf("Enter elements of matrix 1:\n");
    for(int i = 0; i < m * n; i++) scanf("%d", mat1 + i);
    
    printf("\nEnter elements of matrix 2:\n");
    for(int i = 0; i < m * n; i++) scanf("%d", mat2 + i);
    
    for(int i = 0; i < m * n; i++) *(sum + i) = *(mat1 + i) + *(mat2 + i);
    
    printf("\nSum of matrices:\n");
    for(int i = 0; i < m * n; i++) {
        printf("%d ", *(sum + i));
        if(i % n == n - 1) printf("\n");
    }
    
    free(mat1); free(mat2); free(sum);
    return 0;
}