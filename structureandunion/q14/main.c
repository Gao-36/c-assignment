#include <stdio.h>
#include <string.h>

struct Flight
{
    char flight[10];
    char dest[20];
    char time[6];
};

struct Flight flights[] = {
    {"AA123", "New York", "08:30"},
    {"DL456", "Chicago", "09:15"},
    {"UA789", "Los Angeles", "10:00"}};

int main()
{
    char code[5];
    int i;
    int found = 0;

    printf("Enter airport code: ");
    scanf("%s", code);

    printf("\nFlights for %s:\n", code);
    printf("Flight  Destination     Time\n");
    printf("---------------------------\n");

    for (i = 0; i < 3; i++)
    {
        if (strcmp(code, flights[i].flight) == 0)
        {
            printf("%s    %s    %s\n", flights[i].flight, flights[i].dest, flights[i].time);
            found = 1;
        }
    }

    return 0;
}