#include <stdio.h>

struct book {
    char name[50];
    int pages;
    float price;
};

int main() {
    struct book b, *ptr;
    ptr = &b;

    printf("Enter book name: ");
    scanf("%49s", ptr->name);
    printf("Enter number of pages: ");
    scanf("%d", &ptr->pages);
    printf("Enter price: ");
    scanf("%f", &ptr->price);

    printf("\nBook Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Pages: %d\n", ptr->pages);
    printf("Price: %.2f\n", ptr->price);
    
    return 0;
}
