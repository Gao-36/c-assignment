#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fptr;
    char str[100], line[100];

    fptr = fopen("new1.dat", "w");
    if (fptr == NULL)
    {
        printf("Could not create file");
        return 1;
    }

    printf("Enter string: ");
    scanf("%s", str);
    fprintf(fptr, "%s", str);
    fclose(fptr);

    fptr = fopen("new1.dat", "r");
    if (fptr == NULL)
    {
        printf("Could not open file");
        return 1;
    }

    printf("\nContent of the file:\n");
    while (fgets(line, sizeof(line), fptr) != NULL)
    {
        printf("%s", line);
    }

    fclose(fptr);
    return 0;
}