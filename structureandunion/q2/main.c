#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
    char remarks[30];
};

void input_student(struct student *s) {
    printf("Enter name: ");
    scanf("%49s", s->name);
    printf("Enter roll number: ");
    scanf("%d", &s->roll);
    printf("Enter marks: ");
    scanf("%f", &s->marks);
    printf("Enter remarks: ");
    scanf("%29s", s->remarks);
}

void display_student(struct student s) {
    printf("\nName: %s\n", s.name);
    printf("Roll No: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
    printf("Remarks: %s\n", s.remarks);
}

int main() {
    struct student s;
    
    printf("Enter student details:\n");
    input_student(&s);
    
    printf("\nStudent Details:\n");
    printf("================\n");
    display_student(s);
    
    return 0;
}