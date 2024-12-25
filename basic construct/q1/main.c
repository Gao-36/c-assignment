#include <stdio.h>

int main()
{
    int a, b, sum, diff, mult, div;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    diff = a - b;
    mult = a * b;
    div = a / b;
    printf("sum=%d\ndifference=%d\nproduct=%d\ndivison=%d", sum, diff, mult, div);
}