#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    printf("enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("\nenter second string: ");
    fgets(str2, sizeof(str1), stdin);

    int result = strcmp(str1, str2);
    if (result > 0)
    {
        printf("first string is greater.");
    }
    else if (result < 0)
    {
        printf("second string is greater.");
    }
    else
    {
        printf("both strings are equal.");
    }
    return 0;
}