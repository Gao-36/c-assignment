#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    int choice;

    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("%.2fC is equal to %.2fF\n", celsius, fahrenheit);
        break;
    case 2:
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = 5.0 / 9.0 * (fahrenheit - 32.0);
        printf("%.2fF is equal to %.2fC\n", fahrenheit, celsius);
        break;
    default:
        printf("Invalid choice! Please enter 1 or 2.\n");
        return 1;
    }
    return 0;
}