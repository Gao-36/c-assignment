#include <stdio.h>

struct Airline
{
    char flightNumber[10];
    char originAirport[5];
    char destinationAirport[5];
    char startTime[6];
    char arrivalTime[6];
};

int main()
{
    struct Airline flight;

    printf("Enter flight number: ");
    scanf("%9s", flight.flightNumber);
    printf("Enter originating airport code: ");
    scanf("%4s", flight.originAirport);
    printf("Enter destination airport code: ");
    scanf("%4s", flight.destinationAirport);
    printf("Enter starting time (HH:MM): ");
    scanf("%5s", flight.startTime);
    printf("Enter arriving time (HH:MM): ");
    scanf("%5s", flight.arrivalTime);

    printf("\nFlight Details:\n");
    printf("Flight Number: %s\n", flight.flightNumber);
    printf("Origin: %s\n", flight.originAirport);
    printf("Destination: %s\n", flight.destinationAirport);
    printf("Starting Time: %s\n", flight.startTime);
    printf("Arriving Time: %s\n", flight.arrivalTime);

    return 0;
}
