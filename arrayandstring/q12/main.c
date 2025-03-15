#include <stdio.h>

int main()
{
    int marks[10], i, j;
    printf("Enter marks of 10 students: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < 10; i++)
    {
        int temp;
        for (j = i + 1; j < 10; j++)
        {
            if (marks[j] > marks[i])
            {
                temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d. %d\n", i + 1, marks[i]);
    }

    return 0;
}