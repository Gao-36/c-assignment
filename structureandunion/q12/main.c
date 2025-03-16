#include <stdio.h>
#include <stdlib.h>

struct Date {
    int day;
    int month;
    int year;
};

int dateDifference(struct Date d1, struct Date d2) {
    int days1 = d1.year * 365 + d1.month * 30 + d1.day;
    int days2 = d2.year * 365 + d2.month * 30 + d2.day;
    return abs(days2 - days1);
}

int main() {
    struct Date date1, date2;
    
    printf("Enter first date (DD MM YYYY): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);
    printf("Enter second date (DD MM YYYY): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);
    
    int difference = dateDifference(date1, date2);
    
    printf("\nDifference between dates: %d days\n", difference);
    
    return 0;
}
