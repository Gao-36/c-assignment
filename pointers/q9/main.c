#include <stdio.h>

int main()
{
    int m, n;

    printf("Enter number of rows (max 10): ");
    scanf("%d", &m);
    printf("Enter number of columns (max 10): ");
    scanf("%d", &n);

    int matrix[10][10], transpose[10][10];
    int(*ptr)[10];

    printf("\nEnter matrix elements:\n");
    ptr = matrix;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", (*(ptr + i) + j));
        }
    }
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(*(transpose + j) + i) = *(*(ptr + i) + j);
        }
    }

    printf("\nTranspose Matrix:\n");
    ptr = transpose;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }

    return 0;
}