#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    int i;
    char line[100];

    fptr = fopen("evennumbers.txt", "w");
    if (fptr == NULL)
    {
        printf("Could not create file");
        return 1;
    }

    for (i = 10; i <= 50; i += 2)
    {
        fprintf(fptr, "%d\n", i);
    }
    fclose(fptr);

    fptr = fopen("evennumbers.txt", "r");
    if (fptr == NULL)
    {
        printf("Could not open file");
        return 1;
    }

    printf("\nEven numbers between 10 and 50:\n");
    while (fgets(line, sizeof(line), fptr) != NULL)
    {
        printf("%s", line);
    }

    fclose(fptr);
    return 0;
}