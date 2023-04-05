// Icebox Sails
// User Last Name Search Function File 
// CSCN71030 - 23W - Sec1 - Team Based Software Development
// Group 13 - Winter 2023
// Version 1.0


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "structs.h"

#define EXITNUMBER -1
#define LOWERLIMIT -2

void userSeats(int arrayNum) {

	int length = 0;
	char tempLast[NAMESIZE];

	clearButter();		// Consume the newline character left in the input buffer.

	printf("Enter Last Name to search the seats that are under that name: ");
	fgets(tempLast, NAMESIZE, stdin);		// Read a string from standard input and store it in tempLast.
	clearButter();
	length = strlen(tempLast);				// Get the length of the input string and remove the newline character.
	tempLast[length - 1] = 0;

	// Declare and initialize local variables.
	int nameCmp;
	int notFoundCount = 0; 

	for (int i = 0; i < CAPACITY; i++){

		nameCmp = strcmp(tempLast, cruises[arrayNum].seats[i].lastName);		// Compare the input last name with the last name for the current seat reservation.
																				// If there is a match, print the details for the seat reservation.
		if (nameCmp == 0) {
			notFoundCount--; 
			printf("\nSeat ID: %d\n", cruises[arrayNum].seats[i].idNumber + 1);
			printf("Tiket number: %d\n", cruises[arrayNum].seats[i].ticketNumber);
			printf("Name: %s %s\n", cruises[arrayNum].seats[i].firstName, cruises[arrayNum].seats[i].lastName);

		}

		notFoundCount++;					// Increment the not found count.
											// If the not found count is equal to the capacity, the input last name was not found.
		if (notFoundCount == CAPACITY)
		{
			puts("\nName not found!"); 
		}
	}
}