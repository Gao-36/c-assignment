#include <stdio.h>
#include <string.h>

int main()
{
    char names[10][50];

    // Read 10 names
    printf("Enter 10 student names:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Name %d: ", i + 1);
        scanf("%49s", names[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            int k = 0;
            while (names[j][k] == names[j + 1][k])
            {
                if (names[j][k] == '\0')
                    break;
                k++;
            }

            if (names[j][k] > names[j + 1][k])
            {
                char temp[50];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("\nNames in alphabetical order:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}