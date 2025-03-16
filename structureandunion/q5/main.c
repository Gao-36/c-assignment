#include <stdio.h>
#include <string.h>

struct person
{
    char name[30];
    char address[50];
};

int main()
{
    struct person p[5], temp;
    int i, j;

    printf("Enter details:\n");
    for (i = 0; i < 5; i++)
    {
        printf("\nPerson %d:\n", i + 1);
        scanf("%s%s", p[i].name, p[i].address);
    }

    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp(p[i].name, p[j].name) > 0)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    printf("\nSorted records:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Name: %s\n", p[i].name);
        printf("Address: %s\n\n", p[i].address);
    }

    return 0;
}