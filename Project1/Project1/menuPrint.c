// Icebox Sails
// Menu Print Function File
// CSCN71030 - 23W - Sec1 - Team Based Software Development
// Group 13 - Winter 2023
// Version 1.0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "Input.h"
#include "structs.h"
#include "menuPrint.h"
#include "seatSelectScreen.h"

#include "searchSeat.h"

void menuPrint(int cruiseNumber, int arrayNum)
{
	extern struct Cruise* cruise;

	char userInput = 0;

	seatSelect(cruiseNumber);

	userInputFunction(&userInput);

	while (userInput != 'g' && userInput != 'G') // will loop until user input = G/g
	{
		switch (userInput)
		{

		case 'a': // show number of empty seats
		case 'A':
		{
			
			break;
		}

		case 'b': // show list of empty seats 
		case 'B':
		{
			
			break;
		}

		case 'c': // show list of seats with names 
		case 'C':
		{
			
			break;
		}

		case 'd': // assign a person to a seat 
		case 'D':
		{
			
			break;
		}

		case 'e': // delete a seat 
		case 'E':
		{
			
			break;
		}

		case 'f': // search a seat
		case 'F':
		{
			searchSeat(arrayNum); 
			seatSelect(cruiseNumber);
			break;
		}

		case 'g':
		case 'G':
		{
			break;
		}

		}
		userInputFunction(&userInput);
	}

	return;

}