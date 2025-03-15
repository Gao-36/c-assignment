#include <stdio.h>

int main()
{
    char c[10];
    printf("Enter a string: ");
    scanf(" %s", c);
    printf("ASCII value of %s = %d\n", c, c);
    return 0;
}