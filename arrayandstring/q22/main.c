#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int vowels = 0, i = 0;
    char str[20];
    printf("Enter a string: ");
    scanf("%s", str);
    while (str[i] != '\0')
    {
        char c = tolower(str[i]);
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowels++;
        }
        i++;
    }
    printf("Number of vowels in %s is %d", str, vowels);
    return 0;
}