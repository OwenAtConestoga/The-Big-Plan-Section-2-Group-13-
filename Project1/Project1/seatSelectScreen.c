// Icebox Sails
// Seat select screen function file 
// CSCN71030 - 23W - Sec1 - Team Based Software Development
// Group 13 - Winter 2023
// Version 1.0

#include <stdio.h>

#include "seatSelectScreen.h"

void seatSelect(int cruiseNumber)
{
	printf("\n<Cruise %d>\n", cruiseNumber);
	puts("a) Show number of empty seats");
	puts("b) Show list of empty seats");
	puts("c) Show list of seats");
	puts("d) Assign a customer to a seat assignment");
	puts("e) Delete desired seat");
	puts("f) Search Seat");
	puts("g) Search Seats by Last Name");
	puts("h) Quit To Top Main Menu");
	puts("---------------------------");
	printf("Command: ");
}