#include <stdio.h>
#include <string.h>

struct employee {
    char name[30];
    char address[50];
    float salary;
};

int main() {
    struct employee emp[5], temp;
    int i, j;

    printf("Enter employee details:\n");
    for(i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        scanf("%s%s%f", emp[i].name, emp[i].address, &emp[i].salary);
    }

    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 5; j++) {
            if(strcmp(emp[i].name, emp[j].name) > 0) {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }

    printf("\nSorted employee records:\n");
    for(i = 0; i < 5; i++) {
        printf("Name: %s\n", emp[i].name);
        printf("Address: %s\n", emp[i].address);
        printf("Salary: %.2f\n\n", emp[i].salary);
    }

    return 0;
}