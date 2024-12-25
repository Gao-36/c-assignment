#include<stdio.h>

int main(){
    int num, hours, minutes, seconds;
    printf("Enter a number in seconds: ");
    scanf("%d", &num);
    hours = num / (60 * 60);
    minutes = num / 60;
    seconds = num;
    printf("hours = %d\nminutes = %d\nseconds = %d", hours, minutes, seconds);
    return 0;
}