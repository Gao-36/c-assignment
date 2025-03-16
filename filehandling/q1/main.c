#include <stdio.h>

int main()
{
    FILE *file = fopen("test.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file, "Welcome to my college");
    fclose(file);

    return 0;
}
