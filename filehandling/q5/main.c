#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fptr;
    char name[50], address[100];
    int roll, marks;

    fptr = fopen("student.txt", "w");
    if (fptr == NULL)
    {
        printf("Could not create file");
        return 1;
    }

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter roll number: ");
    scanf("%d", &roll);
    printf("Enter address: ");
    scanf("%s", address);
    printf("Enter marks: ");
    scanf("%d", &marks);

    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Roll No: %d\n", roll);
    fprintf(fptr, "Address: %s\n", address);
    fprintf(fptr, "Marks: %d\n", marks);

    fclose(fptr);
    return 0;
}