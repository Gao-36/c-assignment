#include <stdio.h>

struct Date {
    int day;
    char month[20];
    int year;
};

int main() {
    struct Date Date1 = {25, "February", 1957};
    
    printf("Date: %s %d, %d\n", Date1.month, Date1.day, Date1.year);
    
    return 0;
}