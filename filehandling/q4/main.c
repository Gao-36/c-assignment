#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fptr;
    char filename[50], text[100];
    printf("Enter filename: ");
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = 0;
    fptr = fopen(filename, "a");
    if (fptr == NULL) exit(1);
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);
    fprintf(fptr, "%s", text);
    fclose(fptr);
    return 0;
}