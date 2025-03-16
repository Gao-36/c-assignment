#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    int i, num;
    char line[100];

    fptr = fopen("numbers.dat", "w");
    if (fptr == NULL) {
        printf("Could not create file");
        return 1;
    }

    for (i = 1; i <= 20; i++) {
        fprintf(fptr, "%d\n", i);
    }
    fclose(fptr);

    fptr = fopen("numbers.dat", "r");
    if (fptr == NULL) {
        printf("Could not open file");
        return 1;
    }

    printf("\nOriginal numbers and their doubles:\n");
    while (fgets(line, sizeof(line), fptr) != NULL) {
        num = atoi(line);
        printf("Number: %d, Double: %d\n", num, num * 2);
    }

    fclose(fptr);
    return 0;
}