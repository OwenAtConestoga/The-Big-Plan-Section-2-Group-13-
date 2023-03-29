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

#define EXITNUMBER -1


void newSeat(int arrayNum)
{
	extern struct Cruise* cruise;

	srand(time(NULL));

	int seatID;
	seatID = rand() % 12345;

	
		// checks if tasknum is null
		if (seatID == NULL)
		{
			printf("ERROR creating seatID\n");
			exit(EXIT_FAILURE);
		}

		for (int i = 0; i < CAPACITY; i++) {

			if (!cruises[arrayNum].seats[i].assigned) // if seat is not occupied 
			{

				printf("Seat ID number %d\n", seatID);

				cruises[arrayNum].seats[i].idNumber = seatID; // seat number assignment


				// get day and month of task
				printf("Enter First Name: ");
				scanf("%s", cruises[arrayNum].seats[i].firstName);
				printf("Enter Last Name: ");
				scanf("%s", cruises[arrayNum].seats[i].lastName);
				cruises[arrayNum].seats[i].assigned == true; 


				printf("Succesfully assigned seat.\n");

				return;
			}
			else if (cruises[arrayNum].seats[i].assigned == true) // if user tries to get a task that is already taken
			{
				printf("\nSorry, seat ID already!\n");
				return;
			}

		}
		if (seatID == EXITNUMBER) // if input = -1 (the number to abort operation)
		{
			printf("\nQuit!\n");
			return;
		}


}