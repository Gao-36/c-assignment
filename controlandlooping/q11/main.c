#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("%d", n * n * n);
    } else {
        printf("%d", n * n);
    }
    return 0;
}