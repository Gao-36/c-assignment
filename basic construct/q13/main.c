#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, s, area;
    printf("Enter length of first side: ");
    scanf("%d", &a);
    printf("Enter length of second side: ");
    scanf("%d", &b);
    printf("Enter length of third side: ");
    scanf("%d", &c);

    s = (a + b + c) / 2;

    area = sqrt(s * (s-a) * (s-b) * (s-c));

    printf("Area of the triangle = %d\n", area);

    return 0;
}