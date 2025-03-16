#include <stdio.h>

int main() {
    int n, i, j, temp;
    scanf("%d", &n);
    int marks[n];
    int *ptr = marks;
    for(i = 0; i < n; i++) scanf("%d", ptr + i);
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(*(ptr + i) < *(ptr + j)) {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
    printf("highest marks obtained: \n");
    for(i = 0; i < 5 && i < n; i++) printf("%d\n", *(ptr + i));
    return 0;
}
