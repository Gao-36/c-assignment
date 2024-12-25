#include<stdio.h>

int main(){
    int days, years, months;
    printf("Enter a number: ");
    scanf("%d", &days);
    years = days / 365;
    months = days / 12;
    printf("years = %d\nmonths = %d\ndays = %d", years, months, days);
    return 0;
}