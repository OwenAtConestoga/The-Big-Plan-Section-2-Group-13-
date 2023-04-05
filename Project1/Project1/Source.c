// Icebox Sails
// Main Source File
// Cruise Manager Program
// CSCN71030 - 23W - Sec1 - Team Based Software Development
// Group 13 - Winter 2023
// Version 1.0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "clearBuffer.h"
#include "Input.h"
#include "structs.h"
#include "menuPrint.h"
#include "topLevelMenu.h"
#include "topLevelMenuInput.h"
#include "seatSelectScreen.h"

#include "searchSeat.h"

#include "fileWriter.h"
#include "fileReader.h"

Cruise cruises[NUMCRUISES] = {
	{10, {'\0'}},
	{30, {'\0'}},
	{50, {'\0'}},
	{70, {'\0'}}
};

int main(void)
{
	// read from file 
	fileReader();

	char topUserInput;
	int cruiseNumber;
	int arrayNum;

	// print top menu and get user input
	puts("^_^ Welcome To Icebox Sails! ^_^\n\nPlease select a cruise using the coresponding letter:");
	
	/*topLevelMenuPrint();*/
	/*topMenuInputFunction(&topUserInput);*/	//dont need this anymore
	do 
	{ 
		topLevelMenuPrint();
		//topMenuInputFunction(&topUserInput);
		topUserInput = getc(stdin);
		clearButter();

		switch (topUserInput)
		{

		case 'a': // cruise number 10
		case 'A':
		{
			arrayNum = 0;
			cruiseNumber = 10;
			menuPrint(cruiseNumber, arrayNum);

			break;
		}

		case 'b': // cruise number 30
		case 'B':
		{
			arrayNum = 1;
			cruiseNumber = 30;
			menuPrint(cruiseNumber, arrayNum);
			//topLevelMenuPrint();
			break;
		}

		case 'c': // cruise number 50
		case 'C':
		{
			arrayNum = 2;
			cruiseNumber = 50;
			menuPrint(cruiseNumber, arrayNum);
			//topLevelMenuPrint();
			break;
		}

		case 'd': // cruise number 70
		case 'D':
		{
			arrayNum = 3;
			cruiseNumber = 70;
			menuPrint(cruiseNumber, arrayNum);
			//topLevelMenuPrint();
			break;
		}

		case 'e': // quit
		case 'E':
		{
			goto Exit;
		}

		default:
			printf("\nInvalid option. Try again!\n");	//if a user entered not between 'a' ~ 'e' or 'A' ~ 'E', display the error msg
			continue;
		}
	

	} while (topUserInput != 'e' && topUserInput != 'E'); // will loop until user input = e/E

Exit:

	// writes seats to file 
	fileWriter();
	puts("^_^ Have a nice day ^_^");

	return 0;

}
