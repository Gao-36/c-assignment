#include <stdio.h>

int main()
{
    char character = 'A';
    float decimal = 3.14;
    int number = 42;

    printf("Address of char variable: %p\n", &character);
    printf("Address of float variable: %p\n", &decimal);
    printf("Address of int variable: %p\n", &number);

    return 0;
}