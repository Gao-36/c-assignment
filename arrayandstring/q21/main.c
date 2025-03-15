#include <stdio.h>

int main()
{
    int lwr = 0, upr = 0, spc = 0, i = 0;
    char str[20];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            upr++;
        }
        else if (str[i] == ' ')
        {
            spc++;
        }
        else
        {
            lwr++;
        }
        i++;
    }

    printf("upper=%d\nlower=%d\nspace=%d", upr, lwr, spc);
    return 0;
}