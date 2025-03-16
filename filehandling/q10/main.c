#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    int arr[10], i;
    char line[100];

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    fptr = fopen("numbers.dat", "w");
    if (fptr == NULL) {
        printf("Could not create file");
        return 1;
    }

    for (i = 0; i < 10; i++) {
        fprintf(fptr, "%d\n", arr[i]);
    }
    fclose(fptr);

    fptr = fopen("numbers.dat", "r");
    if (fptr == NULL) {
        printf("Could not open file");
        return 1;
    }

    printf("\nNumbers from file:\n");
    while (fgets(line, sizeof(line), fptr) != NULL) {
        printf("%s", line);
    }

    fclose(fptr);
    return 0;
}