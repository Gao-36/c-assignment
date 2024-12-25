#include <stdio.h>

int main()
{
    int temp, a, b;
    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("a = %d and b = %d", a, b);
    return 0;
}