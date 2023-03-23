// Icebox Sails
// Seat select screen header file 
// CSCN71030 - 23W - Sec1 - Team Based Software Development
// Group 13 - Winter 2023
// Version 1.0

#include <stdio.h>

#include "seatSelectScreen.h"

void seatSelect(int cruiseNumber)
{
	printf("You have selected cruise number %d\n\n", cruiseNumber);
	printf("a) Show number of empty seats\nb) Show list of empty seats\nc) Show list of seats\n");
	printf("d) Assign a customer to a seat assignment\ne) Delete desired seat\n");
	printf("f) Search Seat\n");

	printf("g) Quit To Top Main Menu");
	printf("\n---------------------------");
	printf("\nCommand: ");
}