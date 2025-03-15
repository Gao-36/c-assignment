#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    int manualLen = 0;
    printf("Enter your name: ");
    scanf("%s", name);

    printf("length with strlen(): %d\n", strlen(name));

    for (int i = 0; i < 50; i++)
    {
        if (name[i] != '\0')
        {
            manualLen += 1;
        }
        else
        {
            break;
        }
    }
    printf("manual length count: %d", manualLen);

    return 0;
}