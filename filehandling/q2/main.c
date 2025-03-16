#include <stdio.h>

int main()
{
    FILE *file = fopen("test.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    char content[100];
    if (fgets(content, sizeof(content), file) != NULL)
    {
        printf("File content: %s\n", content);
    }

    fclose(file);
    return 0;
}
