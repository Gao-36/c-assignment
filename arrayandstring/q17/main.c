#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int i;
    char name[20];
    printf("Emter your name: ");
    scanf("%s", name);
    for (i = 0; i < 20 && name[i] != '\0'; i++)
    {
        if (isupper(name[i]))
        {
            name[i] = tolower(name[i]);
        }
        else
        {
            name[i] = toupper(name[i]);
        }
    }
    printf("your name: %s", name);

    return 0;
}