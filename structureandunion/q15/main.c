#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    float salary;
    struct Date hireDate;
};

int main() {
    struct Employee Person1;
    
    strcpy(Person1.name, "Hari");
    Person1.salary = 50000.0;
    Person1.hireDate.day = 10;
    Person1.hireDate.month = 3;
    Person1.hireDate.year = 2001;

    printf("Employee Name: %s\n", Person1.name);
    printf("Salary: $%.2f\n", Person1.salary);
    printf("Hire Date: %d/%d/%d\n", Person1.hireDate.month, Person1.hireDate.day, Person1.hireDate.year);
    
    return 0;
}