// Icebox Sails
// Menu Print Function File
// CSCN71030 - 23W - Sec1 - Team Based Software Development
// Group 13 - Winter 2023
// Version 1.0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "clearBuffer.h"
#include "Input.h"
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

	char userInput = 0;

	/*seatSelect(cruiseNumber);

	userInputFunction(&userInput);*/

	do
	{
		seatSelect(cruiseNumber);
		//userInputFunction(&userInput); dont need this anymore
		userInput = getc(stdin);
		clearButter();


		switch (userInput)
		{

		case 'a': // show number of empty seats
		case 'A':
		{
			numberEmptySeats(arrayNum);
			//seatSelect(cruiseNumber);
			break;
		}

		case 'b': // show list of empty seats 
		case 'B':
		{
			listEmptySeats(arrayNum);
			//seatSelect(cruiseNumber);
			break;
		}

		case 'c': // show list of seats with names 
		case 'C':
		{
			listSeat(arrayNum);
			//seatSelect(cruiseNumber);
			break;
		}

		case 'd': // assign a person to a seat 
		case 'D':
		{
			newSeat(arrayNum);
			//seatSelect(cruiseNumber);
			break;
		}

		case 'e': // delete a seat 
		case 'E':
		{
			deleteSeat(arrayNum);
			//seatSelect(cruiseNumber);
			break;
		}

		case 'f': // search a seat
		case 'F':
		{
			searchSeat(arrayNum);
			//seatSelect(cruiseNumber);
			break;
		}

		case 'g': //search all seats by last name
		case 'G':
		{
			userSeats(arrayNum);
			//seatSelect(cruiseNumber);
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


	} while (userInput != 'h' && userInput != 'H'); // will loop until user input = H/h

	return;

}