#include <stdio.h>

struct Student {
    char username[9];
    char id[10];
    int pin;
};

int main() {
    struct Student student;
    
    printf("Enter student username (8 characters): ");
    scanf("%8s", student.username);
    printf("Enter student ID (9 characters): ");
    scanf("%9s", student.id);
    printf("Enter 5-digit PIN: ");
    scanf("%5d", &student.pin);
    
    printf("\nStudent Access Information:\n");
    printf("Username: %s\n", student.username);
    printf("ID: %s\n", student.id);
    printf("PIN: %05d\n", student.pin);
    
    return 0;
}
