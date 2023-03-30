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

	int ticketID;
	ticketID = rand() % 12345;

	
		// checks if tasknum is null
		if (ticketID == NULL)
		{
			printf("ERROR creating ticketID\n");
			exit(EXIT_FAILURE);
		}




		for (int i = 0; i < CAPACITY; i++) {

	

			if (cruises[arrayNum].seats[i].assigned != true) // if seat is not occupied 
			{
				
				printf("Ticket Number %d\n", ticketID);

				cruises[arrayNum].seats[i].ticketNumber = ticketID; // ticket number assignment

				cruises[arrayNum].seats[i].idNumber = i; 



				printf("Enter First Name: ");
				scanf("%s", cruises[arrayNum].seats[i].firstName);
				printf("Enter Last Name: ");
				scanf("%s", cruises[arrayNum].seats[i].lastName);
				cruises[arrayNum].seats[i].assigned = true; 
				
				printf("\n");
				printf("Succesfully assigned seat.\n");
				printf("\n");

				return;
			}
			
			else if (cruises[arrayNum].seats[9].assigned == true){
				printf("\n");
				printf("---------------------------------------------");
				printf("\n!!!There are no more seats on this cruise!!!\n");
				printf("            We are very sorry:(\n");
				printf("---------------------------------------------");
				printf("\n");
				return;
			}
		}
		


}