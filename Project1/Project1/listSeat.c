// Icebox Sails
// Top level menu header file
// CSCN71030 - 23W - Sec1 - Team Based Software Development
// Group 13 - Winter 2023
// Version 1.0


#define _CRT_SECURE_NO_WARNINGS
#define MAXSIZE 30

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "input.h"
#include "structs.h"
#include "newSeat.h"

void listSeat(int arrayNum) {

	int counter = 0;

	for (int i = 0; i < CAPACITY; i++) {
		if (cruises[arrayNum].seats[i].assigned == true) // print out the seats that are occupied 
		{
			printf("\n");
			printf("\Seat ID: %d\nTicketNumber: %d\nFirst Name: %s\nLast Name: %s\n", cruises[arrayNum].seats[i].idNumber, cruises[arrayNum].seats[i].ticketNumber, cruises[arrayNum].seats[i].firstName, cruises[arrayNum].seats[i].lastName);
			counter++;
		}
	}

	if (counter == 0) // prints out message if no seats are occupied 
	{
		printf("No seats have been assigned yet!\n");
	}



}