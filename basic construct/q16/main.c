#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    if (a > b)
    {
        a += b;
        printf("sum is %d.", a);
    }
    else
    {
        b -= a;
        printf("difference is %d.", b);
    }

    return 0;
}
