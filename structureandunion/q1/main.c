#include <stdio.h>

struct Student {
    char name[20];
    int marks;
    char grade;
};

int main() {
    struct Student students[] = {
        {"Ram", 100, 'C'},
        {"Sita", 120, 'B'},
        {"Gita", 130, 'B'},
        {"Gopal", 150, 'A'}
    };
    
    printf("\nName                         Total Marks                        Grade\n");
    printf("--------------------------------------------------------------------------------\n");
    
    for(int i = 0; i < 4; i++) {
        printf("%-25s %25d %25c\n", students[i].name, students[i].marks, students[i].grade);
    }
    
    return 0;
}