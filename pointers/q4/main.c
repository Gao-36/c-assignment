#include <stdio.h>

int main() {
    int i;
    float f;
    char c;
    
    printf("Size of pointer to int: %zu\n", sizeof(&i));
    printf("Size of pointer to float: %zu\n", sizeof(&f));
    printf("Size of pointer to char: %zu\n", sizeof(&c));
    
    return 0;
}
