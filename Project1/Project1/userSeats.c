// Icebox Sails
// User Last Name Search Function File 
// CSCN71030 - 23W - Sec1 - Team Based Software Development
// Group 13 - Winter 2023
// Version 1.0


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "input.h"
#include "structs.h"

#define EXITNUMBER -1
#define LOWERLIMIT -2

void userSeats(int arrayNum) {

	int length = 0;
	char tempLast[NAMESIZE];

	fgetc(stdin); 

	printf("Enter Last Name to search the seats that are under that name: \n");
	fgets(tempLast, NAMESIZE, stdin);
	length = strlen(tempLast);
	tempLast[length - 1] = 0;

	int nameCmp;

	int notFoundCount = 0; 

	for (int i = 0; i < CAPACITY; i++){

		nameCmp = strcmp(tempLast, cruises[arrayNum].seats[i].lastName);

		if (nameCmp == 0) {
			notFoundCount--; 
			printf("\nName: %s %s\n", cruises[arrayNum].seats[i].firstName, cruises[arrayNum].seats[i].lastName);
			printf("Seat ID: %d\n", cruises[arrayNum].seats[i].idNumber);
			printf("\n");


		}

		notFoundCount++;

		if (notFoundCount == CAPACITY)
		{
			printf("Name not found!\n"); 
		}

		



	}
}