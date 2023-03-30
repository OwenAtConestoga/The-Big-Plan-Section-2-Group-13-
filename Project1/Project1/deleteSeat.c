// Icebox Sails
// Delete Seat Function File 
// Cruise Manager Program
// CSCN71030 - 23W - Sec1 - Team Based Software Development
// Group 13 - Winter 2023
// Version 1.0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "structs.h"
#include "deleteSeat.h"

#define INTCHECK 1
#define EXITNUMBER -1
#define LOWERLIMIT -2
#define UPPERLIMIT 9
#define LOWESTSEAT 0


void deleteSeat(int arrayNum)
{
	printf("Please enter seat number to be deleted (or -1 to quit): ");

	int* seatNum = (int*)malloc(sizeof(int));

	if (scanf("%d", seatNum) == INTCHECK) // check return value to see if an int was entered
	{
		// checks if seatnum is null
		if (seatNum == NULL)
		{
			printf("Please enter an integer\n");
			exit(EXIT_FAILURE);
		}

		// if the user input is not equal to our exit number and is within our seat number count (seats 0-9)
		if (*seatNum != EXITNUMBER && *seatNum >= LOWESTSEAT && *seatNum <= UPPERLIMIT)
		{
			if (cruises[arrayNum].seats[*seatNum].assigned == true) { // checks if seat is occupied

				char* reset = "\0";
				strcpy(cruises[arrayNum].seats[*seatNum].firstName, reset);
				strcpy(cruises[arrayNum].seats[*seatNum].lastName, reset); // resets names to null 

				cruises[arrayNum].seats[*seatNum].assigned = false; // deassign the seat

				printf("\nSeat has been successfully deleted.");

			}
			else if (cruises[arrayNum].seats[*seatNum].assigned != true) // if the user tries to delete seat that is already empty
			{
				printf("\nSeat is already empty!\n");
				return;
			}
		}
		if (*seatNum == EXITNUMBER) // if user input is equal to -1 (the number to quit)
		{
			printf("\nQuit!\n");
			return;
		}
		if (*seatNum <= LOWERLIMIT || *seatNum > UPPERLIMIT) // if user input is out of bounds 
		{
			printf("\nPlease enter an integer between 0 and 9!\n");
			return;
		}
		free(seatNum);
	}

	else // any other input that is an invalid seat number, such as a char/string 
	{
		printf("\nPlease enter an integer between 0 and 11!\n");
		return;
	}

}
