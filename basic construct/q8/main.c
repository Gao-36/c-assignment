#include <stdio.h>

int main() {
    long long int mm;

    printf("Enter length in millimeters: ");
    scanf("%lld", &mm);

    long long int km = mm / 1000000; 
    long long int m = mm / 1000;
    long long int cm = mm / 10;
    
    printf("\nConversion Results:\n");
    printf("Kilometers (km): %lld\n", km);
    printf("Meters (m):      %lld\n", m);
    printf("Centimeters (cm): %lld\n", cm);
    printf("Millimeters (mm): %lld\n", mm);

    return 0;
}