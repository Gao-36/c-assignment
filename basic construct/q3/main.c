#include<stdio.h>

int main(){
    int r, area, circumference;
    printf("Enter the radius of a circle: ");
    scanf("%d", &r);
    area = 3.14 * r * r;
    circumference = 2 * 3.14 * r;
    printf("area of the circle is %d and circumference is %d", area, circumference);
    return 0;
}