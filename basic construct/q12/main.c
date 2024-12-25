#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float root1, root2;
    float discriminant;
    printf("Enter coefficient a: ");
    scanf("%f", &a);
    printf("Enter coefficient b: ");
    scanf("%f", &b);
    printf("Enter coefficient c: ");
    scanf("%f", &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant >= 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else
    {
        printf("No real roots exist.\n");
    }

    return 0;
}