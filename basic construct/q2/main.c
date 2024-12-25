#include<stdio.h>

int main(){
    int side_length, area;
    printf("Enter side length of the cube: ");
    scanf("%d", &side_length);

    area = 6 * side_length * side_length;
    printf("surface are of cube is %d", area);
    return 0;
}