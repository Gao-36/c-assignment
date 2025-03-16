#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char c;
    int i = 0;
    char str[100];

    fptr = fopen("test.txt", "w");
    if (fptr == NULL) exit(1);

    printf("Enter string: ");
    while ((c = getchar()) != '\n') {
        str[i++] = c;
        fputc(c, fptr);
    }
    str[i] = '\0';
    fputc('\n', fptr);
    fclose(fptr);

    fptr = fopen("test.txt", "r");
    if (fptr == NULL) exit(1);

    printf("String: ");
    while ((c = fgetc(fptr)) != EOF) {
        putchar(c);
    }
    fclose(fptr);
    return 0;
}