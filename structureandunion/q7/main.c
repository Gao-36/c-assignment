#include <stdio.h>

struct book
{
    char name[50];
    int pages;
    float price;
};

int main()
{
    struct book books[5];
    int i, maxIndex = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter book %d name: ", i + 1);
        scanf("%49s", books[i].name);
        printf("Enter number of pages: ");
        scanf("%d", &books[i].pages);
        printf("Enter price: ");
        scanf("%f", &books[i].price);
    }

    for (i = 1; i < 5; i++)
    {
        if (books[i].price > books[maxIndex].price)
        {
            maxIndex = i;
        }
    }

    printf("\nMost Expensive Book:\n");
    printf("Name: %s\n", books[maxIndex].name);
    printf("Pages: %d\n", books[maxIndex].pages);
    printf("Price: %.2f\n", books[maxIndex].price);

    return 0;
}
