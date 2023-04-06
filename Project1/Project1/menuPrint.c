// Icebox Sails
// Menu Print Function File
// CSCN71030 - 23W - Sec1 - Team Based Software Development
// Group 13 - Winter 2023
// Version 1.0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "userInput.h"
#include "clearBuffer.h"
#include "structs.h"
#include "menuPrint.h"
#include "seatSelectScreen.h"
#include "newSeat.h"
#include "userSeats.h"
#include "numberEmptySeats.h"
#include "listEmptySeats.h"
#include "listSeat.h"

#include "searchSeat.h"

void menuPrint(int cruiseNumber, int arrayNum)
{

	char menuOption = 0;

	do
	{
		seatSelect(cruiseNumber);
		menuOption = userInput();
		clearButter();


		switch (menuOption)
		{

		case 'a': // show number of empty seats
		case 'A':
		{
			numberEmptySeats(arrayNum);
			break;
		}

		case 'b': // show list of empty seats 
		case 'B':
		{
			listEmptySeats(arrayNum);
			break;
		}

		case 'c': // show list of seats with names 
		case 'C':
		{
			listSeat(arrayNum);
			break;
		}

		case 'd': // assign a person to a seat 
		case 'D':
		{
			newSeat(arrayNum);
			break;
		}

		case 'e': // delete a seat 
		case 'E':
		{
			deleteSeat(arrayNum);
			break;
		}

		case 'f': // search a seat
		case 'F':
		{
			searchSeat(arrayNum);
			break;
		}

		case 'g': //search all seats by last name
		case 'G':
		{
			userSeats(arrayNum);
			break;
		}

		case 'h':
		case 'H':
		{
			puts("Going back to Cruise option page.");
			break;
		}

		default:
			printf("\nInvalid option. Try again!\n");	//if a user entered not between 'a' ~ 'h' or 'A' ~ 'H', display the error msg
			continue;
		}


	} while (menuOption != 'h' && menuOption != 'H'); // will loop until user input = H/h

	return;

}