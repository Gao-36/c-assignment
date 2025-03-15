#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    printf("enter your name: ");
    scanf("%s", name);
    printf("your name: %s", strupr(name));
    return 0;
}