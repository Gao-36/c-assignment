#include <stdio.h>

struct Student {
    char name[100];
    int rollno;
    float mark;
};

int main() {
    struct Student students[5];
    int i;

    printf("Enter details of 5 students:\n");
    for(i = 0; i < 5; i++) {
        printf("\nEnter name: ");
        scanf("%s", students[i].name);
        printf("Enter roll number: ");
        scanf("%d", &students[i].rollno);
        printf("Enter marks: ");
        scanf("%f", &students[i].mark);
    }

    printf("\nStudents with marks > 50:\n");
    for(i = 0; i < 5; i++)
        if(students[i].mark > 50)
            printf("Name: %s\nRoll No: %d\n", students[i].name, students[i].rollno);

    return 0;
}