// Icebox Sails
// Seat search function file 
// CSCN71030 - 23W - Sec1 - Team Based Software Development
// Group 13 - Winter 2023
// Version 1.0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "searchSeat.h"
#include "structs.h"

#define MAXSIZE 30

void searchSeat(int arrayNum)
{
	int length = 0;
	char tmpFirst[MAXSIZE];
	char tmpLast[MAXSIZE];

	fgetc(stdin); // consumes newline so we can use fgets

	// prompt user for first and last name

	printf("\nSearching a seat by name! Please note it is case sensitive.\n");

	printf("Enter First Name: ");
	fgets(tmpFirst, MAXSIZE, stdin);
	length = strlen(tmpFirst);
	tmpFirst[length - 1] = 0; // gets rid of newline


	printf("Enter Last Name: ");
	fgets(tmpLast, MAXSIZE, stdin);
	length = strlen(tmpLast);
	tmpLast[length - 1] = 0;


	int counterTrue = 0;
	int counterFalse = 0;

	// compare user input to the existing names of the cruise. If there is a direct match (first + last) 
	// then display the information.
	for (int i = 0; i < CAPACITY; i++)
	{
		// compare the user input with all first and last names of those on the plane 
		int value1, value2;
		value1 = strcmp(tmpFirst, cruises[arrayNum].seats[i].firstName);
		value2 = strcmp(tmpLast, cruises[arrayNum].seats[i].lastName);

		// if both values are true, meaning that there was a match 
		if (value1 == 0 && value2 == 0)
		{
			printf("\nName: %s %s - Succesfully confirmed seat\n\n", cruises[arrayNum].seats[i].firstName, cruises[arrayNum].seats[i].lastName);
			counterTrue++;
		}

		else
			counterFalse++;
	}

	// if there was no confirmation (that means the name could not be found)
	if (counterFalse == CAPACITY)
		printf("\nName could not be found, please check spelling and try again.\n\n");

}
