#include <stdio.h>
#include <string.h>

int main()
{
    int i, len;
    char rev[20];
    char org[20];

    printf("Enter a string: ");
    scanf("%s", org);
    len = strlen(org);
    for (i = 0; i < len; i++)
    {
        rev[i] = org[len - 1 - i];
    }
    rev[len] = '\0';

    strrev(org);

    printf("using strrev(): %s\nwithout using library function: %s", org, rev);
    return 0;
}