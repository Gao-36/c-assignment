#include <stdio.h>

int main() {
    int marks[10], i, j, temp, max, min;
    printf("Enter marks of 10 students in C-Programming:\n");
    for (i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            if (marks[j] < marks[j + 1]) {
                temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }
    max = marks[0];
    min = marks[9];
    printf("\nMarks in descending order:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", marks[i]);
    }
    printf("\n\nMaximum marks: %d\n", max);
    printf("Minimum marks: %d\n", min);

    return 0;
}
