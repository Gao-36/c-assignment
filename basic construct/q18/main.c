#include <stdio.h>

int main()
{
    float r, v;
    float pi = 3.14;
    printf("Enter radius of sphere(in meters): ");
    scanf("%f", &r);
    v = (4.0 / 3.0) * pi * r * r * r;
    printf("Volume of sphere: %.2f meters\n", v);
    return 0;
}
