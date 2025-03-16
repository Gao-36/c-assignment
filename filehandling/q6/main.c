#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fptr;
    char name[50], address[100], phone[15];
    char line[100];

    fptr = fopen("contacts.txt", "w");
    if (fptr == NULL) {
        printf("Could not create file");
        return 1;
    }

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter address: ");
    scanf("%s", address);
    printf("Enter phone: ");
    scanf("%s", phone);

    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Address: %s\n", address);
    fprintf(fptr, "Phone: %s\n", phone);

    fclose(fptr);

    fptr = fopen("contacts.txt", "r");
    if (fptr == NULL) {
        printf("Could not open file");
        return 1;
    }

    printf("\nSaved Information:\n");
    while (fgets(line, sizeof(line), fptr) != NULL) {
        printf("%s", line);
    }

    fclose(fptr);
    return 0;
}