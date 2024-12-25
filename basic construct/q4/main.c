#include<stdio.h>

int main(){
    int l, b, area, perimeter;
    printf("Enter the length and breadth of a rectangle: ");
    scanf("%d %d", &l, &b);
    area = l * b;
    perimeter = 2 * (l + b);
    printf("area is %d and perimeter is %d of the rectangle.", area, perimeter);
    return 0;
}