// Icebox Sails
// New Seat Function File 
// CSCN71030 - 23W - Sec1 - Team Based Software Development
// Group 13 - Winter 2023
// Version 1.0


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

#include "clearBuffer.h"
#include "input.h"
#include "structs.h"
#include "newSeat.h"

#define EXITNUMBER -1


void newSeat(int arrayNum)
{

	srand(time(NULL));

	int ticketID;
	ticketID = rand() % 12345;
	
		// checks if ticketID is null
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

				printf("Enter First Name: "); // Assign first and last name to customer reservation
				scanf("%s", cruises[arrayNum].seats[i].firstName);
				clearButter();
				printf("Enter Last Name: ");
				scanf("%s", cruises[arrayNum].seats[i].lastName);
				clearButter();
				cruises[arrayNum].seats[i].assigned = true; 
				
				// print out the ticket number and seat number 
				printf("\n<The reservation is successfully done>\n");
				printf("Seat number: %d\n", i + 1);  //The ticket number starts 1
				printf("Ticket number: %d\n", ticketID); 
				printf("Passenger's name: %s %s\n", cruises[arrayNum].seats[i].firstName, cruises[arrayNum].seats[i].lastName);

				return;
			}

			// if they try to add a new seat but the cruise is full
			
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