// Icebox Sails
// Main Source File
// Cruise Manager Program
// CSCN71030 - 23W - Sec1 - Team Based Software Development
// Group 13 - Winter 2023
// Version 1.0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "userInput.h"
#include "clearBuffer.h"
#include "structs.h"
#include "menuPrint.h"
#include "topLevelMenu.h"
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

int main(int argc, char* argv[])
{

	char* fileName1 = argv[1];
	char* fileName2 = argv[2];

	printf("\n%s\n ", fileName1);
	printf("%s ", fileName2);

	// read from file 
	fileReader(fileName1, fileName2);

	char cruiseOption;
	int cruiseNumber;
	int arrayNum;

	// print top menu and get user input
	puts("^_^ Welcome To Icebox Sails! ^_^\n\nPlease select a cruise using the coresponding letter:");
	
	do 
	{ 
		topLevelMenuPrint();
		cruiseOption = userInput();
		clearButter();

		switch (cruiseOption)
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
			break;
		}

		case 'c': // cruise number 50
		case 'C':
		{
			arrayNum = 2;
			cruiseNumber = 50;
			menuPrint(cruiseNumber, arrayNum);
			break;
		}

		case 'd': // cruise number 70
		case 'D':
		{
			arrayNum = 3;
			cruiseNumber = 70;
			menuPrint(cruiseNumber, arrayNum);
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
	

	} while (cruiseOption != 'e' && cruiseOption != 'E'); // will loop until user input = e/E

Exit:

	// writes seats to file 
	fileWriter(fileName1, fileName2);
	puts("^_^ Have a nice day ^_^");

	return 0;

}
